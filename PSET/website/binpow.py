"""
Efficiently compute powers in O(log n) time

Split exponent into binary counterparts (ie: 13 --> 1101)
We then realise that an exponent can be done by multiplying a to the 
power of the corresponding set bit in b (aka multiplying if b is odd):
    3^13 = 3^8 * 3^4 * 3^1
These exponents are easier to compute as it is just the square of the previous base 2
"""

def binpow(a:int, b:int) -> int: # outputs a^b
    result = 1
    while b > 0:
        if b % 2 == 1: # this can be simplified to b & 1
            result *= a
        a *= a
        b >>= 1 # compute the exponent
    return result

print(binpow(3, 10))