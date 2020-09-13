#include<stdio.h>
void main()
{
int a=5,*b,**c=&b;
b=&a;
*b=7;
printf("%d, %d, %d\n",a,*b,**c);
printf("%p,%p,%p\n",&a,&b,&c);
printf("%p,%p\n",b,*c);
printf("%p\n",c);
}

