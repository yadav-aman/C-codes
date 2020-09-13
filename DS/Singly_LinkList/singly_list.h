#include<stdbool.h>

typedef struct node{
int data;
struct node *next;
}node;

bool Is_Empty(node *);
node* create_list();
void insert_beg(node **, int);
void insert_end(node **, int);
void insert_after_node(node **, int, int);
void del_list(node **);

void del_beg(node **);
void del_end(node **);
void remove_value(node **, int);
void display(node *);