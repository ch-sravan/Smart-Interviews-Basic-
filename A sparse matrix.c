#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int r,c,count=0;
    scanf("%d%d",&r,&c);
    int m[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&m[i][j]);
            if(m[i][j]==0)
                count++;
        }
    }
    int a=(r*c)/2;
    
    if(count>a)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
