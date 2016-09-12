#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,c,a0;
    scanf("%d",&t);
    for(a0 = 0; a0 < t; a0++){
        int n,count=0,p;
        scanf("%d",&n);
        p=n;
        while(p>0)
            {
            c=p%10;
            if(c!=0 && n%c==0)
            {
                count++;
            }
            p=p/10;
        }
        printf("%d",count);
        printf("\n");
    }
    return 0;
}
