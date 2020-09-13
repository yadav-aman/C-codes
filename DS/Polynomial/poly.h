#include<stdio.h>
#include<stdlib.h>

typedef struct equation{
    int co;
    int exp;
    struct equation *next;
}node;

node* CreateList()
{
    return NULL;
}

node* Duplicate(node *crt,int a)
{
    while(crt != NULL && crt->exp != a)
        crt = crt->next;
    return crt;
}

void InsertBeg(node **ahead,int c,int e)
{
    node *dup = Duplicate(*ahead,e);
    node *new = (node*)malloc(sizeof(node));
    if(!dup)
    {
    new->co=c;
    new->exp=e;
    new->next=*ahead;
    *ahead = new;
    }
    else
        dup->co += c;
    
}

void Input(node **ahead, int c)
{
    int i;
    for (i=1;i<=c;i++)
    {
    
    printf("\nEnter the %d co-efficient:  ",i);
    int c,e;
    scanf("%d",&c);
    printf("Enter the %d exponent: ",i);
    scanf("%d",&e);
    InsertBeg(ahead,c,e);
    }
}

void Display(node *head)
{
    int c=0;
    node* crt = head;
    while(crt != NULL)
    {
        if(crt->exp ==0)
            c= crt->co;
        else
            printf("%dx^%d + ",crt->co,crt->exp);
        crt = crt->next;
    }
    printf("%d\n",c);
}

void Add(node *head1,node *head2,node **aheadA)
{
    while (head1 != NULL)
    {
      InsertBeg(aheadA,head1->co,head1->exp);   
      head1 = head1->next;
    }
    while (head2 != NULL)
    {
        InsertBeg(aheadA,head2->co,head2->exp);
        head2 = head2->next;
    }
}

void Mult(node *head1,node *head2,node **aheadM)
{
    int c,e;
    node *crt = head2;
    while(head1 != NULL)
    {
        while (crt != NULL)
        {
            c = (head1->co)*(crt->co);
            e = (head1->exp)+(crt->exp);
            InsertBeg(aheadM,c,e);
            crt = crt->next;
        }
        head1 = head1->next;
        crt = head2;
    }
}