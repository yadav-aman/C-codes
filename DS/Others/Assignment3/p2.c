// Aman Yadav - 1910110052
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node node;
typedef struct list list;

struct node{
    int data;
    struct node *next;
};
struct list{
    node *head;
    node *tail;
}*list1,*list2;

bool IsEmpty();
int Length();
void Print();
void AddAsHead(int);
void AddAsTail(int);
void AddSorted(int);
node* Find(int);
void Reverse();
int PopHead();
void RemoveFirst(int); 
void RemoveAll(int);
void AddAll(list *);

bool IsEmpty()
{
    if (list1->head == NULL)
        return true;
    return false;
}

int Length()
{
    int len = 0;
    node *crt;
    for (crt = list1->head ; crt != NULL ; crt = crt->next)
        len++;
    return len;
}

void Print()
{
    printf("List is: ");
    node *crt = list1->head;
    while(crt != NULL)
    {
        printf("%d ",crt->data);
        crt = crt->next;
    }   
}

void AddAsHead(int i)
{
    node *tmp = (node *)malloc(sizeof(node));
    tmp->data = i;
    tmp->next = list1->head;
    if(IsEmpty()) list1->tail = tmp;
    list1->head = tmp;
}

void AddAsTail(int i)
{   
    if(!IsEmpty())
    {
        node *tmp = (node*)malloc(sizeof(node));
        tmp->data = i;
        tmp->next = NULL;
        list1->tail = tmp;
        node *crt;
        for(crt = list1->head ; crt->next != NULL ; crt = crt->next);
        crt->next = tmp;
    }
    else
        AddAsHead(i);
}

void AddSorted(int i)
{

    if(!IsEmpty() && list1->head->data < i)
    {
        node *crt;
        for (crt = list1->head ;crt->next != NULL && crt->next->data < i ; crt = crt->next);
        if (crt->next == NULL) AddAsTail(i);
        else
        {
            node *tmp = (node*)malloc(sizeof(node));
            tmp->data = i;
            tmp->next = crt->next;
            crt->next = tmp;
        }
    }
    else
        AddAsHead(i);
}

node* Find(int i)
{
    node *crt = list1->head;
    while(crt != NULL)
    {
        if (crt->data == i)
            return crt;
        crt = crt->next;
    }
    return NULL;
}

void Reverse()
{
    if(!IsEmpty())
    {
        node *crt = list1->head , *crt2;
        crt2 = crt->next;
        crt->next = NULL;
        list1->tail = crt;
        while(crt2 != NULL)
        {   
            node *tmp = crt2;
            AddAsHead(crt2->data);
            crt2 = crt2->next;
            free(tmp);    
        }
    }
}

int PopHead()
{
    if (!IsEmpty())
    {
        node *crt = list1->head;
        list1->head = list1->head->next;
        int pop = crt->data;
        free(crt);
        return pop;
    }
    else 
    {
    list1->tail = NULL;
    return 0;
    }
}

void RemoveFirst(int i)
{
    node *crt = list1->head;
    if(crt->data == i) 
    {
        PopHead();
        return;
    }
    if(crt->data != i && crt->next == NULL)	return;
    while(crt->next != NULL)
	{
		if (crt->next->data == i)
		{
			node *tmp = crt->next;
			crt->next = crt->next->next;
            if(crt->next == NULL) list1->tail = crt;
			free (tmp);
			return;
		}
		crt = crt->next;
	}
}

void RemoveAll(int key)
{
    if(!IsEmpty())
    {
        node *tmp = list1->head,*prev;
        while(tmp != NULL && tmp->data == key) //if head itself contains the key
        {
            list1->head = tmp->next;
            free(tmp);
            tmp = list1->head;
        }
        if(tmp == NULL) list1->tail = NULL;

        while(tmp != NULL)
        {
            while (tmp != NULL && tmp->data != key)
            {
                prev = tmp;
                tmp = tmp->next;
            }
            if (tmp == NULL) return;

            prev->next = tmp->next;
            if(tmp->next == NULL) list1->tail = prev;
            free(tmp);
            tmp = prev->next;
        }
    }
}

void AddAll(list *list1)
{
    int ele,choice;

    do{
        printf("Enter a Choice:\n1.To Enter elements\n-1 To exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("Enter number: ");
                scanf("%d",&ele);  
                if(!IsEmpty())
                {
                    node *tmp = (node*)malloc(sizeof(node));
                    tmp->data = ele;
                    tmp->next = NULL;
                    list1->tail = tmp;
                    node *crt;
                    for(crt = list1->head ; crt->next != NULL ; crt = crt->next);
                    crt->next = tmp;
                }
                else
                    AddAsHead(ele);
                break;
                default:
                    if(choice != -1) printf("Enter a valid choice\n\n");
        }      
    }while(choice != -1);
    node *crt = list1->head;
    while(crt->next != NULL)
        crt = crt->next;
    crt->next = list2->head;
}

int main(void)
{
    int choice;
    list1 = (list*)malloc(sizeof(list));  // Initialize a new list
    list1->head = NULL;
    list1->tail = NULL;
    list2 = (list*)malloc(sizeof(list));  // Initialize a new list for AddAll
    list2->head = NULL;

    do{
    printf("\n------------------------------------------------\n");
    printf("Enter a Choice\n");
    printf("1. Add number at begining\n");
    printf("2. Add number at end\n");
    printf("3. Add number at sorted position\n");
    printf("4. Show the length of the List\n");
    printf("5. To find an element\n");
    printf("6. Display the List\n");
    printf("7. Reverse the list\n");
    printf("8. Pop head element\n");
    printf("9. Remove first occurence of a number\n");
    printf("10. Remove all occurences of a number\n");
    printf("11. To Append a list to the existing list\n");
    printf("12. To view the value of Tail pointer\n");
    printf("-1. To exit\n");
    scanf("%d",&choice);
    int ele;
    printf("------------------------------------------------\n\n");
    switch(choice)
    {
        case 1:
            printf("Enter the number: ");
            scanf("%d",&ele);
            AddAsHead(ele);
            break;
        case 2:
            printf("Enter the number: ");
            scanf("%d",&ele);
            AddAsTail(ele);
            break;
        case 3:
            printf("Enter the number: ");
            scanf("%d",&ele);
            AddSorted(ele);
            break;
        case 4:
            printf("Length of the list is %d\n",Length());
            break;
        case 5:
            printf("Enter the number you want to search: ");
            scanf("%d",&ele);
            if(Find(ele))
                printf("Yes, number is present\n");
            else
                printf("NO, number is not present\n");
            break;
        case 6:
            Print();
            break;
        case 7:
            Reverse();
            printf("List Reversed!!\n");
            break;
        case 8:
            printf("Head = %d\n",PopHead());
            break;
        case 9:
            printf("Enter the number: ");
            scanf("%d",&ele);
            RemoveFirst(ele);
            break;
        case 10:
            printf("Enter the number: ");
            scanf("%d",&ele);
            RemoveAll(ele);
            break;
        case 11:
            AddAll(list1);
            printf("Append list done\n");
            break;
        case 12:
            if(list1->tail != NULL)
            printf("Value at tail = %d\n",list1->tail->data);
            else
            printf("Value at tail = NONE\n");
            break;
        default:
        if(choice != -1) printf("Enter a valid choice\n\n");
    }
    }while(choice != -1);
    return 0;
}