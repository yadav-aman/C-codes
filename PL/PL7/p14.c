#include<stdio.h>
void main()
{
      int n,i,j;

    printf("Enter the size of array\t");
    scanf("%d",&n);
    int a[n];
     printf("Enter array\n");

    for(i=0;i<n;i++)
        {
         printf("Enter %d element\t",i+1);
            scanf("%d",&a[i]);
        }

    for(i=0;i<n;i++)
    {
        for(j=1+i;j<n;j++)
        {
            if(a[j]==a[i])
                a[i]=-9999;
        }
    }


    for(i=0;i<n;i++)
    {
        if(a[i]!=-9999)
            printf("%d\t",a[i]);

    }
}
