#include<stdio.h>

int main(){

  int a,b,c,R1,R2,D;

   printf("\nEnter the Value of a : ");

   scanf("%d",&a);

   printf("\nEnter the Value of b : ");



   scanf("%d",&b);

   printf("\nEnter the Value of c : ");

   scanf("%d",&c);

   D =((b*b)-(4*a*c));

   if (D>0)
   {
      R1 =floor(((-b)+sqrt(D))/(2*a));
      R2 =floor(((-b)-sqrt(D))/(2*a));

      printf("\NThe Quadratic Equation is having Two Distinct & Real Roots , and the roots are R1: %d and  R2: %d .",R1,R2);

        }
   else
   {
      if (D<0)
      {

         printf("\nThe Quadratic Equation is having Imaginary Roots .");

        }

      else
      {

         R1 =floor(((-b)+sqrt(D))/(2*a));
         R2 =floor(((-b)-sqrt(D))/(2*a));

         printf("\nThe Quadratic Equation Is having two Real and Equal Roots R1 = %d & R2 = %d \n",R1,R2);

        }
   }

return 0;
}


