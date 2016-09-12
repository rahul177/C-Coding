#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    unsigned int ut,res;
    for(i=0;i<t;i++)
    {
        scanf("%u",&ut);
        res=~ut;
        printf("%u\n",res);
    }
    return 0;
}
