#include<stdio.h>
#include<stdlib.h>
#define MAX 1000000007
int main()
{
    int n,*a;
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    long long int p=1;
    for(i=0;i<n;i++)
    {
        p=(p*a[i])%MAX;
    }
    printf("%lld",p);
    return 0;
}
