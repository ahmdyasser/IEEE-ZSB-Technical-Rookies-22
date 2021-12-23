scores = []
names = []
sortedArr = []

for _ in range(int(input())):
    
    name = input()
    score = float(input())
    scores.append(score)
    names.append(name)

s = set(scores) 
s.remove(min(s))
secMin = min(s)

for i in range(0, len(names)):
    if scores[i] == secMin:
        sortedArr.append(names[i])

sortedArr.sort()
for i in range(0, len(sortedArr)):
    print(sortedArr[i])

