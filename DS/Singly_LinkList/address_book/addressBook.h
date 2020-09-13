#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
char name[10];
long long int number;
char mail[30];
struct node *next;
}node;

bool Is_Empty(node *ahead)
{
	if (ahead == NULL)
		return 1;
	return 0;
}

node* create_list()
{
	node *ahead = NULL;
	return ahead;
}

void insert_beg(node **ahead,char *iname,long long int inumber,char *imail)
{   
	node *tmp = (node*)malloc(sizeof(node));
	strcpy(tmp->name , iname);
    tmp->number = inumber;
    strcpy(tmp->mail , imail);
	tmp->next=*ahead;
	*ahead = tmp;
}

void insert_end(node **ahead,char *iname,long long int inumber,char *imail)
{
	if(!Is_Empty(*ahead))
	{
		node *tmp = (node*)malloc(sizeof(node));
		strcpy(tmp->name , iname);
        tmp->number = inumber;
        strcpy(tmp->mail , imail); 
		tmp->next = NULL;
		node *crt = *ahead;
		while(crt->next!=NULL)
			crt = crt->next; 
		crt->next = tmp;
	}
    else
    {
        insert_beg(ahead,iname,inumber,imail);
    }
    
}
void display(node *head)
{	
	node *crt = head;
	while(crt != NULL)
	{	
        puts(crt->name);
		printf("%lld\n",crt->number);
        puts(crt->mail);
        printf("\n");
		crt=crt->next;
	}
}

void remove_value(node **ahead,char *iname)
{   
	if(!Is_Empty(*ahead))
	{	
		node *crt = *ahead,*tmp;
		if(!strcmp(iname ,crt->name)) // strcmp() return 0 if strings are same
        {
            tmp = *ahead;
            *ahead = tmp->next;
            free(tmp);
        printf("DELETED!!\n");
        }
		else
		{
		    while((crt->next != NULL) && strcmp(crt->next->name , iname))
			    crt = crt->next;
				
		    if(crt->next == NULL)
			    printf("\nName not found\n");
		    else
		    {
			    tmp = crt->next;
			    crt->next = crt->next->next;
			    free(tmp);
                printf("DELETED!!\n");
		    }
		}
	}
    else 
    printf("Book is Empty\n");	
}