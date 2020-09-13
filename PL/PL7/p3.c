#include<stdio.h>
#include<stddef.h>
#define size 25
void main()
{
int a[size],i,c1=0,c2=0,c3=0,c4=0;
puts("Enter 25 numbers\n");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
for(i=0;i<size;i++)
{
if(a[i]>=0)
	c1++;
else if(a[i]<0)
	c2++;
	}
	for(i=0;i<size;i++)
	{
if((a[i]%2==0))
	c3++;
else if((a[i]%2!=0))
	c4++;
	}
printf("+ve = %d\n",c1);
printf("-ve = %d\n",c2);
printf("eve = %d\n",c3);
printf("odd = %d\n",c4);
}
