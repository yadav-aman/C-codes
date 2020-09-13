#include<stdio.h>

struct tree{
    struct tree *right;
    int data;
    struct tree *left;
};

struct tree* newBranch(int data)
{
    struct tree *branch = (struct tree*)malloc(sizeof(struct tree));
    branch->data = data;
    branch->left = NULL;
    branch->right = NULL;
    return branch;
}

