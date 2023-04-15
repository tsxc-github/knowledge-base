import os
import random
import time
rand=random.Random()
rand.seed(time.ctime())
aout=str("")
bout=str("")

def run():
    global aout,bout
    inFile=open("data.in", "w")
    num=rand.randint(1, 114514)
    a=rand.randint(1, num)
    b=rand.randint(1, num)
    
    inFile.write(str(a)+str(num-(a+b))+str(b))
    inFile.write("\n")
    inFile.write(str(num))
    os.system("cd \"C:\\code\\knowledge-base\\docs\\Learning  Notes\\code\\\"")
    os.system("g++ .\\a.cpp -o temp.exe -O3 -std=c++14\n")
    os.system(".\\temp.exe 0<data.in 1>a.out\n")
    aout=open("a.out", "r").read()
    os.system("g++ .\\b.cpp -o temp.exe -O3 -std=c++14\n")
    os.system(".\\temp.exe 0<data.in 1>b.out\n")
    bout=open("b.out", "r").read()
run()
while aout==bout:
    print("OK")
    run()
print("ERROR")