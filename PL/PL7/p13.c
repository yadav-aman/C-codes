#include<stdio.h>
#define size 25
void main()
{
    int i,s,r,c=0,a[size];
     printf("Enter array(25 elements)\n");

    for(i=0;i<size;i++)
        {
         printf("Enter %d element\t",i+1);
            scanf("%d",&a[i]);
        }
        printf("\nEntered array is\t");
    for(i=0;i<size;i++)
    printf("%d\t",a[i]);
    puts("\nEnter the number you want to search\t");
    scanf("%d",&s);

    for(i=0;i<size;i++)
    {
        if(a[i]==s)
        {
            c++;
            r=a[i];
        }
    }
    if(c==0)
        printf("Element is not present");
    else
    printf("\n%d repeated %d times",r,c);
}
