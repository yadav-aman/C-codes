#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node* CreateList()
{
    return NULL;
}

void InsertBeg(node **ahead,int ele)
{
    node *tmp = (node*)malloc(sizeof(node));
    tmp->data = ele;
    tmp->next = *ahead;
    *ahead = tmp;
}

void Display(node *crt)
{
    while(crt != NULL)
    {
        printf("%d ",crt->data);
        crt = crt->next;
    }
    printf("\n");
}

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;    
}


void Sort(node **ahead)
{
    node *crt = *ahead,*crt2 = crt->next,*pmin;
    while (crt->next != NULL)
    {
    int min = crt->data;
    pmin = crt;
        while(crt2 != NULL)
        {
            if(crt2->data < min)
            {
                min = crt2->data;
                pmin = crt2;
            }
        crt2 = crt2->next;
        }
        if(pmin != crt)
            Swap(&(pmin->data),&(crt->data));
        crt = crt->next;
        crt2 = crt->next;
    }
}


void Merge(node **ahead1,node **ahead2)
{
    node *crt = *ahead1;
    while (crt->next != NULL)
        crt = crt->next;
    crt->next = *ahead2;
    printf("\nMerged List is: ");
    Display(*ahead1);
    printf("\nSorted List is: ");
    Sort(ahead1);
}