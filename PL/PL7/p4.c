#include<stdio.h>
#define size 100
void main()
{
int a[size],i,j,c=0;
for(i=1;i<=size;i++)
	a[i]=i;
	
for(i=2;i<=size;i++)
	{
	for(j=2;j<i;j++)
	{
	if(a[i]%j==0)
		a[i]=0;
	}
	}
for(i=1;i<=size;i++)
{
if(a[i]!=0)
printf("%d\t",a[i]);	
}
}
