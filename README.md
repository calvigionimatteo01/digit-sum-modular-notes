# Digit Sum and Modular Congruences

This repository contains a short mathematical note studying the congruence

\[
2S(n) - p \equiv n \pmod{p},
\]

where \( S(n) \) denotes the sum of the decimal digits of a positive integer \( n \).

---

## Overview

At first glance, one might expect a direct relationship between the digit sum \( S(n) \) and modular arithmetic modulo \( p \). However, this is generally not the case.

Instead, the congruence

\[
2S(n) - p \equiv n \pmod{p}
\]

should be interpreted as a **selection condition**: for each fixed modulus \( p \), it defines a subset of integers satisfying the relation.

---

## Main idea

Rewriting the congruence gives

\[
2S(n) \equiv n \pmod{p}.
\]

This shows that the problem depends on how the digit sum \( S(n) \) behaves modulo \( p \).

A key classical fact is:

\[
n \equiv S(n) \pmod{9},
\]

which follows from the decimal representation (\(10 \equiv 1 \mod 9\)).

This relation naturally extends only to moduli dividing 9 (such as \( p = 3 \) or \( p = 9 \)). For general \( p \), no direct correspondence exists.

---

## Example: \( p = 3 \)

For \( p = 3 \), we have:

\[
S(n) \equiv n \pmod{3},
\]

so the condition becomes

\[
2n \equiv n \pmod{3},
\]

which implies

\[
n \equiv 0 \pmod{3}.
\]

Hence, the congruence holds exactly for multiples of 3.

---

## Active integers

For each modulus \( p \), define the set

\[
A_p = \{ n \in \mathbb{N} : 2S(n) - p \equiv n \pmod{p} \}.
\]

These are referred to as **active integers** with respect to \( p \).

The structure of \( A_p \) depends strongly on \( p \):

- for \( p = 3 \), \( A_p \) consists of multiples of 3;
- for moduli related to 9, digit sums interact naturally with congruences;
- for general \( p \), the behavior appears less regular.

---

## Repository contents

- `note.tex` — LaTeX source of the note  
- `note.pdf` — compiled version  

---

## Remarks

This note is exploratory in nature. The goal is not to claim a general identity, but to investigate a family of congruence conditions involving digit sums.

Possible directions for further work:

- computational exploration of \( A_p \) for specific values of \( p \);
- classification of patterns for different moduli;
- comparison with known integer sequences.

---

**Author:** Matteo Calvigioni
