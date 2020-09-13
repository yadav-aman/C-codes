#include<stdio.h>
#include<stdlib.h>

// stack code start
#define SIZE 100

int top = -1;
int arr[SIZE];

int IsFull(void)
{
    if(top == SIZE-1)
    return 1;
    return 0;     
}

int IsEmpty(void)
{
    if (top == -1)
        return 1;
        return 0;
}
void Push(int a)
{
    if(IsFull())
    printf("\nStack is full!!");
    
    else
        arr[++top] = a;   
}

void Display(void)
{
    int i;
    for(i = 0;i<=top;i++)
    printf("%d ",arr[i]);
}

int Pop(void)
{
    if(top == -1)
    {
        printf("\nNo Element to pop");
        return 0;
    }
    return arr[top--];
}

int Peek(void)
{
    return arr[top];
}
// stack code end

int main(void)
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        long int v,i,j;
        scanf("%ld",&v);
        int result[100];
        int resultind = 99,resultsize=0;

        int noe[v]; // to find no of edges connected to each vertex

        for(i=0;i<v;i++) 
            noe[i]=0;

        int matrix[v][v];
        int e;
        scanf("%d",&e);

        for (i=0;i<e;i++)
            for(j=0;j<e;j++)
                scanf("%d",&matrix[i][j]);


        for (i=0;i<v;i++)
            for(j=0;j<v;j++)
                    if(matrix[i][j]==1)    (noe[i])++;
    

        int odd=0,current;
        for(i=0;i<v;i++) //Finding no of odd edges
        {
            if(noe[i] % 2 == 1)
            {
                odd++;
                current = i;
            }
        }

        if(odd == 0)    current = 0;
        if (odd >= 3)
        {
            printf("No Solution");
            return 0;
        }
        else printf("Yes Path exist\n");
        Push(current);
        while(!IsEmpty())
        {
            int neighbour=0;
            for(j=0;j<v;j++)
                neighbour += matrix[current][j];

            if (neighbour != 0) // if current vertex has neighbour
            {
                for ( i = 0; i < v; i++) 
                    { 
                        if (matrix[current][i] == 1)  
                        { 
                            Push(current); 
                            matrix[current][i] = 0; 
                            matrix[i][current] = 0; 
                            current = i; 
                            break; 
                        } 
                    } 
            }

            else 
            {
                result[resultind] = current;
                current = Peek();
                Pop();
                resultind--;
                resultsize++;
            }
        }
        for(i=100-resultsize ; i<100 ; i++)
            printf("%d -> ",result[i]);
    }
    return 0;
}