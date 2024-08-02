first = int(input())
second = int(input())

amt1 = float(min(first, second) + max(first, second) / 100)
amt2 = float(max(first, second) + min(first, second) / 100)

print(f"£{min(amt1, amt2)}")
if not(amt1 > 20 or amt2 > 20):
    print(f"£{max(amt1, amt2)}")