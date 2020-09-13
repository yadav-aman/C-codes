#include<stdio.h>
void main()
{
    int size,rotate,i;

    printf("Enter size of array:\t");
    scanf("%d",&size);

    printf("Enter rotate number:\t");
    scanf("%d",&rotate);

    int a[size];

    printf("Enter elements \n");

    for(i=0;i<size;i++)
        scanf("%d",&a[(i+size-rotate)%size]);   //use a[(i+rotate)%size] for left rotate

    for(i=0;i<size;i++)
        printf("%d ",a[i]);
}
