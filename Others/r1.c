/*Write  a  Program  to  delete  all  duplicate  elements  from  an  array.
If  a  number  is occurring more than 1 time,
then all the duplicate entries must be deleted and the number must be
present only 1 time in the array. Then display the resultant array.*/
#include<stdio.h>
int func(int[],int, int);
void main()
{
    int i,j,num,d,t,lol;
    printf("enter number of elements in array");
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        printf("Enter %d element",i+1);
        scanf("%d",&lol);
            if(func(arr,lol,num)==0)
            arr[i]=j;
            else
                {
                    printf("already in array");
                    i--;
                }

    }

    printf("entered array is:");
        for(i=0;i<num;i++)
            printf("%d, ",arr[i]);


}

int func(int arr[],int lol, int num)
{
    int i,counter=0;
    for (i=0;i<num;i++)
        if(arr[i]==num)
            counter++;
        if (counter==0)
            return ;
        else
        return 1;
}
