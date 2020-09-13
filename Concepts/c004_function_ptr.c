#include<stdio.h>
#include<stdlib.h>
#define size 10

void bubble(int [], int(*compare)(int,int) );
void swap(int *, int *);
int ascending(int,int);
int descending(int,int);

void main()
{
    int order;
    size_t counter;
    int a[size];
    printf("Enter the elements of array\n");
    for(counter=0;counter<size;counter++)
        scanf("%d",&a[counter]);
    printf("Enter 1 to sort in ascending order,2 to sort in descending order\n");
    scanf("%d",&order);
    switch (order)
    {
    case 1:
        bubble(a,ascending); //in line 23 and 26 we use function name as argument and as address of function is passesed a pointer is needed to recieve it
        break;
    case 2:
        bubble(a,descending);
        break;
    default:
        printf("Enter valid choice");
        exit(0);
    }

    printf("Sorted array is:\n");
    for ( counter = 0; counter < size; counter++)
    {
        printf("%d\t",a[counter]);
    }
}

void bubble(int arr[],int(*compare)(int a,int b))
{
    unsigned int pass;
    size_t count;
    for(pass=1;pass<=size-1;pass++)
    {
        for(count =0;count<=size-pass-1;count++)
        {
            if((* compare)(arr[count],arr[count+1]))
            swap(&arr[count],&arr[count+1]);
        }
    }
}

void swap(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

int ascending(int a,int b)
{
    return b<a;
}

int descending( int a, int b)
{
    return b>a;
}