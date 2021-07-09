#include <stdio.h>
#include <string.h>


int main()
{

   int remr;
   int temp;
   int sum;
   int n;

   sum =0;

   printf("\n Enter a number : ");

   scanf("%d",&n);

   temp =n;

   while (!(n<=0))
   {
      remr =(n % 10);

      sum =((sum)+(remr*remr*remr));

      n =floor(n/10);
   }


   if (temp==sum)

   {
      printf("\nTHE GIVE NUMBER %d IS A AN AMSTRONG NUMBER .\n",temp);
   }

   else
   {
      printf("\nTHE GIVEN NUMBER %d IS NOT an AMSTRONG NUMBER .\n",temp);

    }

   return 0;
}

