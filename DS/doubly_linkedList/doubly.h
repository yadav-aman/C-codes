#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node *prev;
    int data;
    struct node *next;
}node;

void create_list(node **ahead, node **atail)
{
    *ahead = NULL;
    *atail = NULL;
}

void insert_beg(node **ahead, node **atail, int n)
{
    node *new = (node*)malloc(sizeof(node));
    new->data = n;
    new->prev = NULL;
    if(*ahead == NULL)
    {
        *ahead = new;
        new->next = NULL;
        *atail = new; 
    }
    else
    {
        new->next = *ahead;
        (*ahead)->prev = new;
        *ahead = new;
    }
    
}

void display_beg(node *head)
{
    node *crt = head;
    while(crt != NULL)
    {
        printf("%d ",crt->data);
        crt = crt->next;
    }
}

void display_end(node *crt)
{
    while(crt != NULL)
    {
        printf("%d ",crt->data);
        crt = crt->prev;
    }
}


void insert_end(node **ahead, node **atail, int n)
{
    node *new = (node*)malloc(sizeof(node));
    new->data = n;
    new->next = NULL;
    if(*atail == NULL)
    {
        insert_beg(ahead,atail,n);
    }
    else
    {
        new->prev = *atail;
        (*atail)->next = new;
        *atail = new;
    }
    
}

// functions remaining
void insert_after_node(node **head, node **tail, int, int);
void insert_before_node(node **head, node **tail, int, int);
void del_beg(node **head, node **tail);
void del_end(node **head, node **tail);
void del_search_key(node **head, node **tail, int);
