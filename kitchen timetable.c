#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t>0)
    {
        int n;
        scanf("%d",&n);
        int a[n],b[n],c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=0;i<n;i++)
        {
            int diff=0;
            if(i==0)
            {
                diff=a[i];
            }
            else
            {
                diff=a[i]-a[i-1];
            }
            if(diff>=b[i])
            {
                c=c+1;
            }
        }
        printf("%d\n",c);
        t--;
    }
    return 0;
}
