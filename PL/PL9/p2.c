#include<stdio.h>
#define size 4
void main()
{
int k,l,i,j,temp,a[size][size],min;
printf("Enter elements of a 4x4 matrix\n");
for(i=0;i<size;i++)
	for(j=0;j<size;j++)
		scanf("%d",&a[i][j]);	
		
		printf("Entered Matrix is \n");
for(i=0;i<size;i++)
{
	for(j=0;j<size;j++)
		printf("%d\t",a[i][j]);
	printf("\n");
}

printf("\n\n");
printf("Sorted Matrix is \n");
	
for(i=0;i<size;i++)
{
	for(j=0;j<size;j++)
	{
		min=a[i][j];
		l=j;
		for(k=i;k<size;k++)
			{
				for(;l<size;l++)
				{
					if(a[k][l]<min)
					{
					temp=a[k][l];
					a[k][l]=a[i][j];
					a[i][j]=temp;
					min=temp;
					}
					    		    
				}
				l=0;
			}	
	}
}

for(i=0;i<size;i++)
{
	for(j=0;j<size;j++)
		printf("%d\t",a[i][j]);
	printf("\n");
}
}