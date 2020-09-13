#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *head = NULL;

int Duplicate(int a)
{
    node *crt = head;
    while(crt != NULL && crt->data != a)
        crt = crt->next;
    if (crt == NULL)
        return 0;
    return 1;
}

void Insert(int element)
{
    if(! Duplicate(element))
    {
        node *new = (node *)malloc(sizeof(node));
        new->data = element;
        new->next = NULL;
        if(head == NULL)
            head=new;
    else
    {
        node *temp=head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = new;   
    }
    }
}

void Display(node *crt)
{
    printf("\nList is :\n");
    while(crt != NULL)
    {
        printf("%d ",crt->data);
        crt = crt -> next;
    }
}

int main(void)
{
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
                Insert(ele);
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

    return 0;
}