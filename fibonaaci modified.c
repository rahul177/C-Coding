#include<stdio.h>
int main()
{
    int a,b,n,i;
    scanf("%d %d %d",&a,&b,&n);
    printf("%d",fib(a,b,n));
    return 0;
}
int fib(int a,int b,int n)
{
    if(n==a)
    {
        return a;
    }
    if(n==b)
    {
        return b;
    }
    else
    {
        return (fib(a,b,n-1)*fib(a,b,n-1))+fib(a,b,n-2);
    }
}
