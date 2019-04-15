t = int(input())

for x in range(t):
    line = input()
    num1, num2 = [int(x) for x in line.split()] # convert to INT in one line
    average = (num1 + num2) // 2 # Integer division

    if average % 2 == 0:
        print("Sadia will be happy.")
    else:
        print("Oops!") 