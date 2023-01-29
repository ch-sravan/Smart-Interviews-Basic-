n=int(input())
for i in range(1,n+1):
    k=i
    l=n 
    for j in range(1,i+1): 
        print(k,end=' ') 
        l-=1
        k+=l 
    print()
