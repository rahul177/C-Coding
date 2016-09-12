#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *create(int data)
{
    struct stack *temp=(struct stack*)malloc(sizeof(struct stack));
    temp->data=data;
    temp->next=NULL;
    return temp;
}
void push(struct stack **top,int data)
{
    struct stack *temp=create(data);
    temp->next=*top;
    *top=temp;
}
int isEmpty(struct stack *top)
{
    return !top;
}
int pop(struct stack **top)
{
    struct stack *temp=*top;
    if(isEmpty(*top))
    {
        return INT_MAX;
    }
    int pop;
    pop=temp->data;
    *top=temp->next;
    free(temp);
    return pop;
}
int main()
{
    int n;
    struct stack *top=NULL;
    scanf("%d",&n);
    int i,a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==0)
        {
            pop(&top);
        }
        else
        {
            push(&top,a);
        }
    }
    int sum=0;
    while(!isEmpty(top))
    {
        sum=sum+pop(&top);
    }
    printf("%d",sum);
}
