#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void main()
{
    int i,j,m,n;
    printf("Enter no of rows and columns\t");
    scanf("%d %d",&m,&n);

    // Memory allocation to a 2D array
    //Method 1 using double pointer
    int **ptr1=(int **)malloc(m*sizeof(int*));
    for(i=0;i<m;i++)
    ptr1[i]=(int *)malloc(n*sizeof(int));

    if(ptr1==NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }


    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
                scanf("%d",(*(ptr1+i)+j)); //we can also use ptr1[i][j]

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
                printf("%d ",*(*(ptr1+i)+j));
        printf("\n");
    }      
    
    //Method 2 using a single pointer
    int r,c;
    printf("Enter rows and columns of 2D array\t");
    scanf("%d %d",&r,&c);
    int *ptr1; 
    ptr1=(int *)malloc(r*c*sizeof(int));

    //taking input
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        scanf("%d",ptr1+i*c+j);

    //output
    for(i=0;i<r;i++)                            //doubt??
    {                                           // Can we do it by a single loop
        for(j=0;j<c;j++)                        // for(i=0;i<r*c;i++)
        printf("%d ",*(ptr1+i*c+j));            //      scanf("%d",ptr1+i);
    printf("\n");
    }

    //Method 3 using array of pointers
    //This method is somewhat similar to method one
    int *arr[r];
    for(i=0;i<r;i++)
    arr[i]=(int *) malloc(c*sizeof(int));

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        scanf("%d",(*(arr+i)+j)); // we can also use a[i][j] here

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d ",*(*(arr+i)+j));
        printf("\n");
    }
}