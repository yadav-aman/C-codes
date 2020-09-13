#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

int top = -1;
int arr[SIZE];

int IsFull(void)
{
    if(top == SIZE-1)
    return 1;
    return 0;     
}

int IsEmpty()
{
    if (top == -1)
        return 1;
    return 0;
}

void Push(int a)
{
    if(IsFull())
    printf("\nStack is full!!");
    
    else
        arr[++top] = a;   
}

void Display(void)
{
    int i;
    for(i = 0;i<=top;i++)
    printf("%d ",arr[i]);
}

int Pop(void)
{
    if(top == -1)
    {
        printf("\nNo Element to pop");
        return 0;
    }
    return arr[top--];
}

int Peek(void)
{
    return arr[top];
}