# Digit Sum and Modular Congruences

This repository contains a short mathematical note studying the congruence:

2 * S(n) - p ≡ n (mod p)

where S(n) is the sum of the decimal digits of a positive integer n.

---

## Overview

This is NOT a general identity.

Instead, the congruence

2 * S(n) - p ≡ n (mod p)

is studied as a **selection condition**: for each fixed modulus p, it defines a subset of integers satisfying the relation.

---

## Reformulation

Since p ≡ 0 (mod p), the condition is equivalent to:

2 * S(n) ≡ n (mod p)

So the problem reduces to comparing the digit sum S(n) with n modulo p.

---

## Digit sum and modular arithmetic

A classical fact:

n ≡ S(n) (mod 9)

This comes from the decimal system (10 ≡ 1 mod 9).

This relation extends naturally only to moduli dividing 9 (like p = 3 or p = 9).

For general p, there is no simple relation between S(n) and n mod p.

---

## Example: p = 3

For p = 3:

S(n) ≡ n (mod 3)

So:

2 * S(n) ≡ n (mod 3)
→ 2n ≡ n (mod 3)
→ n ≡ 0 (mod 3)

Conclusion:

2 * S(n) - 3 ≡ n (mod 3)

holds if and only if n is a multiple of 3.

---

## Active integers

For each p, define:

A_p = { n in N : 2 * S(n) - p ≡ n (mod p) }

These are called **active integers**.

Behavior depends on p:

- p = 3 → multiples of 3
- p related to 9 → structured behavior
- general p → more irregular

---

## Alternative formulation

Write n in base 10:

n = sum of d_i * 10^i  
S(n) = sum of d_i

Then:

2 * S(n) - n ≡ 0 (mod p)

becomes:

sum of d_i * (2 - 10^i) ≡ 0 (mod p)

---

## Repository contents

- note.tex → LaTeX source  
- note.pdf → compiled note  

---

## Remarks

This is an exploratory note.

Goal: study a condition involving digit sums and modular arithmetic, not claim a general identity.

Possible extensions:

- compute A_p for specific p
- classify solutions
- compare with known sequences

---

Author: Matteo Calvigioni
