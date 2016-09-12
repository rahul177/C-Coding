#include<stdio.h>
#include<math.h>
#define h 1000000007
int main()
{
int i,t;
scanf("%d",&t);
for(i=0;i<t;i++)
{
unsigned long long int m,n;
int res;
scanf("%llu",&m);
scanf("%llu",&n);
res=(unsigned long long int)(pow(m,n))%(h);
printf("%d\n",res);

}
return 0;
}
