#include<stdio.h>
#include<string.h>
#include<malloc.h>
void main()
{
	int i;
	struct data
	{
		char name[10];
		int age;
		char add[15];
	};
	struct data b1; // declares an object to the structure data
	struct data *b; // declares an pointer to the structure data
	b = (struct data *)malloc(sizeof(struct data));
	//For pointer variable we use arrow notation instead of dot notation
	printf("Enter name:  ");
	gets(b->name);	// b->name is equal to (*b).name
	printf("Enter address:  ");
	gets(b->add);
	printf("Enter age:  ");
	scanf("%d",&b->age);
	

printf("%s \n %d \n %s\n\n",b->name,b->age,b->add);
printf("%s \n %d \n %s\n\n",b1.name,b1.age,b1.add);

// Second case

	struct data1
	{	
		int age;
		char name[10];
		float wage;
		char add[20];

	}b2;

	printf("Enter details:\n");

	printf("\nEnter age\t");
	scanf("%d",&b2.age);
// as scanf() leaves a new line character so to avoid gets() to take that \n as input we have used it above scanf()
// to use scanf() before gets() we can also use fflush(stdin); to clear the buffer but this will not work on all the compliers like linux gcc
// so a more convinent approach is to use getchar() to caputre \n after every scanf()
	fflush(stdin);

	printf("Enter name:\t");
	gets(b2.name);
	printf("Enter Wage:\t");
	scanf("%f",&b2.wage);

	getchar();

	printf("\nEnter address:\t");
	gets(b2.add);


	printf("\nDetails are:\n");
	printf("Name: ");
	puts(b2.name);
	printf("Age: %d",b2.age);
	printf("\nAddress: ");
	puts(b2.add);
	printf("Wage: %.3f",b2.wage);


}