#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char str[101];
    for(int i=0;i<101;i++){
        scanf("%s",&str[i]);
        if(str[i]>='a' && str[i]<='z')
            str[i]=toupper(str[i]);
        else
            str[i]=tolower(str[i]);  
    }
    printf("%s",str);
    return 0;
}
