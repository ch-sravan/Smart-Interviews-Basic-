#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int r,c;
    scanf("%d%d",&r,&c);
    int mat[r][c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for (int i=0;i<c;i++){
        int sum=0;
        for (int j=0;j<r;j++){
            sum+=mat[j][i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
