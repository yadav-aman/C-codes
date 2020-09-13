#include<stdio.h>
#include<stdlib.h>
#include"addressBook.h"

int main(void)
{
    
    printf("\n\t\t!!!!!\tWELCOME\t!!!!!\n");

    int choice;
    long long int number;
    char name[10],mail[30];
    node *head;
    head = create_list();
    do
    {
    printf("\nEnter a choice\n");
    printf("1. To enter a new address\n");
    printf("2. To display address book\n");
    printf("3. To delete an address\n");
    printf("-1. To exit\n\n");
    scanf("%d",&choice);
    getchar();
        switch(choice)
        {
            case 1:
            printf("\nEnter the name:  ");
            gets(name);
            printf("\nEnter phone number:  ");
            scanf("%lld",&number);
            getchar();
            printf("\nEnter email address:  ");
            gets(mail);
            insert_end(&head,name,number,mail);
            break;

            case 2:
            printf("\nYour Address book is\n\n");
            display(head);
            break;

            case 3:
            printf("Enter the name you want to delete:  ");
            gets(name);
            remove_value(&head,name);
            break;

            case -1:
            ;
            break;
            default:
            printf("\nEnter a Valid choice\n");
        }
    }while(choice != -1);
}