#include<stdio.h>
void main()
{
      int n,i,j,c=0,r,p,p2;

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
                {
                c++;
                r=a[i];
                p=i+1;
                p2=j+1;
    if(c==0)
        printf("\nNO duplicacy");
     else
   printf("\nOriginal value %d at position %d also found at position %d",r,p,p2);
                }
        }
    }
}
