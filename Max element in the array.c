#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    int max=INT_MIN;
    scanf("%d",&t);
    int arr[t];
    for (int i=0;i<t;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max)
            max=arr[i];
    }
    printf("%d\n",max);
    return 0;
}
