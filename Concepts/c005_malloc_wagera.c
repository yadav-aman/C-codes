#include<stdio.h> 
#include<malloc.h>
int main() 
{ 
    int *ptr,*nptr;
    int i,j;

    //simple memory allocation in 1D array
    ptr = (int *)malloc(4*sizeof(int));
    printf("\n%p\n",ptr);
    for(i=0;i<4;i++)
    scanf("%d",ptr+i);

    for(i=0;i<4;i++)
    printf("%d\t",*(ptr+i));

    printf("\n");

    int b=10,d=12,e=13;
    nptr = (int *)realloc(ptr,10*sizeof(int)); //realloc
    
    if(ptr==NULL)
        printf("\n1\n");

    for(i=4;i<10;i++)
    scanf("%d",nptr+i);

    for(i=0;i<10;i++)
    printf("%d\t",*(nptr+i));

    printf("\n %p\t %p\n",ptr,nptr); 
    
    for(i=0;i<10;i++)
    printf("%d\t",*(ptr+i));
    free(nptr);      //free function
    printf("\n%p",ptr);
        printf("\n");


        for(i=0;i<10;i++)
    printf("%d\t",*(nptr+i));
        printf("\n");


        for(i=0;i<10;i++)
    printf("%d\t",*(ptr+i));

    // Memory allocation to a 2D array

    //Method one using a single pointer
    int r,c,*ptr1;
    printf("\nEnter rows and columns of 2D array\t");
    scanf("%d %d",&r,&c);
    ptr1=(int *)malloc(r*c*sizeof(int));

    //taking input
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        scanf("%d",ptr1+i*c+j);
    //output
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d ",*(ptr1+i*c+j));
    printf("\n");
    }

} 