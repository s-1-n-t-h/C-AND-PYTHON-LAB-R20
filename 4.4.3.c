#include<stdio.h>

int main(){

int s,a,b,c;
float area;

   printf("\nPlease input the magnitude of semiperimeter of the traingle: ");

   scanf("%d",&s);


   printf("\nInput length of the side 'a' of the traingle : ");

   scanf("%d",&a);


   printf("\nInput length of side 'b' od the traingle : ");

    scanf("%d",&b);

   printf("\nInput length of side 'c' of the traingle : ");


   scanf("%d",&c);

   area =sqrt((s*(s-a)*(s-b)*(s-c)));

   printf("\n\nThe area of the given triangle through Herons's Formula is : %fm^2 .\n",area);

return 0;
}


