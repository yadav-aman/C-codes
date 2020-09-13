#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct student
{
    char *name;
    int age;
    int class;
    char *stream; 
};
void main()
{
    struct student *b;
    b=(struct student *)malloc(sizeof(struct student));
    if(b==NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    printf("Enter details of the student\n");
    scanf("%s",b->name);
    scanf("%d",&(b->age));
    scanf("%d",&(b->class));
    scanf("%s",b->stream);

    printf("%s\n",b->name);
    printf("%d\n",b->age);
    printf("%d\n",b->class);
    printf("%s\n",b->stream);

}