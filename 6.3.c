2 #include <stdio.h>


int main()
{

   int j,k,i,n;

   printf("\nENTER THE NUMBER OF ROWS TO BE PRINTED FOR THE FLOYDS TRAINGLE ; ");

   scanf("%d",&n);

   i =1;

   k =1;

   while (!(i>n))
   {
      j =1;
      while (!(j>i))
      {
         printf("%d ",k);

         k =k+1;

         j =j+1;
      }

      printf("\n");

      i =i+1;
   }
   printf("\nFLOYD'S TRIANGLE IS PRINTED. \n");

   return 0;
}
