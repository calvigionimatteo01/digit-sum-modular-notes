# Digit Sum and Modular Congruences

This repository contains a short mathematical note studying the congruence

\[
2S(n) - p \equiv n \pmod{p},
\]

where \( S(n) \) denotes the sum of the decimal digits of a positive integer \( n \).

---

## Overview

This work does **not** claim a general identity relating digit sums and modular arithmetic.

Instead, the congruence

\[
2S(n) - p \equiv n \pmod{p}
\]

is studied as a **selection condition**: for each fixed modulus \( p \), it defines a subset of integers satisfying the relation.

---

## Reformulation

Since \( p \equiv 0 \pmod{p} \), the congruence is equivalent to

\[
2S(n) \equiv n \pmod{p}.
\]

Thus, the problem reduces to comparing the digit sum \( S(n) \) with \( n \) modulo \( p \).

---

## Digit sum and modular arithmetic

A classical property of the decimal representation is:

\[
n \equiv S(n) \pmod{9},
\]

which follows from the fact that \( 10 \equiv 1 \pmod{9} \).

As a consequence, this relation extends naturally to moduli dividing 9 (such as \( p = 3 \) or \( p = 9 \)).

For general values of \( p \), no simple congruence directly relates \( S(n) \) and \( n \mod p \).

---

## Example: \( p = 3 \)

For \( p = 3 \), we have:

\[
S(n) \equiv n \pmod{3}.
\]

Substituting into the condition

\[
2S(n) \equiv n \pmod{3},
\]

we obtain

\[
2n \equiv n \pmod{3},
\]

which implies

\[
n \equiv 0 \pmod{3}.
\]

Therefore, the congruence

\[
2S(n) - 3 \equiv n \pmod{3}
\]

holds if and only if \( n \) is a multiple of 3.

---

## Active integers

For each modulus \( p \), define the set

\[
A_p = \{ n \in \mathbb{N} : 2S(n) - p \equiv n \pmod{p} \}.
\]

These are referred to as **active integers** with respect to \( p \).

The structure of \( A_p \) depends strongly on the modulus:

- for \( p = 3 \), \( A_p \) consists of multiples of 3;
- for moduli related to 9, digit sums interact naturally with congruences;
- for general \( p \), the structure of \( A_p \) appears more irregular.

---

## Alternative formulation

Writing \( n \) in base 10 as

\[
n = \sum_{i=0}^{k} d_i 10^i,
\]

we have

\[
S(n) = \sum_{i=0}^{k} d_i.
\]

The condition

\[
2S(n) - n \equiv 0 \pmod{p}
\]

can then be rewritten as

\[
\sum_{i=0}^{k} d_i (2 - 10^i) \equiv 0 \pmod{p}.
\]

This provides a digit-wise interpretation of the condition.

---

## Repository contents

- `note.tex` — LaTeX source of the note  
- `note.pdf` — compiled version  

---

## Remarks

This note is exploratory in nature. The goal is to study a family of congruence conditions involving digit sums, rather than to establish a general identity.

Possible directions for further work include:

- computational exploration of \( A_p \) for specific moduli;
- classification of residue classes satisfying the condition;
- comparison with known integer sequences.

---

**Author:** Matteo Calvigioni
