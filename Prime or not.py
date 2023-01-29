n=int(input())
count=0
if n>10:
    if n%2==0 or n%3==0 or n%5==0 or n%7==0:
        print("No")
    else:
        print("Yes")
else:
    for i in range(1,n):
        if n%i==0:
            count=count+1
    if count==2:
        print("Yes")
    else:
        print("No")
