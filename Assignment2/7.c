#include<stdio.h>
void main()
{
    int n,i,j,c=0;
    printf("Enter the size of array:\t");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j]){
                c++;
                break;}
        }
        if(c==0)
            printf("%d\t",a[i]);
        c=0;
    }
}
