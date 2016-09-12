#include<stdio.h>
int main()
{
    int a[100],n,i,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        res=(a[i])^(a[i+1]);
        a[i+1]=res;
    }
    printf("%d",a[n-1]);
    return 0;
}
