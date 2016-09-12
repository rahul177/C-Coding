#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n;
        scanf("%d",&n);
        int a[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int j,flag=0;
        for(i=0;i<n-1;i++)
        {
            int count=1;
            for(j=i;j<n-1;j++)
            {
                if(a[j]!=a[j+1])
                {
                    break;
                }
                count++;
            }
            if(count%3==0 && (n/3)==(count/3))
            {
                flag=1;
                printf("YES\n");
            }
        }
        if(flag==0)
        {
        printf("NO\n");
        }
        t--;
    }
    return 0;
}
