#include<stdio.h>
int binary(int);
void main()
{
    int n,s=0,i;
    printf("Enter the number:  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=binary(i);
    }
    printf("Output:  %d",s);

}
int binary(int n)
{
    if(n==1)
        return n;
    else return n%2+binary(n/2);
}
