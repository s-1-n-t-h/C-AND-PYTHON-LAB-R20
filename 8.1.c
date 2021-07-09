#include <stdio.h>

void main()
{

   int key,i;
   int n;
   int arr[50];

   printf("\nEnter the size of the array :");

   scanf("%d",&n);

   printf("\nPlease input the elements of the array :");

   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);

   }

   printf("\nPlease input the number to be found :");

   scanf("%d",&key);

   for(i=0;i<n;i++)
   {
       if(key==arr[i])
       {
           printf("The Index of the given number in the array is %d .\n",i);
           break;
       }
       else
       {
           continue;
       }
   }

   if(i==n)
   {
      printf("\nSorry the number is not founf in the given array .\n");

   }

}
