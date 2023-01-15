#include <stdio.h>
#define MAX_SIZE 100
int main()
    
{
    long long arr[MAX_SIZE];
    long long size,i;
    scanf("%lld", &size);
    for(i=0; i<size; i++)
    {
        scanf("%lld",&arr[i]);
    }
    
    for(i=size-1;i>=0;i--)
    {
        printf("%lld\t",arr[i]);
    }

    return 0;
}
