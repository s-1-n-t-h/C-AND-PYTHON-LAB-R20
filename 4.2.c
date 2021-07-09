#include<stdio.h>

int main(){

int x,y,z;

   printf("\nInput a number x: ");

   scanf("%d",&x);

   printf("\nInput a number y: ");

   scanf("%d",&y);

   printf("\nInput a number z: ");

   scanf("%d",&z);

   if (x>y)
   {
      if (x>z)
      {
         printf("The maximum number among given three numbers is x = %d :",x );      }
      else
      {
         printf("The maximum among the given numbers is z = %d ",z );      }
   }
   else
   {
      if (y>z)
      {
         printf("The maximum among the given numbers is y = %d ",y);      }
      else
      {
         printf("The maximum among the given three numbers is z = %d ",z);      }
   }

return 0;
}


