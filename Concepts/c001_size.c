#include<stdio.h>
void main()
{
    int *ptr;
    printf("Int = %d\n",sizeof(int));
    printf("Float = %d\n",sizeof(float));
    printf("Char = %d\n",sizeof(char));
    printf("Double = %d\n",sizeof(double));
    printf("Long double = %d\n",sizeof(long double));
    printf("Short int = %d\n",sizeof(short int));
    printf("Long long int = %d\n",sizeof(long long int));
    printf("Pointer = %d\n",sizeof(ptr));

    // working of &&
    int a=5,b=0,c=3;

    b && (a=8);         // We need parentheses as '&&' has more priority than '=' 
    printf("%d\n",a);

    c && (a=10);        // If left side of operator results in false then right side of operator is never calculated
    printf("%d",a);
}