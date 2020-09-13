#include<stdio.h>
#include"singly_list.h"
#include<stdlib.h>
#include<stdbool.h>

bool Is_Empty(node *ahead)
{
	if (ahead == NULL)
		return 1;
	return 0;
}

node* create_list()
{
	return NULL;
}

void insert_beg(node **ahead,int element)
{
	node *tmp = (node*)malloc(sizeof(node)); //create and allocate node
	tmp->data = element; //assign data to the node
	tmp->next=*ahead; // set next of node as head
	*ahead = tmp; // move the head to point the new node
}


void insert_end(node **ahead,int element)
{
	if(!Is_Empty(*ahead))
	{
		node *tmp = (node*)malloc(sizeof(node));
		tmp->data = element;
		tmp->next = NULL;
		node *crt = *ahead;
		while(crt->next!=NULL)
			crt = crt->next; 
		crt->next = tmp;
	}	
	else
	insert_beg(ahead,element);
}

void insert_after_node(node **ahead,int element,int search_key)
{
	node *tmp = (node*)malloc(sizeof(node));
	tmp->data = element;
	node *crt = *ahead;
	while(crt->data != search_key)
		crt = crt->next;
	tmp->next = crt->next;
	crt->next = tmp;
}

void del_list(node **ahead)
{
	node *crt,*ptr;
	if(!Is_Empty(*ahead))
	{
		node *crt = *ahead;
		while(crt!=NULL)
		{
			ptr = crt->next;
			free(crt);
			crt = ptr;
		}
		*ahead = NULL;
	}
}

void del_beg(node **ahead)
{
	if(!Is_Empty(*ahead))
	{
		node *tmp = *ahead;
		*ahead = tmp->next;
		free(tmp);
	}
		
}


void del_end(node **ahead)
{
	if(!Is_Empty(*ahead))
	{
		node *crt = *ahead;
		while(crt->next->next != NULL)
			crt = crt->next;
		free(crt->next);
		crt->next = NULL;
	}
}

void remove_value(node **ahead,int key)
{
	if(!Is_Empty(*ahead))
	{	
		node *crt = *ahead,*tmp;
		if(key == crt->data)
			del_beg(ahead);
		else
		{
		while(crt->next != NULL && (crt->next->data != key)) // (crt->next->data != key) && crt->next != NULL -- if we do this then our program will not work well 
			crt = crt->next;								// for && operator if left side of the expression is false then it wont calculate the right side
		if(crt->next == NULL)
			printf("\nElement not found\n");
		else
		{
			tmp = crt->next;
			crt->next = crt->next->next;
			free(tmp);
		}
		}
	}	
}

void display(node *head)
{	
	node *crt = head;
	while(crt != NULL)
	{	
		printf("%d ",crt->data);
		crt=crt->next;
	}
}