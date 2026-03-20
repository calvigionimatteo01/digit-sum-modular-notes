# Digit Sum Modular Notes

A small personal exploration of a relation between digit sums and modular arithmetic.

## Core Relation

We study the congruence:

2S(n) ≡ n (mod p)

where S(n) denotes the sum of the decimal digits of n.

## Read the Note

👉 [Open the PDF](./note.pdf)

## Overview

Starting from an informal "block-based" intuition, the work develops step by step into:

- a modular formulation  
- an explicit congruence  
- a digit-based representation using decimal expansion  
- a periodic structure based on powers of 10 modulo p  

## Key Idea

By writing n in base 10, the relation can be rewritten as a weighted sum of digits:

Σ dᵢ (2 − 10ⁱ) ≡ 0 (mod p)

Under the assumption gcd(10, p) = 1, the sequence 10ⁱ (mod p) is periodic, which induces a periodic structure on the coefficients.

## Contents

- `note.tex` — LaTeX source  
- `note.pdf` — compiled version (recommended for reading)  

## Note

This is an exploratory mathematical note, developed from a personal intuition and refined with the assistance of ChatGPT as a tool for clarification and structuring.

## Author

Matteo Calvigioni
