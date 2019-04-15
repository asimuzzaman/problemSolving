from sys import stdin

for line in stdin:
    child, choco = [int(x) for x in line.split()] # treated as list, convert to INT from STR
    rem = choco % child
    print(child - rem)