#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i;
	struct data
	{
		char name[20];
		int age;
		char stream[5];
		int year;
	}emp[3];

/*
	for(i=0;i<3;i++)
	{
		printf("%d Enter name:\t",i+1);
		scanf(" %20[^\n]s",emp[i].name); // space at front is important
		printf("%d Enter age:\t",i+1);
		scanf("%d",&emp[i].age);
		printf("%d Enter Stream:\t",i+1);
		scanf(" %5[^\n]",emp[i].stream); //doubt -- How is this working without '&' and 's'(line 18 also) but will not work without & on line 19? answer - as it is string
		printf("%d Enter year:\t",i+1);
		scanf("%d",&emp[i].year);
	
	}
*/
	// OR

	for(i=0;i<3;i++)
	{	
		printf("%d Enter name:\t",i+1);
		gets(emp[i].name);
		printf("%d Enter age:\t",i+1);
		scanf("%d",&emp[i].age);
		getchar();
		printf("%d Enter Stream:\t",i+1);
		gets(emp[i].stream);
		printf("%d Enter year:\t",i+1);
		scanf("%d",&emp[i].year);
		fflush(stdin);
		// more about fflush(stdin) and getchar() in structure1.c
	}

	for(i=0;i<3;i++)
	{
		printf("\nName %d : %s",i+1,emp[i].name);
		printf("\nAge %d : %d",i+1,emp[i].age);
		printf("\nStream %d : %s",i+1,emp[i].stream);
		printf("\nYear %d : %d",i+1,emp[i].year);
		printf("\n");		
	}
}