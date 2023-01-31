#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,c,r;
    scanf("%d",&n);
    for(r=n;r>=1;r--){
        for(c=n;c>=1;c--){
           
            if(r==n-c+1)
                printf("*");
            else
                 printf("%d",c);
        }
        printf("\n");
    }
    
    
    return 0;
}
