#include <stdio.h>
void main()
{
   int a[20][20],b[20][20],c[20][20],i,j,x,y,p,q;

   printf("\nPlease input the No.of rows of matrix 1 :");
   scanf("%d",&x);

   printf("\nPlease input the No.of columns of matrix 1 :");
   scanf("%d",&y);

   printf("\nPlease input the No.of rows of matrix 2 :");
   scanf("%d",&p);

   printf("\nPlease input the No.of columns of matrix 2 :");
   scanf("%d",&q);

   if((x==p)&&(y==q))
   {
       printf("\n Input the elements of the matrix 1\n\t:");

       for(i=0;i<x;i++)
       {
           for(j=0;j<y;j++)
           {
               scanf("%d",&a[i][j]);
           }
       }

       printf("\n Input the elements of the matrix 2\n\t:");

       for(i=0;i<x;i++)
       {
           for(j=0;j<y;j++)
           {
               scanf("%d",&b[i][j]);
           }
       }

       for(i=0;i<x;i++)
       {
           for(j=0;j<y;j++)
           {
               c[i][j] = a[i][j]+b[i][j];
           }
       }

       printf("\n The matrix obtained after addition of the two arrays is\n\t:");

       for(i=0;i<x;i++)
       {
           for(j=0;j<y;j++)
           {
               printf("%d ",c[i][j]);
           }
           printf(" \n\t");
       }


   }
   else
   {
       printf("\nThe matrices should be of same dimension to perform matrix addition !\n");
   }
}
