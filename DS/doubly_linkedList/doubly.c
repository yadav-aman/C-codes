#include<stdio.h>
#include<stdlib.h>
#include"doubly.h"

int main(void)
{
    node *head,*tail;
    create_list(&head,&tail);
    insert_beg(&head,&tail,5);
    insert_beg(&head,&tail,3);
    insert_end(&head,&tail,6);
    insert_end(&head,&tail,9);
    display_beg(head);
    printf("\n");
    display_end(tail);
    printf("\n###");
}