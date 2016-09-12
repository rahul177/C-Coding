#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n;
    float num,sum=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%f",&num);
        sum=sum+(num/2);
    }
    printf("%.1f",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
