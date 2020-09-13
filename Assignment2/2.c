#include<stdio.h>
void main()
{
    int n,p,s,f,d;
    printf("Enter the number:\t");
    scanf("%d",&n);
    for(s=1;s<=n;s++)
    {
        if(n%s==0)
        {
            p=f=s;
            while(f!=0)
            {
                d=f%10;
                p*=d;
                f=f/10;
            }
            if(p==n){
            printf("The seed of %d is %d",n,s);
            break;}
    }
    }
   if(p!=n)
        {
            printf("No seed");
        }
}
