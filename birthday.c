#include<stdio.h>
#include<math.h>
int main()
{
    int i,t;
    float p;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int res;
        scanf("%f",&p);
        res=(1-sqrt(1+(4*2*365*log(1/1-p)))/2;
        printf("%d\n",res);
    }
    return 0;
}
