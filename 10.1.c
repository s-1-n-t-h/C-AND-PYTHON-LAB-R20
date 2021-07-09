//Demonstration of parameter passing using a FUCNTION
#include<stdio.h>

void milti(int x,int y); //declaration of a function

void main()
{
    int a,b;

    printf("\nEnter any two numbers separated by a space : ");

    scanf("%d %d",&a,&b);

    multi(a,b); // Passing a , b as arguments
}

//definition of the function multi

void multi(int x,int y) // x,y are parameters of this function

// values of a , b are passed into these parameters.
{
    int product;

    product = x*y;

    printf("\nThe product the given two integers is : %d.\n",product);
}
