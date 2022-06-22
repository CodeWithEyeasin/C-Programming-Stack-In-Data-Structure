#include<stdio.h>
#include <stdlib.h>
#define size 5
int Top=-1,stack_arr[size];
void push();
void pop();
void display();

void push()
{
    int x;
    if(Top==size-1)
    {
        printf("\n stack overflow!!\n");
    }
    else
        {
        printf("\n enter the element to be inserted:");
        scanf("%d",&x);
        Top=Top+1;
        stack_arr[Top]=x;
    }
}



void pop()
{
    if(Top==-1)
    {
        printf("\n stack is empty,no element to delete\n");
    }
    else
        {
        printf("\popped element:%d",stack_arr[Top]);
        Top=Top-1;
    }
}


void Display()
{
    if(Top==-1)
    {
        printf("\n stack is empty,nothing to display");

    }
    else
    {
        printf("\n elements in the stack are: \n");
        for (int i=0;i<=Top;i++)
        {
            printf("%d\t",stack_arr[i]);
        }
    }
}
int main()
{

    int choice;
     printf("stack operation:\n");
     printf("______\n");
     printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
          while (1)
           {
               printf("\nEnter your choice: ");
               scanf("%d/n",&choice);
               switch(choice)
               {
                   case 1:push();
                      break;
                   case 2:pop();
                      break;
                   case 3:Display();
                      break;
                   case 4:exit(0);
                      break;
                   default:
                        printf("\ninvalid choice\nenter choice again\n ");
               }
           }
           return 0;
}
