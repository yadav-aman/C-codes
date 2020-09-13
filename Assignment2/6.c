#include<stdio.h>
int prime(int);
void main()
{
    int i,num,j,temp;
    printf("Enter number of elements:\t");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the array\n");
    for(i=0;i<num;i++)
            scanf("%d",&arr[i]);
    for(i=0;i<num;i++)
        {
           if(prime(arr[i])==1)
                for(j=i+1;j<num;j++)
                    if (arr[j]>arr[i] && prime(arr[j])==1)
                    {
                        temp=arr[j];
                        arr[j]=arr[i];
                        arr[i]=temp;
                    }
        }
     for(i=0;i<num;i++)
        {
           if(prime(arr[i])==0)
                for(j=i+1;j<num;j++)
                    if (arr[i]>arr[j] && prime(arr[j])==0)
                    {
                        temp=arr[j];
                        arr[j]=arr[i];
                        arr[i]=temp;
                    }
        }
printf("\nFinal array is:\t");
for(i=0;i<num;i++)
    printf("%d ",arr[i]);
}

int prime(int num)
{
    int i,counter=0;
    for(i=2;i<=num/2;i++)
        if(num%i==0)
        counter++;
    if(counter==0)
        return 1;//prime
    else
        return 0;//not prime

}
