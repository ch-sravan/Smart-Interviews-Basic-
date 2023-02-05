#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,k,count=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==k)
        {
            count=i+1;
        }
    }
    if (count>=1)
        printf("%d",count-1);
    else
        printf("-1\n");
    
    return 0;
}
