#include<stdio.h>
#include"complex.h"

complex one()
{
	complex r;
	printf("Enter real part  ");
	scanf("%f",&r.real);
		printf("Enter imaginary part  ");
	scanf("%f",&r.img);
	return r;
}

complex two()
{
	complex r1;
	printf("Enter real part of number  ");
	scanf("%f",&r1.real);
	printf("Enter imaginary part of number  ");
	scanf("%f",&r1.img);
	return r1;
}

void pcomplex(complex a1)
{
printf("Complex no is %.3f + (%.3f) i \n\n",a1.real,a1.img);
}

int main(void)
{
complex z,z1,r;
printf("Enter a choice\n");
printf("1. To find modulus of complex number\n2. To find inverse of a complex number\n3. To find conjugate of a complex number\n4. To add two complex numbes\n5. To subtract two complex numbers\n6. To multiply two complex numbers\n7. To divide two complex numbers\n-1. to exit\n");
printf("\n\n");
int n;
scanf("%d",&n);
while(n != -1)
{
	switch(n)
	{
	case (1):
		z = one();
		pcomplex(z);
		float m;
		m = mod(z);
		printf("Mod = %.3f\n",m);
		break;
	case (2):
		z = one();
		pcomplex(z);
		printf("Result ");
		r = inv(z);
		pcomplex(r);
		break;
	case (3):
		z = one();
		pcomplex(z);
		printf("Result ");
		r = cnj(z);
		pcomplex(r);
		break;
	case (4):
		printf("Enter number 1 :\n");
		z = two();
		pcomplex(z);
		printf("\nEnter number 2 :\n");
		z1 = two();
		pcomplex(z1);
		printf("Result ");
		r = cadd(z,z1);
		pcomplex(r);
		break;
	case (5) :
		printf("Enter number 1 :\n");
		z = two();
		pcomplex(z);
		printf("\nEnter number 2 :\n");
		z1 = two();
		pcomplex(z1);
		printf("Result ");
		r = csub(z,z1);
		pcomplex(r);
		break;
	case (6):
		printf("Enter number 1 :\n");
		z = two();
		pcomplex(z);
		printf("\nEnter number 2 :\n");
		z1 = two();
		pcomplex(z1);
		printf("Result ");
		r = cmult(z,z1);
		pcomplex(r);
		break;
	case(7):
		printf("Enter number 1 :\n");
		z = two();
		pcomplex(z);
		printf("\nEnter number 2 :\n");
		z1 = two();
		pcomplex(z1);
		r = cdiv(z,z1);
		printf("Result ");
		pcomplex(r);	
		break;
	default :
		printf("\n!!! Enter a valid choice !!!\n");
	}
	printf("\n1. To find mod of complex number\n2. To find inverse of a complex number\n3. To find conjugate of a complex number\n4. To add two complex numbes\n5. To subtract two complex numbers\n6. To multiply two complex numbers\n7. To divide two complex numbers\n-1. to exit\n");
	printf("\n\nEnter a choice  ");
	scanf("%d",&n);
}
		
return 0;
}