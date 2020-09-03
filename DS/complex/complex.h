#include<math.h>

// Structure Declaration
typedef struct complexf{
float real;
float img;
} complex; // variable complex is declared with 'complexf'

// Function Prototypes
complex inv(complex a1);
float mod(complex a1);
complex cnj(complex a1);
complex cadd(complex a1,complex a2);
complex csub(complex a1,complex a2);
complex cmult(complex a1,complex a2);
complex cdiv(complex a1,complex a2);

// Function Definitions

// returns mod of a complex number a1
float mod(complex a1)
{
float r;
r = pow((pow(a1.real,2)+pow(a1.img,2)),0.5);
return r;
}

// returns inverse of a complex number i.e. a1^-1
complex inv(complex a1)
{
complex r;
 r.real = a1.real / pow(mod(a1),2);
 r.img = (-a1.img) / pow(mod(a1),2);
 return r;
}

// returns conjegate of the complex number a1
complex cnj(complex a1)
{
complex r;
r.real = a1.real;
r.img = -(a1.img);
return r;
}

// returns the addition of two complex number a1 and a2
complex cadd(complex a1, complex a2)
{
complex r;

r.real = a1.real + a2.real;
r.img = a1.img + a2.img;

return r;
}

// returns the subtraction of two complex numbers a1 and a2
complex csub(complex a1, complex a2)
{
complex r;

r.real = a1.real - a2.real;
r.img = a1.img - a2.img;

return r;
}

// returns the multiplication of two complex numbers a1 and a2
complex cmult(complex a1, complex a2)
{
complex r;

r.real = a1.real* a2.real - a1.img * a2.img;
r.img = a1.real* a2.img + a1.img * a2.real;

return r;
}

// returns the division of two complex numbers a1 and a2
complex cdiv(complex a1,complex a2)
{
complex r;

r.real = cmult(a1,cnj(a2)).real / pow(mod(a2),2);
r.img = cmult(a1,cnj(a2)).img / pow(mod(a2),2);

return r;
}
