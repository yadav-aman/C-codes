#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i,j,sum,min,min1=0,min2=1;
printf("\nEnter size of array\t");
scanf("%d",&n);
int a[n];

for(i=0;i<n;i++)
        {
         printf("Enter %d element\t",i+1);
            scanf("%d",&a[i]);
        }


min=a[0]+a[1];
for(i=0;i<(n-1);i++)
{

    for(j=i+1;j<n;j++)
    {
    sum=a[i]+a[j];
    if(abs(sum)<abs(min))
    {
        min=sum;
        min1=i;
        min2=j;
    }
}
}
printf("\n %d and %d have the sum closest to 0 as %d+%d = %d",a[min1],a[min2],a[min1],a[min2],min);
}
