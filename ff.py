from itertools import chain, combinations
from sympy import isprime

def prime_factorization(n):
    factors = []
    p = 2
    while p * p <= n:
        if n % p == 0:
            factors.append(p)
            n //= p
        else:
            p += 1
    if n > 1:
        factors.append(n)
    return factors

def subsets(iterable):
    s = list(iterable)
    return chain.from_iterable(combinations(s, r) for r in range(1, len(s) + 1))

def primourite_numbers(y):
    factors = prime_factorization(y)
    subsets_sum = set()
    for subset in subsets(factors):
        subset_sum = sum(subset)
        if isprime(subset_sum):
            subsets_sum.add(subset_sum)
    return subsets_sum

def visitable_islands(y, distinctiveness_scores, islands):
    allowed_scores = primourite_numbers(y)
    return [island for island in islands if island in allowed_scores]