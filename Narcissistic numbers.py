n=input()
t=0
sum=0

for i in range(len(n)):
    t=int(n[i])
    sum=sum+(t**(len(n)))

n=int(n)

if sum==n:
    print("Yes")
else:
    print("No")
