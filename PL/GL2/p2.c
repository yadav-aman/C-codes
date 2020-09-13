// Aman Yadav (1910110052)
#include<stdio.h>
#include<stdlib.h>

typedef struct bstnode node;

struct bstnode{
    node *leftchild;
    long long int data;
    node *rightchild;
};

node* CreateNode(long long int ele)
{
    node *tmp = (node*)malloc(sizeof(node));
    tmp->leftchild = NULL;
    tmp->data = ele;
    tmp->rightchild = NULL;
    return tmp;
}

node* Insert(node *rootptr,long long int ele)
{
    if(rootptr == NULL)    rootptr = CreateNode(ele);
    else if(ele <= rootptr->data)    rootptr->leftchild = Insert(rootptr->leftchild , ele);
    else    rootptr->rightchild = Insert(rootptr->rightchild , ele);
    return rootptr;
}

int ResultHeight(node* rootptr) 
{ 
if (rootptr==NULL) 
	return 0; // as height of tree with one node is 1 (given)  then height of empty tree is 0 
else
{ 
	int LeftHeight = ResultHeight(rootptr->leftchild); 
	int RightHeight = ResultHeight(rootptr->rightchild); 

	if (LeftHeight > RightHeight) 
		return(LeftHeight+1); 
	return(RightHeight+1); 
} 
} 

int main(void)
{
    node *rootptr = NULL;
    int n,i;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    printf("Enter Elements: ");
    for(i=0;i<n;i++)
    {
        long long int ele;
        scanf("%lld",&ele);
        rootptr = Insert(rootptr,ele);
    }
    printf("Height = %d\n",ResultHeight(rootptr));

    return 0;
}