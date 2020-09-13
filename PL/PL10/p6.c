#include<stdio.h>
#include<stdlib.h>
struct student{
        int rn;
        char name[10];
        char dept[5];
        char course[10];
        int yoj;
    };
// as we are using struct student as a data type in function so we need to define structure before prototype?? is this true??
void display_name(struct student [], int);
void display_details(struct student [], int); // what is the problem with this prototype ??

void main()
{
    int i,n;
    printf("Enter the no. of students\t");
    scanf("%d",&n);
    struct student stud[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter the roll no of %d student\t",i+1);
        scanf("%d",&stud[i].rn);
        getchar();
        printf("\nEnter the name of %d student\t",i+1);
        gets(stud[i].name);
        printf("\nEnter the department of %d student\t",i+1);
        gets(stud[i].dept);
        printf("\nEnter course of %d student\t",i+1);
        gets(stud[i].course);
        printf("\nEnter the year of joining of %d student\t",i+1);
        scanf("%d",&stud[i].yoj);
        getchar();
    }
    display_name(stud,n);
    display_details(stud,n);
}

void display_name(struct student b[],int n)
{
    int year,i,c=0;
    printf("\nEnter the year you want to search\t");
    scanf("%d",&year);
    for(i=0;i<n;i++)
    {
        if(b[i].yoj==year)
        {
            printf("\n%s\n",b[i].name);
            c++;
        }
    }
    if(c==0)
    printf("\nNo student found");
}

void display_details(struct student b[],int n)
{
    int rolln,i,c=0;
    printf("\nEnter the roll no. you want to search\t");
    scanf("%d",&rolln);
    for(i=0;i<n;i++)
    {
        if(b[i].rn==rolln)
        {
            printf("\nName: %s",b[i].name);
            printf("\nCourse: %s",b[i].course);
            printf("\nDepartment: %s",b[i].dept);
            printf("\nYear of Joining: %d",b[i].yoj);
            c++;
        }
    }
    if(c==0)
    printf("\nNo student found");
}
