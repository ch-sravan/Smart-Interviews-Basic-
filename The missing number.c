#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int arr[100],sum=0;
    for(int i=0;i<100;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
        
    }
    printf("%d",5050-sum);
   return 0;
}
