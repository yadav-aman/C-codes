#include<stdio.h>
#include"singly_list.h"
#include<stdlib.h>

int main(void)
{
    node *a;
    a = (node*)malloc(sizeof(node));
    a = create_list();

    insert_beg(&a,2);
    display(a);
    printf("\n");

    insert_end(&a,4);
    display(a);
    printf("\n");

    insert_end(&a,5);
    display(a);
    printf("\n");

    insert_end(&a,6);
    display(a);
    printf("\n");

    insert_after_node(&a,3,4); 
    display(a);
    printf("\n");

    insert_beg(&a,2);
    display(a);
    printf("\n");

    remove_value(&a,7);  // need to check this
    display(a);
    printf("\n");

    del_beg(&a);
    display(a);
    printf("\n");

    del_end(&a);
    display(a);
    printf("\n");

    del_list(&a);
    display(a);
    printf("\n");

    printf("End");
}
