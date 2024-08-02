alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
pi = "31415926535897932384626433832795028841971693993751"

msg = input()

new_msg = ""
for i in msg:
    if i != " ":
        new_msg += i

for index, char in enumerate(new_msg):
    left_right = 1
    if index % 2 != 0:
        left_right = -1
        
    shift = int(pi[index]) * left_right
    
    new_index = (alphabet.index(char) + shift) % len(alphabet)
    new_char = alphabet[new_index]
    print(new_char, end="")