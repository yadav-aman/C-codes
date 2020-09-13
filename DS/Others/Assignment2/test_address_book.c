#include<stdio.h>
#include"address_book.h"

int main(){
    int choice;
    book *book1 = initBook();
    while(1){
        printf("\nADDRESS BOOK MENU\n");
        printf("1. Add entry\n");
        printf("2. Display entries\n");
        printf("3. Edit entries\n");
        printf("4. Delete entry\n");
        printf("5. Delete all entries\n");
        printf("6. Exit\n");
        printf("Enter Choice - ");
        scanf("%d", &choice);
        printf("\n-------------------------------------\n\n");
        switch(choice){
            case 1:
                printf("Inserting data.\n\n");
                insertEntry(book1, createNodeFromInput());
                break;
            case 2:
                printf("Displaying data alphabetically.\n\n"); //CASE SENSITIVE
                printBook(book1);
                break;
            case 3:
                printf("Edit Entry Menu\n\n");
                editEntry(book1);
                break;
            case 4:
                printf("Delete Entry Menu\n\n");
                deleteEntry(book1);
                break;
            case 5:
                printf("Deleting all entries\n\n");
                deleteBook(book1);
                break;
            case 6:
                printf("Exiting...\n\n");
                return 1;
            default:
                printf("Invalid option.\n");
        }
        printf("\n-------------------------------------\n");
    }
    return 0;
}
