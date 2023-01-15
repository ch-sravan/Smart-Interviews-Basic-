n=int(input())
x=[]
arr=list(map(int,input().strip().split()))
for i in range(n):
    c=arr.count(arr[i])
    if(c==1):
        x.append(arr[i])
for k in x:
    print(k,end=" ")
