#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char st[101];
    int count=0;
    scanf("%s",st);
    for(int i=0;st[i]!='\0';i++){
        if(st[i]<'a'){
            st[i]=tolower(st[i]);
        }
        if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u'){
            
        }
        else{
            count=1;
            break;
        }
    }
    if(count==0){
        printf("Yes\n");}
    else{
        printf("No\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
