#include<stdio.h>
#include<string.h>
#define ASCII_SIZE 256
char getMaxOccuringChar(char* str)
{
    int count[ASCII_SIZE] = {0};
    int len = strlen(str),i;
    for (i=0; i<len; i++)
        count[str[i]]++;

    int max = -1,min;
    char result,result1;
    for (i = 0; i < len; i++) {
        if (max < count[str[i]]) {
            max = count[str[i]];
            result = str[i];
        }
    }
    for(i=1;i<len;i++)
    {
        min=count[str[i-1]];
        if(min<count[str[i]])
        {
            min=count[str[i-1]];
        }
    }

    printf("%d",max);
    printf("%d",min);

    return result;
}

int main()
{
    char str[] = "defenselessness";
    printf("Max occurring character is :%c",getMaxOccuringChar(str));
    return 0;
}
