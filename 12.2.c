#include<stdio.h>

struct ComplexNo
{
    float real;
    float imag;
};

typedef struct ComplexNo cno;

cno addcom(cno x,cno y);

void main()
{
   cno cno1,cno2,result;

   printf("\nInput the real and imaginary parts of 1st number :");

   scanf("%f %f",&cno1.real,&cno1.imag);

   printf("\nInput the real and imaginary parts of 2nd number :");

   scanf("%f %f",&cno2.real,&cno2.imag);

   result = addcom(cno1,cno2);

   printf("\nThe result after adding the two complex number is:%.2f %.2fi\n",result.real,result.imag);

}

cno addcom(cno x,cno y)
{
    cno add;

    add.real = x.real+y.real;

    add.imag = x.imag+y.imag;

    return add;
}
