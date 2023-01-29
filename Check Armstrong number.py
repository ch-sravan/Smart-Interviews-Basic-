a=int(input())
c=0
t=a
while t>0:
    b=t%10
    c=c+b**3
    t//=10
if a==c:
    print("Yes")
else:
    print("No")
