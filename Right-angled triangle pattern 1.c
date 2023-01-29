#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,a=1;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(i>=j)
                printf("%d ",a++);
        }
        printf("\n");
    }
    
    return 0;
}
