#include<stdio.h>
#include<stdlib.h>
void quicksort(int a[],int l,int r);
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int i,a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        quicksort(a,0,n-1);
        int count=0,count1=1;
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                count=count+1;
                continue;
            }
            count1=count1+1;
        }
        if((count1-count)==k)
        {
            printf("Perfect Husband\n");
        }
        else if((count1-count)<k)
        {
            printf("Bad Husband\n");
        }
        else if((count1-count)>k)
        {
            printf("Lame Husband\n");
        }
        t--;
    }
}
void quicksort(int a[],int l,int r)
{
    int pivot;
    if(l<r)
    {
        pivot=partition(a,l,r);
        quicksort(a,l,pivot-1);
        quicksort(a,pivot+1,r);
    }
}
int partition(int a[],int l,int r)
{
    int left=l,right=r,pivot=a[l],temp;
    while(left<right)
    {
        while(a[left]<=pivot)
        {
            left++;
        }
        while(a[right]>pivot)
        {
            right--;
        }
        if(left<right)
        {
            temp=a[left];
            a[left]=a[right];
            a[right]=temp;
        }
    }
    a[l]=a[right];
    a[right]=pivot;
    return right;
}
