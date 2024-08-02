while True:
    first, second = input().split()
    a, b = len(first), len(second)
    if first != second:
        for i in range(max(a, b)):
            try:
                if first[i] != second[i]:
                    print(f"{first[i]} {second[i]}")
                    break
            except:
                if i == a:
                    print(f"_ {second[i]}")
                else:
                    print(f"{first[i]} _")
                break
        break