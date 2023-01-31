#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#include <stdio.h>

int main() {
    // Write C code here
    int a,b;
    scanf("%d%d",&b,&a);
    for(int r=1;r<=a;r++){
        for(int c=1;c<=b;c++){
            if(r==1||r==a||c==1||c==b)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
