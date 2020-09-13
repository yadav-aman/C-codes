#include <stdio.h>
int sum1(int,int);
int sum2(int*,int*);
void sum3(int*,int*,int*);
void main()
{
int a,b,s;
a=5,
b=7;
printf("Before calling sum1: a=%d,b=%d\n",a,b);
s=sum1(a,b);
printf("After calling sum1: a=%d,b=%d,s=%d\n",a,b,s);
a=8,
b=9;
printf("Before calling sum2: a=%d,b=%d\n",a,b);
s=sum2(&a,&b);
printf("After calling sum2: a=%d,b=%d,s=%d\n",a,b,s);
a=3,b=4;
printf("Before calling sum3: a=%d,b=%d\n",a,b);
sum3(&a,&b,&s);
printf("After calling sum3: a = %d, b = %d, s = %d\n", a, b, s);
}
int sum1(int a,int b)
{
int sum,t;
sum=a+b;
t=a;
a=b;
b=t;
return sum;
}
int sum2(int *a,int *b)
{
int sum,t;
sum=*a+*b;
t=*a;
*a=*b;
*b=t;
return sum;
}
void sum3(int *a,int *b,int *s)
{
int t;
*s=*a+*b;
t =*a;
*a=*b;
*b=t;
}

