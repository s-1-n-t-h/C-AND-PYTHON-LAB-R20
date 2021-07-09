#include<stdio.h>

int main(){

int year;


printf("\nEnter the number of the Year : ");


scanf("%d",&year);

   if (year % 4==0)
   {
      if (year % 100==0)
      {
         if (year % 400==0)
         {

            printf("\nThe year entered is a Leap Year :");         }
         else
         {
         }
      }
      else
      {

         printf("\nThe year is a Leap year " );      }
   }
   else
   {

      printf("The Year is Not a Leap Year ");   }

return 0;
}



