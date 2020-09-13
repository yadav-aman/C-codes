#include<stdio.h>
void main()
{
int size,j,i,c=0;
printf("Enter size of the array\n");
scanf("%d", &size);

int arr[size];
printf("Enter array elements\n");
for(i=0; i<size; i++)
scanf("%d", &arr[i]);
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        if(i==arr[j]){
            c=1;
            break;
        }
    }

    if(c==1)
        printf("%d ",i);
    else if(c==0)
        printf("-1 ");
            c=0;

}
}




