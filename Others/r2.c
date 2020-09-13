/*Given  an  array  of  elements  of  length  N,  ranging  from  0  to  N-1.  Rearrange  the array such
 that A[i] = i and if is not present, display “-1” at that place.*/
#include<stdio.h>
void main()
{
    int i, j, num;
    printf("enter number of elements in array");
    scanf("%d",&num);
    int arr[num];
    int arrnew[num];
    for(i=0;i<num;i++)
    {
        printf("Enter %d element",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
        arrnew[i]=-1;
    for(i=0;i<num;i++)
        for(j=0;j<num;j++)
                if (arr[j]==i)
                    arrnew[i]=arr[j];
    for(i=0;i<num;i++)
        printf("%d, ",arrnew[i]);
}

