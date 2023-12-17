"""
Program to generate all binary numbers of length n

The 
"""


import os

directory = fr"{os.getcwd()}\\Enrichment\\book\\bstrGen\\"
InputFile = "bstr.inp"
OutputFile = "bstr.out"

x = ""

with open(directory+InputFile, 'r') as f:
    n = int(f.readline())
    x = ["0"] * n
    
with open(directory+OutputFile, 'w') as f:
    binary = ''.join(x[::-1])
    f.write(binary+"\n")
    while x != ["1"]*n:
        for i in range(n):
            if x[i] == "0":
                x[i] = "1"
                break
            else:
                x[i] = "0"
        binary = ''.join(x[::-1])
        f.write(binary+"\n")
