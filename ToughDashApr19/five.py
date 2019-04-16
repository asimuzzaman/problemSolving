lower = 0
upper = 1000000

for i in range(25):
    print((lower+upper)//2)
    inp = input()
    
    if inp == "Smaller":
        upper = (lower+upper)//2 - 1 # choosing bigger half
    elif inp == "Bigger":
        lower = (lower+upper)//2 +1 # choosing smaller half
    else:
        break