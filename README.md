# Round-2 SQIsign GMP 최대 비트 길이 실험

기존 Round-2 SQIsign의 서명 및 GMP 기반 정수 연산을 사용해, Round-3의 소수와 키·커밋먼트 혼합 차수를 적용했을 때 서명 중 나타나는 최대 정수 비트 길이를 측정한다. 각 시행은 새 키 쌍을 생성한 뒤 고정된 공개 메시지에 서명한다. 측정은 `Sign` 호출 동안 GMP 정수 연산에 전달되거나 반환된 정수의 절댓값을 대상으로 한다.

| 보안 레벨 | 시행 수 | 관측 최대 비트 길이 |
|---|---:|---:|
| NIST-I | 65,536 | 14,901 |
| NIST-III | 65,536 | 22,833 |
| NIST-V | 65,536 | 30,293 |

표의 값은 각 CSV의 `max_bits` 열에서 계산한 실측 최댓값이다. [Round-2 기준 소스](https://github.com/SQISign/the-sqisign/tree/91e9e464fe5400192d13e1f9240cbf180200a103) · [Round-3 명세](https://sqisign.org/spec/sqisign-20260901.pdf)

## 파일 구성

- [`results/`](results/)에는 [NIST-I](results/peak_bits_lvl1.csv), [NIST-III](results/peak_bits_lvl3.csv), [NIST-V](results/peak_bits_lvl5.csv)의 최종 CSV가 있다. 각 파일은 `trial,max_bits` 헤더와 시행별 데이터 65,536행으로 구성된다.
- [`experiments/gmp_peak_bits/`](experiments/gmp_peak_bits/)에는 C 실험 드라이버, 순차·병렬 실행기, 빌드와 실행 안내가 있다.
- [`src/`](src/)에는 Round-2 구현, GMP 관측 코드, 새 파라미터로 생성한 테이블이 있다. [`scripts/precomp/`](scripts/precomp/)에는 테이블 생성 코드가 있다.
- `CMakeLists.txt`, `.cmake/`, `include/`는 빌드 설정과 공개 헤더다.

파라미터 선택, 호환성 변경, 시스템 GMP 빌드 명령은 [실험 README](experiments/gmp_peak_bits/README.md)에 정리했다.
