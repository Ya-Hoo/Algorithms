grid = []
for y in range(6):
    grid.append(list([x for x in input()]))

direction = [[-1, 0], [1, 0], [0, 1], [0, -1]]
travelled = []
start = [0, 0]
for y in range(6):
    for x in range(6):
        cell = grid[y][x]
        if cell == "#":
            start = [y, x]
           
available = True
while available:
    for travel in direction:
        new_y, new_x = (start[0]+travel[0])%6, (start[1]+travel[1])%6
        if grid[new_y][new_x] == "0" and ([new_y, new_x] not in travelled):
            available = True
            travelled.append(start)
            grid[new_y][new_x] = "#"
            grid[start[0]][start[1]] = "0"
            start = [new_y, new_x]
            break
        available = False
print()
for y in range(6):
    for x in range(6):
        print(grid[y][x], end="")
    print()