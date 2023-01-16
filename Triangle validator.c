#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long long a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    if((a+b<=c)||(a+c<=b)||(b+c<=a))
        printf("No");
    else
        printf("Yes");
    return 0;
}
