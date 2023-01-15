#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int m1[r][c],m2[r][c],mat3[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    for( i=0;i<r;i++){
        for(j=0;j<c;j++){
            mat3[i][j]=m1[i][j]+m2[i][j];
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
        
    }
    

    
    return 0;
}
