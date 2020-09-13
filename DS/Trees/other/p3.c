#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

struct node *newNode(int data)
{
    node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

int sumLeft(struct node *node)
{

    if (node == NULL)
        return 0;
    else if (node->left != NULL)
        return node->data + sumLeft(node->left);
    else
        return node->data + sumLeft(node->right);
}

void main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->right = newNode(6);
    root->left->left->left = newNode(7);
    root->right->right = newNode(8);
    root->right->left = newNode(9);
    root->left->left->left->right = newNode(10);

    printf("Sum of the leftmost elements = %d\n", sumLeft(root));
}