#include<stdio.h>
#include<stdlib.h>
void ins_start();
struct node
{
    int data;
    struct node* next;
}*head=0,*nextnode,*temp;
struct node* createlist()
{
    nextnode=(struct node*)malloc(sizeof(struct node));
    return nextnode;
}
void ins_start(struct node *head,int data)
{
    struct node *pp=malloc(sizeof(struct node));
    pp->data=data;
    pp->next=head;
    head=pp;
    return head;
}
void insert(int size)
{
int num;
static int i=0;
if(i<size)
{
    printf("Enter your number: ");
    struct node *nextnode=createlist();
    scanf("%d",&nextnode->data);
    nextnode->next=0;
    if(head==0)
    head=temp=nextnode;
    else
    {
        temp->next=nextnode;
        temp=nextnode;
    }
    return ;
}
else
{
    printf("array is full");
    return ;
}

}
void main()
{
    int size,i=0;
    printf("Enter your size: ");
    scanf("%d",&size);
    while(i++<size)
    {
    insert(size);

    }
    i=0;
    temp=head;
    while(temp!=0)
    {
       printf("%d ",temp->data);
       temp=temp->next;
    }
}
