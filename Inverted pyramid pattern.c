#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n-r+1;c++){
            if(r==1||r==n||c==1||c==n-r+1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
