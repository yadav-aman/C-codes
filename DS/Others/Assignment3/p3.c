// Aman Yadav - 1910110052
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;
node *head = NULL;

void AddAsHead(int ele)
{
    node *tmp = (node*)malloc(sizeof(node));
    tmp->data = ele;
    tmp->next = head;
    head = tmp;
}
void AddAsTail(int ele)
{
    node *tmp = (node*)malloc(sizeof(node));
    tmp->data = ele;
    if(head == NULL)
    {
        AddAsHead(ele);
    }
    else
    {
        tmp->next = NULL;
        node *crt = head;
        while(crt->next != NULL) crt = crt->next;
        crt->next = tmp;
    }
}

void Display()
{
    node *crt = head;
    while(crt != NULL)
    {
        printf("%d ",crt->data);
        crt = crt->next;
    }
}

void AddSorted(int i)
{

    if(head != NULL && head->data < i)
    {
        node *crt;
        for (crt = head ;crt->next != NULL && crt->next->data < i ; crt = crt->next);
        if (crt->next == NULL) AddAsTail(i);
        else
        {
            node *tmp = (node*)malloc(sizeof(node));
            tmp->data = i;
            tmp->next = crt->next;
            crt->next = tmp;
        }
    }
    else
        AddAsHead(i);
}

void InsertionSort()
{
    if( head != NULL)
    {
        node *crt = head , *crt2;
        crt2 = crt->next;
        crt->next = NULL;
        while(crt2 != NULL)
        {   
            node *tmp = crt2;
            AddSorted(crt2->data);
            crt2 = crt2->next;
            free(tmp);     
        }
    }
}

int main(void)
{
    int choice,ele;
    do{
        printf("\n-------------------------------\n");
        printf("Enter Your choice\n");
        printf( "1. To Insert a number\n"
                "2. To show the list\n"
                "3. To sort\n"
                "-1. To exit\n");
        printf("\n-------------------------------\n\n");

        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("Enter the number: ");
                scanf("%d",&ele);
                AddAsTail(ele);
                break;
            case 2:
                printf("List is: ");
                Display();
                break;
            case 3:
                InsertionSort();
                printf("List Sorted!!");
                break;
            default:
                if(choice != 1) printf("Enter a valid choice\n");
                break;
        }
    }while( choice != -1);
    return 0;
}