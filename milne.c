#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 20
float equation(float x,float y)
{
    return(1+(y*y));
}
void main()
{
    int i=0,count=-1,search;
    float lower,upper,h,y1,xvalue[MAX],yvalue[MAX],result;
    float function[MAX],final,temp;
    printf("Predictor Corrector Method ");
    printf("\n");
    printf("\nEnter the lower bound of x  :  ");
    scanf("%f",&lower);
    printf("\nEnter the upper bound of x  :  ");
    scanf("%f",&upper);
    printf("\nEnter the value of y(lower) :  ");
    scanf("%f",&y1);
    printf("\nEnter the value of h        :  ");
    scanf("%f",&h);
    printf("\nEnter the value of x for which you want to find y :");
    scanf("%f",&search);
    xvalue[i]=lower;
    yvalue[i]=y1;
    for(i=0;xvalue[i]<=upper;i++)
    {
        xvalue[i+1]=xvalue[i]+h;
    }
    for(i=0;xvalue[i]<=upper;i++)
    {
        result=equation(xvalue[i],yvalue[i]);
        yvalue[i+1]=yvalue[i]+(h*result);
    }
    printf("\n\n");
    printf("The table is   ");
    printf("\n\n");
    printf(" i     x       y      f(x,y)   ");
    printf("\n\n");
    for(i=0;xvalue[i]<=upper;i++)
    {
        function[i]=equation(xvalue[i],yvalue[i]);
        printf(" %d.  %.4f  %.4f  %.4f ",i,xvalue[i],yvalue[i],function[i]);
        count=count+1;
        printf("\n");
    }
    yvalue[search]=yvalue[count-3]+(4*h/3)*((2*function[count-2])-(function[count-1])+(2*function[count]));
    final=equation(search,yvalue[search]);
    yvalue[search]=yvalue[count-1]+(h/3)*((function[count-1])+(4*function[count])+final);
    printf("\n\n");
    printf("Approximate value is :  %.4f  ",yvalue[search]);
    getch();
}
