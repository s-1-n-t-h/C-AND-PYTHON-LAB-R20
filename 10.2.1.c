#include<stdio.h>
int fib(int x)
{
    int i,a,b,fibb;
    if(x==0||x==1)
    {
        return x;
    }
    else
    {   a=0;
        b=1;
        for(i=3;i<=x;i++)
        {
            fibb = a+b;
            a = b;
            b = fibb;

        }
        return fibb;
    }

}

int fact(int m)
{
    int i,fact=1;
    for(i=m;i>=1;i--)
    {
        fact = fact*i;
    }
    return fact;
}
void main()
{

     int n,m;

    printf("\nEnter the fibonacci to be found :");

    scanf("%d",&n);

    printf("\nThe fibbonacci is : %d\n",fib(n));

    printf("\nInput the number for which factorial is to be found :");

    scanf("%d",&m);

    printf("\nThe factorial of the given number is : %d\n",fact(m));

}
