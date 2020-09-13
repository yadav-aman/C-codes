#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
void main()
{
    int i,n;
    printf("Enter the size of string\t");
    scanf("%d",&n);
    getchar();
    char *ptr=(char *)malloc(n*sizeof(char)); //also working fine with int pointer

        if(ptr==NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }

    // OR

   for(i=0;i<n;i++)
    {
    scanf("%c",ptr+i); 
    getchar(); //this function takes '\n' given by scanf
    }
    for(i=0;i<n;i++)
    printf("%c",*(ptr+i));  
}