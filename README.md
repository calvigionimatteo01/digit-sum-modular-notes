Digit Sum Modular Notes

This repository contains notes exploring a relation between the digit sum of an integer and modular arithmetic.

Main idea

We investigate expressions of the form:

2 * S(n) - p ≡ n (mod p)

where:

- S(n) is the sum of the digits of n (in base 10)
- p is a fixed modulus

Important remark

This relation does not hold for all integers n.

A simple counterexample is:

- n = 2
- p = 3

In this case:

- S(2) = 2
- 2 * S(n) - p = 4 - 3 = 1
- n mod p = 2

So:
1 ≠ 2 (mod 3)

This shows that the initial relation is not universally valid, and any correct formulation must include additional conditions or restrictions.

Contents

- note.tex → LaTeX source file of the notes
- note.pdf → compiled version (readable)

Status

This work is exploratory and may contain inaccuracies or incomplete generalizations.
It is shared as a starting point for discussion and further investigation.

Author

Matteo Calvigioni

Notes

If you are interested in modular arithmetic or digit-based properties of integers, feel free to take inspiration or suggest improvements.
