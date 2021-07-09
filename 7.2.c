#include <stdio.h>


int main()
{

   int  REMR,NUM,Org_NUM,Curr_NUM;



   printf("\nEnter a No for checking whether it is a Palindrome or Not : ");

   scanf("%d",&NUM);

   Org_NUM =NUM;

   Curr_NUM =0;

   REMR =0;

   while (!(NUM<=0))
   {
      REMR =floor(NUM % 10);
      Curr_NUM =(Curr_NUM*10)+REMR;
      NUM =floor(NUM/10);
   }
   if (Curr_NUM==Org_NUM)
   {
      printf("\nThe given number %d is a Palindrome . \n",Org_NUM);
        }

   else
   {
      printf("\nThe given number %d is NOT a Palindrome .\n",Org_NUM);
       }

   return 0;
}
