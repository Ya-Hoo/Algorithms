def gcd(a:int, b:int) -> int: # output GCD(a, b)
    while b > 0:
        a %= b
        a, b = b, a
    return a

print(gcd(123120, 15))