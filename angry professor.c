#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,n,k,i,j,c=0;
    int *a;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d ",&n);
        scanf("%d\n",&k);
        a=(int *)malloc(sizeof(int)*n);
        for(j=0;j<n;j++)
        {
            scanf("%d",a);
            if((*a)>=0)
            {
               c=c+1;
            }
        }
        if(c>=k)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
