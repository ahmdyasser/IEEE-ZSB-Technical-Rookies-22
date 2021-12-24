import random

hit = 0
miss = 0
rnd1 = str(random.randint(0,9))
rnd2 = str(random.randint(0,9))
rnd3 = str(random.randint(0,9))
rndNumber = rnd1 + rnd2 + rnd3

print(rndNumber)
x = ""
while x != rndNumber:
    x = str(input())

    if x[0] == rnd1:
        hit += 1
    else:
            miss +=1 

    if x[1] == rnd2:
        hit += 1
    else:
        miss += 1
    
    if x[2] == rnd3:
        hit += 1
    else:
        miss +=1 
        
    print("hit: ", hit, "miss: ", miss)
    hit = 0 
    miss = 0
    
    


print("you guessed right")
