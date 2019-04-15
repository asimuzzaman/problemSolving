counter = [0 for x in range(10)] # initializing list

num = int(input())

while num != 0:
    rem = num % 10
    num = num // 10 # Integer division/floor division
    counter[rem-1] = counter[rem-1] + 1

maxIndex, max = -1, -1

for i, x in enumerate(counter): # for getting index of loop
    if x > max:
        max = x
        maxIndex = i

print(maxIndex+1)