#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,l;
    scanf("%s",&s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
        else
        {
            s[i]=s[i]-32;
        }
    }
    printf("%s",s);
    return 0;
}
