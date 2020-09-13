#include<stdio.h>
void main()
{
    int i,j,m,n;
    printf("Enter the row and column of the matrix:\t");
    scanf("%d%d",&m,&n);
    int a[m][n],b[n][m];
    printf("Enter elements of the matrix\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
    
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        b[i][j]=a[j][i]; //things will change if we use b[j][i]=a[i][j]

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        printf("%d ",b[i][j]);
        printf("\n");
    }
}