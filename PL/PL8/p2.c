#include<stdio.h>
void main()
{
    int n,i,j,c=0;
    printf("Enter the size of array:\t");
    scanf("%d",&n);

    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);


    for(i=0;i<n;i++)
    {
        if(a[i]!=-999)
        {
        for(j=i;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    if(i!=j)
                    a[j]=-999;
                    c++;
                }
            }
            printf("%d -> %d\n",a[i],c);
        }

    }
}
