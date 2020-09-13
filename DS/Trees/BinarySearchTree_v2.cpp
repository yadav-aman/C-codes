#include<iostream>
using namespace std;

struct node{
    node *left;
    int data;
    node *right;
};

node* GetNode(int data)
{
    node *tmp = new node();
    tmp->data = data;
    tmp->left  = NULL;
    tmp->right = NULL;
    return tmp;
}

node* Insert(node *root,int data)
{
    if (root == NULL)
        root = GetNode(data);
    else if(data <= root->data)
        root->left = Insert(root->left,data);
    else
        root->right = Insert(root->right,data);
    return root;
}

void Postorder(node *root)
{
    if (root == NULL) 
    return; 
  
    // first recur on left subtree 
    Postorder(root->left); 
  
    // then recur on right subtree 
    Postorder(root->right); 
  
    // now deal with the node 
    cout << root->data << " "; 
}

int Height(node *root)
{
    if (root == NULL)
    //height of empty tree is -1  
        return -1; 
    else
    {  
        /* compute the depth of each subtree */
        int lHeight = Height(root->left);  
        int rHeight = Height(root->right);  
      
        /* use the larger one */
        if (lHeight > rHeight)  
            return(lHeight + 1);  
        else return(rHeight + 1);  
    }  
}

void NoSibling(node *root)
{
    if (root == NULL) 
      return; 
  
    // If this is an internal node, recur for left 
    // and right subtrees 
    if (root->left != NULL && root->right != NULL) 
    { 
        NoSibling(root->left); 
        NoSibling(root->right); 
    } 
  
    // If left child is NULL and right is not, print right child 
    // and recur for right child 
    else if (root->right != NULL) 
    { 
        cout << root->right->data << " "; 
        NoSibling(root->right); 
    } 
  
    // If right child is NULL and left is not, print left child 
    // and recur for left child 
    else if (root->left != NULL) 
    { 
        cout << root->left->data << " "; 
        NoSibling(root->left); 
    } 
}

int main()
{
    node *root = NULL;
    int data , choice;
    do{
        printf("\n-------------------------------\n");
        printf( "Enter a choice\n"
                "1. To insert a node\n"
                "2. To print nodes in post-order traversal\n"
                "3. Find the heigh of the tree\n"
                "4. Print nodes without a sibling\n"
                "5. To check siblings\n"
                "6. To find the sum of left leaves\n"
                "7. To print the nodes in spiral order\n"
                "-1. To EXIT\n");
        printf("\n-------------------------------\n\n");
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter data: ";
                cin>>data;
                root = Insert(root,data);
                break;
            case 2:
                cout<<"PostOrder Traversal: ";
                Postorder(root);
                cout<<endl;
                break;
            case 3:
                cout<<"Height of the tree is: "<<Height(root)<<endl;
                break;
            case 4:
                cout<<"Nodes Without Siblings: ";
                NoSibling(root);
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            default:
                if(choice != -1) cout<<"Enter a valid choice\n\n";
        }
    }while(choice != -1);

    return 0;
}