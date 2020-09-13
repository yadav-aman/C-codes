#include<stdio.h>
void bubble_sort(int *,int);
void swap(int *,int *);


void main()
{ 
int n,i;
printf("Enter the Size of array:\t");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	bubble_sort(a,n);
}


void bubble_sort(int a[],int size)
{
int pass,j;
for(pass=1;pass<=size-1;pass++)
{
	for(j=0;j<=size-pass-1;j++)
	{
		if(a[j]>a[j+1])
		{
		swap(&a[j],&a[j+1]);
		}
	}
}
for(j=0;j<size;j++)
	printf("%d\t",a[j]);
}


void swap(int *j,int *k)
{
int temp;
temp=*j;
*j=*k;
*k=temp;
}
