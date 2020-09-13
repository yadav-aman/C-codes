#include<stdio.h>
#include<stdlib.h>
#include"p3.h"

int main(void)
{
    int c1,c2,c;
    printf("Enter the number of terms in first polynomial: ");
    scanf("%d",&c1);
    printf("Enter the number of terms in Second polynomial: ");
    scanf("%d",&c2);
    node *head1,*head2,*headA,*headM;
    
    head1 = CreateList();
    head2 = CreateList();
    headA = CreateList();
    headM = CreateList();

    printf("\nEnter first polynomial:");
    Input(&head1,c1);
    printf("\nYour 1st polynomial is: ");
    Display(head1);
    printf("\nEnter second polynomial:");
    Input(&head2,c2);
    printf("\nYour 2nd polynomial is: ");
    Display(head2);
    printf("\n\n  ");
    Display(head1);
    printf("+ ");
    Display(head2);
    Add(head1,head2,&headA);
    printf("------------------------------------------------\n   ");
    Display(headA);
    printf("------------------------------------------------\n");


    printf("\n\n  ");
    Display(head1);
    printf("X ");
    Display(head2);
    Mult(head1,head2,&headM);
    printf("------------------------------------------------\n   ");
    Display(headM);
    printf("------------------------------------------------\n");
    return 0;
}