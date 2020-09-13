#include<stdio.h>
#include<stdlib.h>

void Insert(int H[],int KeyIndex)
{
    int i = KeyIndex,temp = H[KeyIndex];
    while(i>1 && temp>H[i/2])
    {
        H[i] = H[i/2];
        i=i/2;
    }    H[i] = temp;
}

void Delete(int H[],int size)
{
}

int main(void)
{
    int H[] = {0,10,20,30,25,5,40,35};
    int size = sizeof(H)/sizeof(int);
    for(int i=2;i<size;i++)
        Insert(H,i);
    for(int i=1;i<size;i++)
        printf("%d ",H[i]);
    printf("\n");
    return 0;
}