#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=0,*newnode, *temp;
int main()
{
    int choice;
    printf("do u want to continue(0,1)");
    scanf("%d",&choice);
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof (struct node));
        scanf(“%d”, &newnode->data);
        newnode-> next= 0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
}
