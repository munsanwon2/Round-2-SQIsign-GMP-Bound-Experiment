#!/usr/bin/env python3
from sage.all import *
proof.all(False)  # faster

import re
for l in open('sqisign_parameters.txt'):
    for k in ('lvl', 'p', 'num_orders'):
        m = re.search(rf'^\s*{k}\s*=\s*([x0-9a-f]+)', l)
        if m:
            v = ZZ(m.groups()[0], 0)
            globals()[k] = v

f = (p+1).valuation(2)
lambda_security = {1: 128, 3: 192, 5: 256}[lvl]
field_bits = p.nbits()
response_length = (field_bits + 1) // 2

__all__ = ['lvl', 'p', 'f', 'num_orders', 'lambda_security', 'field_bits', 'response_length']

