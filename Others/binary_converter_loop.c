#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,r[50]={0},j,c=0,bin=0;
    printf("Enter a number:\t");
    scanf("%d",&n);
    for(i=n,j=0;i>0;i=i/2,j++)
    {
        r[j]=i%2;
        c++;
    }
    for(j=c-1;j>=0;j--) //if we don't want the value of binary in single integer then we just print array without space
    bin=r[j]+bin*10;
    printf("Binary = %d",bin);
}
