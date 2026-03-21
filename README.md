# Digit Sum Modular Notes

A small personal exploration of digit sums and modular arithmetic.

## Overview

Let `S(n)` denote the sum of the decimal digits of a positive integer `n`.

A classical fact is:

- `n ≡ S(n) (mod 9)`

This follows by writing `n` in decimal positional form:

- `n = a_0 + a_1*10 + a_2*10^2 + ... + a_k*10^k`

with decimal digits `a_i in {0,1,...,9}`, so that

- `S(n) = a_0 + a_1 + ... + a_k`

Since

- `10 ≡ 1 (mod 9)`

and congruence is preserved under powers, we get

- `10^i ≡ 1 (mod 9)` for all `i >= 0`

hence

- `n ≡ S(n) (mod 9)`.

## Exploratory direction

This note also explores congruences of the form:

- `2S(n) ≡ n (mod p)`

or equivalently

- `2S(n) - p ≡ n (mod p)`

for suitable integers `n` and moduli `p`.

## Important remark

These relations do **not** hold in general for all `n` and `p`.

For example, with `n = 2` and `p = 3`:

- `S(2) = 2`
- `2S(2) = 4`
- `4 ≡ 1 (mod 3)`, while `2 ≡ 2 (mod 3)`

so the congruence fails.

Therefore, the non-classical relation should be understood as an exploratory pattern, not as a general theorem.

## Key idea

By writing `n` in decimal form, one can rewrite the condition in terms of the digits as a weighted congruence involving coefficients of the form:

- `2 - 10^i`

This leads naturally to modular and periodic considerations, especially when `gcd(10, p) = 1`.

## Contents

- `note.tex` — LaTeX source
- `note.pdf` — compiled version

## Note

This repository is exploratory in nature. It does not claim a new general theorem, but documents a mathematical investigation starting from an informal intuition.

## Author

Matteo Calvigioni
