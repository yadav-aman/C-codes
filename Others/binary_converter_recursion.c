#include<stdio.h>
long long int bin(long long int);
void main()
{
    long long int r,n;
    printf("Enter the number:\t");
    scanf("%lld",&n);
    r=bin(n);
    printf("Answer = %lld",r);
}
long long int bin(long long int n)
{
    if (n==1)
        return n;
    else return n%2+10*bin(n/2);
}
