#include<stdio.h>

int main(){

float CEL,FAH,CtoF,FtoC;

   printf("\nEnter the Temperature in Celsius : ");

   scanf("%f",&CEL);

   printf("\nEnter the Temperature in Fahrenheit :");;

   scanf("%f",&FAH);

   CtoF =((9/5)*CEL)+32;

   FtoC =((FAH-32)*5)/9;

   printf("\nThe tempearure  in Fahrenhiet is : %fF\n \nThe Temperature in Celsius is : %fC\n",CtoF,FtoC);

return 0;
}



