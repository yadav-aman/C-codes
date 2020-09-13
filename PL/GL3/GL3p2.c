#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>
  
// Priority queue code start
typedef struct node { 
    int data; 
    int priority;
    struct node* next; 
  
} node; 
  
node* newnode(int d, int p) 
{ 
    node* tmp = (node*)malloc(sizeof(node)); 
    tmp->data = d; 
    tmp->priority = p; 
    tmp->next = NULL; 
  
    return tmp; 
} 
  
int peek(node** head) 
{ 
    return (*head)->data; 
} 
  

void pop(node** head) 
{ 
    node* tmp = *head; 
    (*head) = (*head)->next; 
    free(tmp); 
} 
  
void push(node** head, int d, int p) 
{ 
    node* start = (*head); 

    node* tmp = newnode(d, p); 
    if ((*head)->priority < p) { 
  
        tmp->next = *head; 
        (*head) = tmp; 
    } 
    else { 
        while (start->next != NULL && 
               start->next->priority < p) { 
            start = start->next; 
        } 
        tmp->next = start->next; 
        start->next = tmp; 
    } 
} 
  
int IsEmpty(node** head) 
{ 
    return (*head) == NULL; 
} 
// priority queue end

int v;


int minDistance(int distance[ ], bool set[ ])
{
   int j;
   int min = INT_MAX;
   int indexmin;
   for ( j = 0; j < v; j++)
   {
            if (set[j] == false && distance[j] < min)
            {
	min = distance[j];
         	indexmin = j;
            }
   }
   return indexmin;
}

int print(int distance[ ])
{
   int i;
   printf("Vertex \t Distance from start\n");
   for ( i = 0; i < v; i++)
      printf("%d \t %d \n", i, distance[i]);
}

void dijkstra(int matrix[ ][v], int start)
{
        int distance[v],i,j;
        bool set[v];
        for (i = 0; i < v; i++)
        {
            distance[i] = INT_MAX;
            set[i] = false;
        }
        distance[0] = 0;
        for (i = 0; i < v-1; i++)
        {
                int u = minDistance(distance, set);
                set[u] = true;
            for ( j = 0; j < v; v++)
        {
                    if (matrix[u][j]!=0 && set[j] == false && distance[u]+matrix[u][j] <  distance[j])
                            distance[j] = distance[u]+matrix[u][j];
        }     
        }
        print(distance);
}



int main(void)
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int i,j,e;
        scanf("%d",&v);
        scanf("%d",&e);
        int matrix[v][v];
        for(i=0;i<v;i++)
            for(j=0;j<v;j++)
                matrix[i][j]=0;
        while(e--)
        {
            int start ,end ,weight;
            scanf("%d %d %d",&start,&end,&weight);
            matrix[start][end] = weight;
        }
        dijkstra(matrix,0);
    }
}