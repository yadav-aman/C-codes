#include<stdio.h>
void main()
{
int c=0,n,i;
printf("Enter the Size of array:\t");
scanf("%d",&n);
int a[n];
printf("Enter the array\n");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
for(i=0;i<n;i++)
{
if(a[i]>=80)
c++;
if(a[i]>=75)
printf("Rollno = %d, Marks = %d ,Got distinction\n",i+1,a[i]);
}
printf("Total No of students securing greater than 80%% are %d\n",c);
}
