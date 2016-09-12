#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next;
};
void push(struct list **head,int num);
void print(struct list **head);
void reverse(struct list **head);
int main()
{
    int n;
    struct list *head=NULL;
    printf("No of element in linked list");
    scanf("%d",&n);
    int i,num;
    printf("Give the number for enter in linked list\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        push(&head,num);
    }
    print(&head);
    printf("\n");
    reverse(&head);
    print(&head);
}
void push(struct list **head,int num)
{
    struct list *new_node=(struct list*)malloc(sizeof(struct list));
    new_node->data=num;
    new_node->next=(*head);
    (*head)=new_node;
}
void print(struct list **head)
{
    struct list *temp=*head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void reverse(struct list **head)
{
    struct list *temp=*head;
    struct list *next=NULL;
    struct list *prev=NULL;
    while(temp!=NULL)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    *head=prev;
}
