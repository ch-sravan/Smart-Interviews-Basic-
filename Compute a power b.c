#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a,b,res;
    scanf("%lld%lld",&a,&b);
    res=pow(a,b);
    printf("%lld",res);
    return 0;
}
