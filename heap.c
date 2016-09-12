#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int a[],int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && a[l]>a[largest])
    {
        largest=l;
    }
    if(r<n && a[r]>a[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(&a[i],&a[largest]);
        heapify(a,n,largest);
    }
}
void heapsort(int a[],int n)
{
    int i;
    for(i=(n-1)/2;i>=0;i--)
    {
        heapify(a,n,i);
    }
    for(i=n-1;i>=0;i--)
    {
        swap(&a[0],&a[i]);
        heapify(a,i,0);
    }
}
int main()
{
    int a[]={4,1,6,8,3,9},i;
    heapsort(a,6);
    for(i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
