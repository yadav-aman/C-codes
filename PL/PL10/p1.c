#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
void main()
{
    int i,n,sum=0;

    printf("Enter the size of array:\t");
    scanf("%d",&n);
    
    int *ptr;
    ptr=(int *)malloc(n*sizeof(int));

        if(ptr==NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }

    printf("Enter the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&ptr[i]); // &ptr[i] is same as ptr+i

    printf("Entered array is\n");
    for(i=0;i<n;i++)
    printf("%d ",*(ptr+i));

    for(i=0;i<n;i++)
    sum=sum+*(ptr+i);

    printf("\n Sum of all elements is %d",sum);   
    free(ptr); 
}