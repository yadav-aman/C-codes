#include<stdio.h>
void main()
{
    int i,j,sale=0,item=0;
    int arr[5][3];

    for(i=0;i<5;i++)
    {
    printf("Enter sales of %d salesman\n",i+1);
    for(j=0;j<3;j++)
    {
        printf("Enter %d item:\t",j+1);
        scanf("%d",&arr[i][j]);
    }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            sale=sale+arr[i][j];
        }
    printf("Sales by %d salesman = %d\n",i+1,sale);
    sale=0;
    }

      for(j=0;j<3;j++)
    {
        for(i=0;i<5;i++)
        {
            item=item+arr[i][j];
        }
    printf("Sale of %d item = %d\n",j+1,item);
    item=0;
    }
}