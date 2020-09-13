#include<stdio.h>
#include<stdlib.h>
#include"p2.h"

int main(void)
{
    node *head1,*head2;
    int n,ele;
    head1 = CreateList();
    head2 = CreateList();
    do{
        printf("\nEnter your choice: ");
        printf("\n1. Enter an Element to list1\n2. Enter an Element to list2\n3. To Display List1\n4. To Display List2\n5. To merge and sort list\n-1. To exit\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("\nEnter Number: ");
                scanf("%d",&ele);
                InsertBeg(&head1,ele);
                break;
            case 2:
                printf("\nEnter Number: ");
                scanf("%d",&ele);
                InsertBeg(&head2,ele);
                break;
            case 3:
                printf("List 1 is: ");
                Display(head1);
                break;
            case 4:
                printf("List 2 is: ");
                Display(head2);
                break;
            case 5:
                printf("Merged and Sort the List is: ");
                Merge(&head1,&head2);
                Display(head1);
                n = -1;
                break;
            default:
            if(n != -1)
            printf("\nEnter a valid choice");

        }
    }while(n != -1);

    return 0;
}