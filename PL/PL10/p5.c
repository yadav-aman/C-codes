#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct student{
    char name[10];
    int roll;
    int age;
    char course[5];
};

void details(struct student *ptr)
{
    printf("Enter name: ");
    gets(ptr->name);
    printf("Enter roll number: ");
    scanf("%d",&(ptr->roll));
    printf("Enter age: ");
    scanf("%d",&(ptr->age));
    getchar();
    printf("Enter course: ");
    gets(ptr->course);
}

void display(struct student b)
{
    printf("Name: ");
    puts(b.name);
    printf("Roll number: %d",b.roll);
    printf("\nAge: %d",b.age);
    printf("\nCourse: ");
    puts(b.course);
}

void main()
{
    int i,n;
    printf("Enter the number of students:\t");
    scanf("%d",&n);
    getchar();
    struct student *ptr;
    ptr = (struct student *)malloc(n*sizeof(struct student));
    if (ptr == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        printf("\nEnter details of the student %d\n",i+1);
        details(&ptr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        printf("\nDetails of the student %d are\n",i+1);
        display(ptr[i]);
    }
    free(ptr);
}