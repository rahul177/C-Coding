#include<stdio.h>
#define MAX 1000000007
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        long n,m,k;
        scanf("%ld %ld %ld",&n,&m,&k);
        long int a[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(m*k>a[i])
            {
                a[i]=a[i]%m;
            }
            else
            {
                a[i]=a[i]-(m*k);
            }
        }
        long int sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        printf("%ld\n",(sum)%MAX);
        t--;
    }
    return 0;
}
