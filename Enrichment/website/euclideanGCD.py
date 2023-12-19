"""
"""

def gcd(a:int, b:int) -> int: # output GCD(a, b)
    while b > 0:
        a %= b
        a, b = b, a
    return a

def lcd(a:int, b:int) -> int: # output LCD(a, b)
    return a*b//gcd(a, b)

print(gcd(10, 15))
print(lcd(10, 15))