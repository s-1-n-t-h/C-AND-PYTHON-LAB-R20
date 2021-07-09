#include<stdio.h>

// c program for finding fibonacci , factorial of a number using recursion.

int fib(int x);

int fact(int n);

int main()
{

    int n,m;

    printf("\nEnter the fibonacci to be found :");

    scanf("%d",&n);

    printf("\nThe fibbonacci is : %d\n",fib(n));

    printf("\nInput the number for which factorial is to be found :");

    scanf("%d",&m);

    printf("\nThe factorial of the given number is : %d\n",fact(m));


    return 0;

}

int fib(int x)
{
    if(x==0||x==1)
    {
        return x;
    }

    else
    {
        return fib(x-1)+fib(x-2);
    }
}

int fact(int n)
{
    if(n==0){
        return 1;
    }

    else{

      return n*fact(n-1);
    }
}
