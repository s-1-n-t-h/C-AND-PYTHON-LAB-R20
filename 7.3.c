#include <stdio.h>

int main()
{

   int x,i,n,term,sum;

   i =1;

   printf("\nInput the Common Ratio of the Geometric Progreassion : ");

   scanf("%d",&x);

   printf("\nInput the Total No of Terms in the Expression ");

   scanf("%d",&n);

   n =n-1;
   term =1;
   sum =1;
   while (!(i>n))
   {
      term =term*x;

      sum =sum+term;

      i =i+1;

   }

   printf("\nTHE SUM OF ALL THE TERMS OF THE GIVEN GEOMETRIC SERIES IS : %d \n",sum);

   return 0;
}
