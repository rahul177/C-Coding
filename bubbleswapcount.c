#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,a[n];int count=0,temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
    	for(j=0;j<n-i-1;j++)
    	{
    		if(a[j]>a[j+1])
    		{
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
    			count++;
    		}
    	}
    }
    printf("%d",count);
    return 0;
}

