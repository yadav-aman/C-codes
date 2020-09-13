#include<stdio.h>
int power(int a,int b)
{
    int i,r=1;
    for(i=1;i<=b;i++)
        r=a*r;
    return r;
}
void main()
{
    int a,b;
    printf("Enter the number and its power\t");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d^%d=%d",a,b,power(a,b));
}
