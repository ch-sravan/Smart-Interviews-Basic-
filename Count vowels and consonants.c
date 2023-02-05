#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count1=0,count2=0;
    char st[101];
    scanf("%s",st);
    for(int i=0;st[i]!='\0';i++){
        if(st[i]<'a'){
            st[i]=tolower(st[i]);
        }
        if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u'){
            count1++;
        }
        else 
            count2++;
    }
    printf("%d %d\n",count1,count2);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
