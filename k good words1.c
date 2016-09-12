#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void countcharacter(char *str);
int main()
{
    char str[]="possessions";
    countcharacter(str);
    return 0;
}
void countcharacter(char *str)
{
    int count[256]={0};
    int length=strlen(str),i;
    for(i=0;i<length;i++)
    {
        count[str[i]]++;
    }
    int min=count[str[0]];
    for(i=1;i<length;i++)
    {
        if(min>count[str[i]])
        {
            min=count[str[i]];
        }
    }
    int count1=0;
    for(i=0;i<length;i++)
    {
        if((count[str[i]]-min)>3)
        {
            count1++;
        }
    }
    printf("%d",count1);
}
