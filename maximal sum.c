#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
    {return a;}
    else{return b;}
}
int min(int a[],int r,int f)
{
    int i,min=a[r];
    for(i=r+1;i<=f;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    return min;
}
int maximalSubArraySum(int a[],int size)
{
   int maximum = a[0];
   int currentmax = a[0];
   int end=0,start=0;
   int i,sum;

   for (i = 1; i < size; i++)
   {
       if(a[i] > (currentmax+a[i])){
			currentmax = a[i];
			start = i;
		}
		else{
			currentmax = currentmax + a[i];
		}

		if(currentmax >= maximum){
			maximum=currentmax;
			end = i;
		}
   }
   if(size==1 || size==2)
   {
       printf("%d",maximum);
   }
   else
   {
       sum=maxmal_sum(a,start,end);
       printf("%d",sum);
   }
}
int maxmal_sum(int a[],int r,int f)
{
    int i,sum=0,min1;
    min1=min(a,r,f);
    for(i=r;i<=f;i++)
    {
        if(a[i]!=min1)
        {
            sum=sum+a[i];
        }
    }
    return sum;
}
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
        maximalSubArraySum(a,n);
        printf("\n");
        t--;
   }
   return 0;
}
