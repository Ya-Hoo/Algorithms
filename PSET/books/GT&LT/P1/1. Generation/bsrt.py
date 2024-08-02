"""
Program to generate all binary numbers of length n

Mechanism:
1. starts with configuration of a binary length n with all bits set to 0
2. add 1
3. repeat until every bit is 1
"""

def bstrGen(n:int):
    x = ["0"] * n # starting configuration = 0
    binList = []
    for i in range(1 << n):
        binary = ''.join(x[::-1])
        binList.append(binary)
        for i in range(n): # adding 1: change "0" --> "1" until meet first "1"
            if x[i] == "0":
                x[i] = "1"
                break
            x[i] = "0"
    return binList

print(bstrGen(4))