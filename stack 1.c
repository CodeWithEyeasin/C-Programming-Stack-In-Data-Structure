#include<stdio.h>
int stack[5],top=-1;
void push();
void pop();
void display();
int main()
{
    int ch;
    printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
    while(1)
    {
        printf("\nEnter Your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
            default :printf("Invalid Choice");
        }
    }


    return 0;
}
void push()
{
    int item;
    if(top==5-1)
    {
        printf("Stack is full");
    }
    else
    {
        printf("Push element in stack:");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Popped %d",stack[top]);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top>=0)
    {
        printf("Stack elements:\n");
        for(i=top;i>=0;i--)
        {
            printf("Stack[%d] = %d\n",i,stack[i]);
        }
    }
    else
    {
        printf("Stack is empty");
    }
}
