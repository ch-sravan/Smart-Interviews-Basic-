#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     char str[101];
        scanf("%s",&str);
        for(int i=0;str[i]!='\0';i++)
        {
            if(i%2!=0)
                printf("%c",str[i]);
        }
        for(int i=0;str[i]!='\0';i++)
        {
            if(i%2==0)
                printf("%c",str[i]);
        }
    return 0;
}
