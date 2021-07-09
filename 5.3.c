#include<stdio.h>

int main(){

int a,b;
float value;
char c;

   printf("\nEnter the operation to be performed : ");

   scanf("%c",&c);

   printf("\nEnter a number : ");

   scanf("%d",&a);

   printf("\nEnter one more number : ");

   scanf("%d",&b);



switch(c)
   {
   case '+':
            value=(a+b);
            printf("a+b = %f",value);
            break;


   case '-':
             value=(a-b);
             printf("a-b = %f",value);
             break;

   case '*':
             value=(a*b);
             printf("a*b = %f",value);
             break;

   case '/':
             value=(a/b);
             printf("a/b = %f",value);
             break;


   case '%':
            value=(a%b);
            printf("a%cb = %f",c,value);
            break;

   default :
            printf("Enter a valid operation !!.");
            break;



   }




return 0;
}



