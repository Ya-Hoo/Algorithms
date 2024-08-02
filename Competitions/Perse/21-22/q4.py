huh = ["how", "what", "why", "who", "when", "where"]
while True:
    command = input()
    if command == "goodbye":
        print("see you!")
        break
    elif command[-1] == "?" or command.split()[0] in huh:
        print("not sure really")
    else:
        print("but why?")