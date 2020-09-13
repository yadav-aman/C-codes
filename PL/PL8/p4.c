#include<stdio.h>
void rotate(int *,int,int);
void main()
{
int size, i, d;
printf("Enter size of the array\n");
scanf("%d", &size);
int arr[size];
printf("Enter array elements\n");
for(i=0; i<size; i++)
scanf("%d", &arr[i]);
printf("Enter rotation value of array\n");
scanf("%d", &d);
if(d%size!=0)
rotate(arr, d, size);
else
{
    for(i=0;i<size;i++)
        printf("%d\t",arr[i]);
}
}
void rotate(int a[],int d,int n)
{
int i,temp,j;
for(i=0;i<(d%n);i++)
{
	temp=a[0];
	for(j=0;j<n;j++)
	{
	a[j]=a[j+1];
	}
	a[n-1]=temp;
}
for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
