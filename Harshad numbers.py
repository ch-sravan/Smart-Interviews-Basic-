n=input()
sum=0
t=0
for i in range(len(n)):
    t=int(n[i])
    sum=sum+t
n=int(n)
if(n%sum==0):
    print("Yes")
else:
    print("No")
