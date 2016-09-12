#include <stdio.h>
#define MAX 1000000007
int main()
{
    long long int a;
    scanf("%lld",&a);
    a=((a)^(MAX-2))%MAX;
    printf("%lld",a);
    return 0;
}
