#include <stdio.h>
#include <string.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(int *a, int l, int r)
{
   int i;
   if (l == r)
    for(i=l;i<=r;i++)
   {
     printf("%d\n", a[i]);
   }
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i));
       }
   }
}

/* Driver program to test above functions */
int main()
{
    int number[10],i;
    for(i=0;i<3;i++)
    {
        scanf("%d",number[i]);
    }
    int n = 3;
    permute(number, 0, n-1);
    return 0;
}
