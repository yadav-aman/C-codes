#include<stdio.h>
#include"Btree.h"

int main()
{
    struct tree *root = newBranch(1); //create root
/* following is the tree after above statement  
  
        1 
      /   \ 
     NULL  NULL   
*/
root->left  = newBranch(2);
root->right = newBranch(3);
root->left->left = newBranch(6);
/* 6 becomes left child of 2 
           1 
       /       \ 
      2          3 
    /   \       /  \ 
   6    NULL  NULL  NULL 
  /  \ 
NULL NULL 
*/
    return 0;
}