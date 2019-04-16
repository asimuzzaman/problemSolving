t = int(input())

for x in range(t):
    line = input()
    balls = 0
    length = len(line)
    
    # items = [line[y] for y in range(length)]
    for i in range(length):
        if '0' <= line[i] <= '6' or line[i] == 'O':
            balls += 1

    over = balls // 6
    balls = balls % 6

    if over > 1:
        print(over,"OVERS ", end ='') # prints the line without \n, new line
    elif over == 1:
        print("1 OVER ", end = '')
    
    if balls > 1:
        print(balls,"BALLS", end = '')
    elif balls == 1:
        print("1 BALL", end = '')
    
    print()

