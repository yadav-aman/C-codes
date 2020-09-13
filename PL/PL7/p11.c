#include<stdio.h>
#define size 10
void modify(int a[])
{ int i;
    for(i=0;i<size;i++)
        a[i]=3*a[i];
}
void main()
{
    int a[size],i;
    int r;
    puts("Enter 10 values");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    modify(a);
    for(i=0;i<size;i++)
    printf("%d\t",a[i]);

}
