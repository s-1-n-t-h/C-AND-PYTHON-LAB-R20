#include<stdio.h>

int main(){

   float si; //simple intrest
   float t;    // time
   float p;   //principal
   float r;   // rate

   printf("\nPlease input the Principal amount borrowed :\n");

   scanf("%f",&p);

   printf("\nInput the rate of interest in terms of percentage per year :\n");

   scanf("%f",&r);

   printf("\nEnter the time period in years : \n");

   scanf("%f",&t);

   si =((p*r*t)/100);

   printf("The Simple Intrest to be collected is : %f ",si);

   return 0;

}
