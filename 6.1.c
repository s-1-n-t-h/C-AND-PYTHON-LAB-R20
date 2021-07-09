#include<stdio.h>

int main(){


   int i,x;

   printf("\nPlease Input a number : ");

   scanf("%d",&x);

   i =x-1;

   while (!(i<2))
   {
      if ((x % i)==0)
      {
         printf("\nThe given number %d is Not a Prime Number .\n",x);

         i=0;
      }

      else{

         i =i-1;
      }
   }

   if (i==1){

      printf("\nThe given number %d is a Prime Number .\n",x);

   }

return 0;

}



