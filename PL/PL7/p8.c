#include<stdio.h>
void main()
{
    int n,i,c=0,d=0,j;
    printf("Enter the size of array\t");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
        {
         printf("Enter %d element\t",1+i);
            scanf("%d",&a[i]);
        }

     for(i=0;i<n;i++)
     {
         if(a[i]%2==0)
            c++;
         else
            d++;
     }

     int e[c],o[d];
   for(i=0,j=0;i<n;i++)
     {
         if(a[i]%2==0){
            e[j]=a[i];
            j++;}
     }

    for(i=0,j=0;i<n;i++)
     {
         if(a[i]%2!=0){
            o[j]=a[i];
            j++;}
     }
     printf("Even array=\t");
     for(j=0;j<c;j++)
        printf("%d\t",e[j]);

    printf("\nOdd array=\t");
     for(j=0;j<d;j++)
        printf("%d\t",o[j]);
}
