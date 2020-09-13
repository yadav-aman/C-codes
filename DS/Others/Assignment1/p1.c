#include<stdio.h>
#include<stdlib.h>
#include"p1.h"

int main(void)
{
    node *head1 = create_list(),*head2 = create_list(),*head3 = create_list();
    int n,ele;
    do{
        printf("\nEnter your choice: ");
        printf("\n1. Enter an Element to list1\n2. Enter an Element to list2\n3. To Display List1\n4. To Display List2\n5. To merge and sort the list\n-1. To exit\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("\nEnter Number: ");
                scanf("%d",&ele);
                Insert(&head1,ele);
                break;
            case 2:
                printf("\nEnter Number: ");
                scanf("%d",&ele);
                Insert(&head2,ele);
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
                printf("Merged and Sorted the List is: ");
                Merge(head1,head2,&head3);
                Display(head3);
                n = -1;
                break;
            default:
            if(n != -1)
            printf("\nEnter a valid choice");

        }
    }while(n != -1);

    return 0;
}