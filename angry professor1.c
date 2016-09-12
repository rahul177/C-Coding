#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,a0;
    scanf("%d",&t);
    for(a0 = 0; a0 < t; a0++){
        int n;
        int k;
        scanf("%d %d",&n,&k);
        int a[n],c=0,a_i;
        for(a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
            if(a[a_i]>=0)
                {c=c+1;}
        }
        if(c>=k)
            {printf("NO\n");}
        else
            {printf("YES\n");}
    }
    return 0;
}

