#include<stdio.h>
#include<stdlib.h>
int arr[10],top=-1,n=10;
void push();
void pop();
void peek();
void Display();
void main()
{
    int choice;
    while(1)
    {
        printf("\t\n---------------------Stack Menu----------------------\n");
        printf("Enter your choice:\n");
        printf("1.Push\n2.pop\n3.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            exit (0);
        }

    }
}
void push()
{
    int var;
    if(top==n)
    printf("\tOverflow");
    else{
        printf("Enter your element: ");
        scanf("%d",&var);
        top++;
        arr[top]=var;
    }
}
void pop()
{
    if(top==-1)
    printf("\tUnderflow");
    else{
        top--;
    }
}
