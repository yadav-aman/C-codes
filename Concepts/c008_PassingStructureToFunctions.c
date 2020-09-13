#include<stdio.h>
struct costumer{
    char name[10];
    float bal;
};
// Call by reference
void details(struct costumer *ptr)
{
    getchar();
    printf("\nEnter details of the costumer:\n");
    printf("Enter costumer name:\t");
    gets((*ptr).name);
    printf("Enter Balance:\t");
    scanf("%f",&(*ptr).bal);

}

// Call by value
void display(struct costumer b)
{
    printf("\nCostumer Name:\t");
    puts(b.name);
    printf("Costumer Balance:\t%.3f\n",b.bal);
}

void main()
{
    printf("Enter the number of costumers:\t");
    int n,i;
    scanf("%d",&n);
    printf("Enter the details of the costumer:\n");
    struct costumer c[n];
    for(i=0;i<n;i++)
        details(&c[i]);

    printf("\nDetails of the costumers are:\n");

    for(i=0;i<n;i++)
        display(c[i]);
}