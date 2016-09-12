#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *left;
    struct node *right;
};
struct node *root;
struct node *insert(struct node *r,int data);
void inorder(struct node *r);
int main()
{
    root=NULL;
    int n,v,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&v);
        root=insert(root,v);
    }
    inorder(root);
    return 0;
}
struct node *insert(struct node *r,int data)
{
    if(r==NULL)
    {
        r=(struct node*)malloc(sizeof(struct node));
        r->value=data;
        r->left=NULL;
        r->right=NULL;
    }
    else if(data<r->value){
        r->left=insert(r->left,data);
    }
    else
    {
        r->right=insert(r->right,data);
    }
    return r;
}
