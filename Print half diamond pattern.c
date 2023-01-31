#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,c,r;
    scanf("%d",&t);
    for(r=1;r<=t;r++){
        for(c=1;c<=r;c++){
            printf("*");
        }
        printf("\n");
    }
    for(r=t;r>=0;r--){
        for(c=0;c<r-1;c++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
