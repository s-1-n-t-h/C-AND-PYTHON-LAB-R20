#include <stdio.h>


int main()
{

   int NUM,REMR,SUM;

   printf("\nENTER A POSITIVE NUMBER : ");


   scanf("%d",&NUM);

   REMR =0;

   SUM =0;

   while (!(NUM<=0))
   {
      REMR =(NUM % 10);

      SUM =SUM+REMR;

      NUM =(NUM/10);
   }

   printf("\nTHE SUM OF THE INDIVIDUAL DIGITS OF THE GIVEN NUMBERS IS : %d .",SUM);

   return 0;
}
