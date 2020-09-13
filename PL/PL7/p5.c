#include<stdio.h>
void main()
{
int n,i,j,c;
printf("Enter the size of array\t");
scanf("%d",&n);
int a[n],b[n];
for(i=1;i<=n;i++)
{
printf("\nEnter %d element\t",i);
scanf("%d",&a[i]);
}


for(i=n,j=1;i>=1;i--,j++)
{
		c=a[i];
		b[j]=c;
}

printf("Reverse array is\n");
for(j=1;j<=n;j++)
{
printf("%d\t",b[j]);
}
}
