#include<stdio.h>
#include<stdlib.h>
struct library{
    unsigned int ano;
    char title[20];
    char author[10];
    float price;
    char flag;
};

void info()
{

}
void main()
{
    printf("Enter number of books: ");
    int n,c;
    scanf("%d",&n);
    getchar();
    struct library lib[n];
    while (1)
    {
        printf("Enter choice -\n");
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("0. to exit\n");
        scanf("%d",&c);
        getchar();
        switch(c)
        {
            case 1:
                    break;
            case 2:
                    break;
            case 3:
                    break;
            case 4:
                    break;
            case 5:
                    break;
            case 6:
                    break;
            case 0:
                    exit(0);
            default:
                    printf("\nEnter a valid choice!!\n\n");
        }
    }

}