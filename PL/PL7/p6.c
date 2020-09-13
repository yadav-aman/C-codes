#include<stdio.h>
void main()
{
    int n,i,num;
    printf("Enter the size of array\t");
    scanf("%d",&n);
    int a[n];
    a[0]=0;
    printf("Enter array in ascending order\n");

    for(i=1;i<=n;i++)
        {
         printf("Enter %d element\t",i);
            scanf("%d",&a[i]);
        }

    printf("Entered array is\t");
    for(i=1;i<=n;i++)
    printf("%d\t",a[i]);

    printf("\nEnter a number you want to add to the array \t");
    scanf("%d",&num);

    for(i=1;i<=n+1;i++)
    {
        if(a[i]<num)
            a[i-1]=a[i];
        else
            {
            a[i-1]=num;
            break;
        }
    }

    printf("Final array is\t\t");
    for(i=0;i<=n;i++)
    printf("%d\t",a[i]);
}
