#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 366

int party (int n);
main()
{
    int trial, bday, n, guests;
    float percent, total, i;
    printf("How many parties are there? ");
    scanf("%d", &trial);
    printf("How many guests attend? ");
    scanf("%d", &guests);
    srand(time(NULL));
    for (i=1; i<=trial; i++)
    {
        bday = party(n);
    }
    if (bday == 1)
    {
        total += 1;
    }
    percent = (float)total/guests*100.0;
    printf("The Probablity of people with the same birthday is %0.2f\n", percent);
    }
    int party (int n)
    {
    int days;
    int frequency [SIZE] = {0};
    days = 1 + rand() % 365;
    ++frequency[days];
    if (frequency[days] <= 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
