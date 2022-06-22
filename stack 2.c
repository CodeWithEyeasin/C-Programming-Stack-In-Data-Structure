#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#define max 5
int arr[max];
int tos=-1;
void push(int data)
{
    if(tos==max-1)
    {
        printf("Overflow\n");
        return;
    }
    tos+=1;
    arr[tos]=data;
}
int pop()
{
    if(tos==-1)
    {
        printf("Underflow\n");
        exit(1);
    }
    int value;
    value=arr[tos];
    tos-=1;
    return value;
}
void print()
{
    int i;
    for(i=tos;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int data;
    push(1091);
    push(208);
    push(3034);
    push(40234);
    pop();
    pop();
    pop();

    print();
    return 0;
}
