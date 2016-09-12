    #include<stdio.h>
    #include<string.h>
    int main()
    {
        int n;
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,i=0;
        while(a[i]!='\0')
        {
            if(a[i]=='a')
            {
                flag1=1;
            }
            if(a[i]=='e')
            {
                flag2=1;
            }
            if(a[i]=='i')
            {
                flag3=1;
            }
            if(a[i]=='o')
            {
                flag4=1;
            }
            if(a[i]=='u')
            {
                flag5=1;
            }
            i++;
        }
        if(flag1==1 && flag2==1 && flag3==1 && flag4==1 && flag5==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
