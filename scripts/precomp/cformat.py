#!/usr/bin/env python3
from functools import cache
from pathlib import Path
import re
import sage.all

class Ibz:
    def __init__(self, v):
        self.v = int(v)
    def _literal(self, sz):
        val = int(self.v)
        sgn = val < 0
        num_limbs = (abs(val).bit_length() + sz-1) // sz if val else 0
        limbs = [(abs(val) >> sz*i) & (2**sz-1) for i in range(num_limbs or 1)]
        data = {
                '._mp_alloc': 0,
                '._mp_size': (-1)**sgn * num_limbs,
                '._mp_d': '(mp_limb_t[]) {' + ','.join(map(hex,limbs)) + '}',
            }
        return '{{' + ', '.join(f'{k} = {v}' for k,v in data.items()) + '}}'

class FpEl:
    def __init__(self, n, p, montgomery=True):
        self.n = n
        self.p = p
        self.montgomery = montgomery
    @staticmethod
    @cache
    def __get_radix(p, word_size, arith=None):
        if arith == "ref" or arith is None:
            if word_size == 16:
                return 13   # Unused legacy output branch.
            directory = Path("../../../gf/ref") / Path.cwd().name
            source, = directory.glob(f"fp_*_{word_size}.c")
            code = source.read_text()
            radix = int(re.search(r"^#define Radix (\d+)$", code, re.MULTILINE)[1])
            limbs = int(re.search(r"^#define Nlimbs (\d+)$", code, re.MULTILINE)[1])
            assert limbs == (p.bit_length() + radix - 1) // radix
            assert int(re.search(r"^// (0x[0-9a-f]+)$", code, re.MULTILINE)[1], 16) == p
            return radix
        elif arith == "broadwell":
            return word_size
        raise ValueError(f'Invalid arithmetic implementation type \"{arith}\"')
    def _literal(self, sz, arith=None):
        radix = self.__get_radix(self.p, sz, arith=arith)
        l = (self.p.bit_length() + radix - 1) // radix
        # If we're using Montgomery representation, we need to multiply
        # by the Montgomery factor R = 2^nw (n = limb number, w = radix)
        if self.montgomery:
            R = 1 << (radix * l)
        else:
            R = 1
        el = (self.n * R) % self.p
        vs = [(int(el) >> radix*i) % 2**radix for i in range(l)]
        return '{' + ', '.join(map(hex, vs)) + '}'

class Object:
    def __init__(self, ty, name, obj):
        if '[' in ty:
            idx = ty.index('[')
            depth = ty.count('[]')
            def rec(os, d):
                assert d >= 0
                if not d:
                    return ()
                assert isinstance(os,list) or isinstance(os,tuple)
                r, = {rec(o, d-1) for o in os}
                return (len(os),) + r
            dims = rec(obj, depth)
            self.ty = ty[:idx], ''.join(f'[{d}]' for d in dims)
        else:
            self.ty = ty, ''
        self.name = name
        self.obj = obj

    def _declaration(self):
        return f'extern const {self.ty[0]} {self.name}{self.ty[1]};'

    def _literal(self):
        def rec(obj):
            if isinstance(obj, int):
                if obj < 256: return str(obj)
                else: return hex(obj)
            if isinstance(obj, sage.all.Integer):
                if obj < 256: return str(obj)
                else: return hex(obj)
            if isinstance(obj, Ibz):
                literal = "\n#if 0"
                for sz in (16, 32, 64):
                    literal += f"\n#elif GMP_LIMB_BITS == {sz}"
                    literal += f"\n{obj._literal(sz)}"
                return literal + "\n#endif\n"
            if isinstance(obj, FpEl):
                literal = "\n#if 0"
                for sz in (16, 32, 64):
                    literal += f"\n#elif RADIX == {sz}"
                    if sz == 64:
                        literal += "\n#if defined(SQISIGN_GF_IMPL_BROADWELL)"
                        literal += f"\n{obj._literal(sz, 'broadwell')}"
                        literal += "\n#else"
                        literal += f"\n{obj._literal(sz, 'ref')}"
                        literal += "\n#endif"
                    else:
                        literal += f"\n{obj._literal(sz, 'ref')}"
                return literal + "\n#endif\n"
            if isinstance(obj, list) or isinstance(obj, tuple):
                return '{' + ', '.join(map(rec, obj)) + '}'
            if isinstance(obj, str):
                return obj
            raise NotImplementedError(f'unknown type {type(obj)} in Formatter')
        return rec(self.obj)

    def _definition(self):
        return f'const {self.ty[0]} {self.name}{self.ty[1]} = ' + self._literal() + ';'

class ObjectFormatter:
    def __init__(self, objs):
        self.objs = objs

    def header(self, file=None):
        for obj in self.objs:
            assert isinstance(obj, Object)
            print(obj._declaration(), file=file)

    def implementation(self, file=None):
        for obj in self.objs:
            assert isinstance(obj, Object)
            print(obj._definition(), file=file)