#include<stdio.h>
#include<math.h>
void main()
{
    int n,c=0,z,j,i=1;
    printf("Enter a number\t");
    scanf("%d",&n);
    printf("Mersenne Prime below %d are:\n",n);
    while(n>pow(2,i))
    {
        z=pow(2,i+1)-1;
        for(j=2;j<=z/2;j++)
        {
            if(z%j==0)
                {
                c++;
                break;
                }
        }
        if(c==0){
            printf("%d\t",z);}
        c=0;
        i++;
    }
}
