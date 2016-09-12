#include <stdio.h>

int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int n,count=0;
		scanf("%d",&n);
		while(n>0)
		{
			n=n&(n-1);
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
