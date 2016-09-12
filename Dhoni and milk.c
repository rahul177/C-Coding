#include<stdio.h>
void main()
{
    int n,m,k,a[n];
    int i;
    printf("Enter the No. of Jars Available: ");
    scanf("%d\n",&n);
    printf("Enter the Maximum number of time dhoni drink from from jars: ");
    scanf("%d\n",&m);
    printf("Maximum amount of milk dhoni will drink: ");
    scanf("%d\n",&k);
    printf("Enter amount of milk in jars: ");
    i=max(a,n);

}
int max(int a[],int n)
{
    int max=a[0],j,i;
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            j=i;
        }
    }
    return j;
}
