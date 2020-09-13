#include<stdio.h>
#include<math.h>
void main()
{
    int d,i;
    printf("Enter the no of days:\t");
    scanf("%d",&d);
    unsigned long long int a[50]={0},n[50]={0};
    a[0]=1;
    n[0]=1;
    if(d!=1)
    {
    for(i=1;i<d;i++)
    {
        if(i>=6)
        {
            n[i]=(a[i-1]-n[i-6])*2;
            a[i]=a[i-1]+n[i]-n[i-6];
        }
        else{
     n[i]=a[i-1]*2;
    a[i]=a[i-1]+n[i];}
    }
}
    printf("Total chicks on day %d = %llu",d,a[d-1]);
}
