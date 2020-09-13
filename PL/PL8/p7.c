#include<stdio.h>
void main()
{
    int i,n,e;
    char s1[100];
    printf("Enter string:\t");
    gets(s1);
    printf("Enter the position:\t");
    scanf("%d",&n);
    printf("Enter number of character to be extracted:\t");
    scanf("%d",&e);
    if(e==0)
    {
        for(i=n-1;s1[i]!='\0';i++)
        printf("%c",s1[i]);

    }
    else
    {
        for(i=n-1;i<n-1+e;i++)
            printf("%c",s1[i]);
    }
}
