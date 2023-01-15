n=int(input())
arr=list(map(int,input().strip().split()))
for i in range(n):
    c=arr.count(arr[i])
    if(c==2):
        print(arr[i])
        break
