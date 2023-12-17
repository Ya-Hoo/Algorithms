def binpow(a:int, b:int):
    result = 1
    while b > 0:
        if b % 2 == 1: # this can be simplified to b & 1
            result *= a
        a *= a
        b >>= 1 # the same as // 2
    return result

print(binpow(3, 10))