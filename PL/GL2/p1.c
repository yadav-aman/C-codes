// To compile use gcc p1.c -lm
// Aman Yadav (1910110052)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
	return 0; 
else
{ 
	int LeftHeight = ResultHeight(rootptr->leftchild); 
	int RightHeight = ResultHeight(rootptr->rightchild); 

	if (LeftHeight > RightHeight) 
		return(LeftHeight+1); 
	return(RightHeight+1); 
} 
} 

void Kills(node *rootptr,int height)
{
    if(rootptr == NULL)    return ;
    int i,j;
    int maxNodes = pow(2,height)-1; // maximum possible nodes in a tree with a given height
    node* arr[1000]= {0}; // initializing the array with NULL pointer
    int current_index = 0;

    arr[0] = rootptr;
    for(i=0 ; i<maxNodes ; i++)
    {
        if(arr[current_index] != NULL)
        {
            if(arr[current_index]->leftchild != NULL) arr[2*i+1] = arr[current_index]->leftchild;
            if(arr[current_index]->rightchild != NULL) arr[2*i+2] = arr[current_index]->rightchild;
        }
        current_index++;
    }
    
    for( i=0 ; i < maxNodes ; i = 2*i+1 )
    {
        j=i;
        while(arr[j] == 0)  j++;
        printf("%lld ",arr[j]->data);
    }
    printf("\n");
}

int main(void)
{
    int testcase;
    printf("Enter no of test cases: ");
    scanf("%d",&testcase);
    while(testcase--)
    {
        printf("\n\n");
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
        int NoKilled = ResultHeight(rootptr); // one from each level
        printf("Enemies killed = ");
        Kills(rootptr,NoKilled);
        printf("No of enemies that can be killed = %d \n",NoKilled);
        printf("\n\n");
    }

    return 0;
}