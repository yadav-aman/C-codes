#include<stdio.h>
void main()
{
    int n,i,j,s,min,d,c=0;
    printf("Enter the size of array:\t");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        for(i=0;i<n;i++)
        {
             min=a[i];
            for(j=i+1;j<n;j++)
            {
               if(min>a[j])
               {
                 min=a[j];
                  d=j;
               }
            }
               if(min!=a[i])
                {
            s=a[i];
            a[i]=min;
            a[d]=s;
            c++;
            }
            }
            printf("Arranged array :\t");
       for(i=0;i<n;i++)
        printf("%d\t",a[i]);
        printf("\nMinimum Swaps= %d",c);

}
