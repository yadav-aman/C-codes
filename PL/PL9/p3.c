#include<stdio.h>
#define size 8
void main()
{
    int i,j,k,l;
    int a[size][size+2]={};
    a[0][1]=2;
   for(i=1;i<size;i++)
    {
        a[i-1][0]=1;
        a[i-1][i+1]=1;
        for(j=1;j<i+2;j++)
        {
            for(k=0,l=j;k<i+2;k++,l++)
                a[i][l]=a[i-1][l-1]+a[i-1][l];
            break; 
        }
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<i+3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}