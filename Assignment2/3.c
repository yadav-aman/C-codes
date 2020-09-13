#include<stdio.h>
void main()
{
    int n,i,j,c=0,b=0,a[50],k,r=-1;
    printf("Enter a number:\t");
    scanf("%d",&n);
    for(i=2,j=0;i<n;i++)
    {
        for(k=2;k<=i/2;k++)
        {
        if(i%k==0)
            c++;
        }
        if(c==0)
        {
            a[j]=i;
            b++;
            j++;
        }
        c=0;
        }
    for(j=0;j<b;j++)
    {
        for(i=0;i<b/2;i++)
        {
            if(a[i]+a[j]==n)
                {
                    r++;
            printf("%d + %d = %d\n",a[i],a[j],n);
        }
        }
    }
    if(r==-1)
        printf("No it can't be expressed as the sum of two prime numbers");
}
