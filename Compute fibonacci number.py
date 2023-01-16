a=1
b=1
count=1
n=int(input())
temp=0
for i in range(n):
    temp=b
    b=a+b
    a=temp
    count=count+1
    if(count==n-1):
        print(b)
    elif(n==1 or n==2):
        print(1)
