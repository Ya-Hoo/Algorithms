size = int(input())

grid = []
for y in range(size):
    row = input()
    if row != "."*size:
        grid.append([char for char in row])

for x in range(size):
    left = [i[0] for i in grid]
    flag = False
    for i in left:
        if i != ".":
            flag = True

    if flag == False:
        for y in range(len(grid)):
            grid[y].pop(0)
    else:
        break
        
for x in range(len(grid[0])):
    right = [i[-1] for i in grid]
    flag = False
    for i in right:
        if i != ".":
            flag = True

    if flag == False:
        for y in range(len(grid)):
            grid[y].pop()
    else:
        break
            
for y in range(len(grid)):
    for x in range(len(grid[0])):
        print(grid[y][x], end="")
    print()