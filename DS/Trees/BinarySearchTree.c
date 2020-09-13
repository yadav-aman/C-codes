#include<stdio.h>
#include<stdlib.h>

typedef struct bstnode{
    struct bstnode *left;
    int data;
    struct bstnode *right;
}node;

node* GetNode(int data)
{
    node *tmp = (node*)malloc(sizeof(node));
    tmp->data = data;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}

node* Insert(node* rootptr,int data)
{
    if(rootptr == NULL) // empty tree
    {
        rootptr = GetNode(data);
    }
    else if(data <= rootptr->data)
    {
        rootptr->left = Insert(rootptr->left,data); 
    }
    else
    {
        rootptr->right = Insert(rootptr->right,data);
    }
    
    return rootptr; // we wont need this if we define rootptr globally
}

int Search(node* rootptr,int key)
{
    if (rootptr == NULL)    return 0;
    else if (rootptr->data == key)  return 1;
    else if(key <= rootptr->data) return Search(rootptr->left,key);
    else return Search(rootptr->right,key);
}
int main (void)
{
    node *rootptr = NULL; //create an empty tree
    rootptr = Insert(rootptr,15);
    rootptr = Insert(rootptr,10);
    rootptr = Insert(rootptr,20);
    rootptr = Insert(rootptr,25);
    rootptr = Insert(rootptr,8);
    rootptr = Insert(rootptr,12);
    int key;
    printf("Enter a number to search: ");
    scanf("%d",&key);
    if(Search(rootptr,key))
    printf("Found\n");
    else
    printf("Not Found\n");

    return 0;
}

/*
                                (200)
                               rootptr
                                 |
                            (123 |15| 374) root-node
                                &(200)
                            /           \
                    (637 |10| 987)    (0 |20| 647)
                        &123             &374
                       /    \                 \
                  (0 |8| 0) (0 |12| 0)      (0 |25| 0)
                    &637      &987            &647
*/