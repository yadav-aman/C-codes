#include<stdio.h>
#include<stdlib.h>
#include"p1.h"

int main(void)
{
    node *head;
    head = create_list();
    int n,ele;

    do 
    {
        printf("Enter your choice: ");
        printf("\n1. To insert a Number\n2. To display list\n-1. To exit\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("Enter Number: ");
                scanf("%d",&ele);
                Insert(&head,ele);
                break;
            case 2:

                Display(head);
                printf("\n");
                break;
            default:
                if(n != -1)
                printf("\nEnter a valid choice\n");
        }
    }while(n != -1);
}