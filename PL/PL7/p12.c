#include<stdio.h>
void main()
{
    int size,i,r;
    puts("Enter the size of array(even only)\t ");
    scanf("%d",&size);


    while(size%2!=0)
    {
        printf("Enter even no\t");
         scanf("%d",&size);
    }


    int a[size];
    puts("Enter the array\n");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    printf("Entered array is\t");
    for(i=0;i<size;i++)
    printf("%d\t",a[i]);


    for(i=0;i<size;i+=2)
    {
        r=a[i];
        a[i]=a[i+1];
        a[i+1]=r;
    }
    printf("\nFinal array is\t\t");
    for(i=0;i<size;i++)
        printf("%d\t",a[i]);
}
