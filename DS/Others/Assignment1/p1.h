#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node* create_list()
{
    return NULL;
}

void Insert(node **ahead,int a)
{
    node *tmp = (node*)malloc(sizeof(node));
    tmp->data = a;
    if(*ahead == NULL)
    {
        tmp->next = NULL;
        *ahead = tmp;
    }
    else
    {
        node *crt = *ahead;
        if(crt->data > a)       //Smallest element added
        {
            tmp->next = crt;
            *ahead = tmp;
        }
        else
        {
        while(crt->next != NULL && crt->data < a && crt->next->data < a)
            crt = crt->next;
        if(crt == NULL)         // Biggest element added in list
        {
            tmp -> next = NULL;
            crt->next = tmp;
        }
        else                        // intermediate element is added
        {
            tmp->next = crt->next;
            crt->next = tmp;
        }
        }
    }
}
void Merge(node *crt1,node *crt2,node **ahead3)
{
    node *tmp = (node*)malloc(sizeof(node));
    while(crt1 != NULL)
    {
        Insert(ahead3,crt1->data);
        crt1 = crt1->next;
    }
    while(crt2 != NULL)
    {
        Insert(ahead3,crt2->data);
        crt2 = crt2->next;
    }
}
void Display(node *crt)
{
    while(crt != NULL)
    {
        printf("%d ",crt->data);
        crt = crt -> next;
    }
}