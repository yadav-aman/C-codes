#include<stdio.h>
void main()
{
    int n,i,p,j;
    printf("Enter the size of array\t");
    scanf("%d",&n);
    int a[n];

    for(i=1;i<=n;i++)
        {
         printf("Enter %d element\t",i);
            scanf("%d",&a[i]);
        }

        printf("Entered array is\t");
    for(i=1;i<=n;i++)
    printf("%d\t",a[i]);

    printf("\nHow many times do you cyclically permute the elements\t");
    scanf("%d",&p);
    for(j=1;j<=p;j++)
    {
        for(i=1;i<=n;i++)
        {
            a[i-1]=a[i];

        }
        a[n]=a[0];
    }
      printf("Final array is\t");
    for(i=1;i<=n;i++)
    printf("%d\t",a[i]);
}
