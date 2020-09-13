#include<stdio.h> 
#include<stdlib.h> 

typedef struct node 
{ 
	int data; 
	struct node* left;
	struct node* right;
}node; 

int Height(node* tmp) 
{ 
if (tmp==NULL) 
	return -1; 
else
{ 
	int lDepth = Height(tmp->left); 
	int rDepth = Height(tmp->right); 

	if (lDepth > rDepth) 
		return(lDepth+1); 
	return(rDepth+1); 
} 
} 

node* AddNode(int data) 
{ 
	node* tmp = (struct node*)malloc(sizeof(struct node)); 
	tmp->data = data; 
	tmp->left = NULL; 
	tmp->right = NULL; 
	
	return(tmp); 
} 
	
int main() 
{ 
	node *root = AddNode(1); 

	root->left = AddNode(2); 
	root->right = AddNode(3); 
	root->left->left = AddNode(4); 
	root->right->left = AddNode(5); 
    root->right->right = AddNode(6);
    /* Tree is
                    1
                   / \
                  2   3
                 /   / \
                4   5   6
    */
	
	printf("Height of tree is %d", Height(root)); 
	
	return 0; 
} 
