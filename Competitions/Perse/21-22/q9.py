def take_pic():
    lit_grid = []
    lit_count = 0
    for y in range(10):
        row = input()
        for x in range(10):
            if int(row[x]) == 1:
                lit_grid.append([y, x])
                lit_count += 1
    return lit_grid, lit_count
    
    

pic_coords, lit = take_pic()
total = 0
for i in range(5):
    lits, _ = take_pic()
    prev_vector = [pic_coords[0][0] - lits[0][0], pic_coords[0][1] - lits[0][1]]
    if len(lits) == len(pic_coords):
        for i in range(len(lits)-1):
            vector = [pic_coords[i][0] - lits[i][0], pic_coords[i][1] - lits[i][1]]
            if vector == prev_vector:
                total += 1
                
print(total * lit)