c = int(input())
r = int(input())
grid = []
subgrids = [[], [], [], []]
for y in range(r):
    grid.append([int(i) for i in input()])

sub_x, sub_y = c // 2, r // 2
total = 0
top_left = [[0, 0], [0, sub_x], [sub_y, 0], [sub_y, sub_x]]

for index, coords in enumerate(top_left):
    delta_y, delta_x = coords
    for y in range(sub_y):
        new_y = y + delta_y
        line = []
        for x in range(sub_x):
            line.append(grid[new_y][x+delta_x])
        subgrids[index].append(line)
            
for y in range(sub_y):
    for x in range(sub_x):
        overlap = 1
        for i in range(4):
            overlap &= subgrids[i][y][x]
        total += overlap

print(total)