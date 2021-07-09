#include<stdio.h>

void main(){

    int a,b,temp;

    printf("Enter the value of a : \n");

    scanf("%d",&a);

    printf("\n");

    printf("Enter the value of b : \n");

    scanf("%d",&b);

    printf("The values before swapping are a = %d and b = %d \n",a,b);

    temp = a;

    a = b;

    b = temp;

    printf("\n");

    printf("The values after swapping are a = %d and b = %d \n",a,b);

    return;
}
