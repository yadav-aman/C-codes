#include<stdio.h>
#include"arr_stack.h"

int main(void)
{
    int n,a;
    do
    {
        printf("\nEnter a choice\n1. To push an element\n2. To pop an element\n3. To display the stack\n4. To See the top element\n-1. To exit\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1 :
        printf("\nEnter element to push: ");
        scanf("%d",&a);
        Push(a);
        break;

        case 2:
        printf("\nPopped element is %d",Pop());
        break;

        case 3:
        printf("\nStack is: ");
        Display();
        break;

        case 4:
        printf("\nTop most element is : %d",Peek());
        break;
        default:
        if(n != -1)
        printf("\nEnter a valid choice\n");
        }
    }while(n!=-1);
}