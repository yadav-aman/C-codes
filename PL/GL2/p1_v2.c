#include<stdio.h>
#include<stdlib.h>

typedef struct bstnode node;

struct bstnode{
    node *leftchild;
    long long int data;
    node *rightchild;
};

node *rootptr = NULL;

node* CreateNode(long long int ele)
{
    node *tmp = (node*)malloc(sizeof(node));
    tmp->leftchild = NULL;
    tmp->data = ele;
    tmp->rightchild = NULL;
    return tmp;
}

void Insert(node *rootptr,long long int ele)
{
    if(rootptr == NULL)    rootptr = CreateNode(ele); // rootptr is stil null
    else if(ele <= rootptr->data)    Insert(rootptr->leftchild , ele);
    else    Insert(rootptr->rightchild , ele);
}

int Search(node* rootptr,int key)
{
    if (rootptr == NULL)    return 0;
    else if (rootptr->data == key)  return 1;
    else if(key <= rootptr->data) return Search(rootptr->leftchild,key);
    else return Search(rootptr->rightchild,key);
}

int main(void)
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int n,i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            long long int ele;
            scanf("%lld",&ele);
            Insert(rootptr,ele);
        }
        int ser;
        scanf("%d",&ser);
        if(Search(rootptr,ser))
        printf("YES");
        else    printf("No");
    }
}