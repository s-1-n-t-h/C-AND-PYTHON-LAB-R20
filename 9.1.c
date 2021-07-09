#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc,char *argv[])
{
    switch(argv[2][0])
    {
        case '+':
            printf("\nSum : %s + %s = %d\n",argv[1],argv[3],(atoi(argv[1])+atoi(argv[3])));
            break;
        case '-':
            printf("\nDifference : %s - %s = %d\n",argv[1],argv[3],(atoi(argv[1])-atoi(argv[3])));
            break;
        case '*':
            printf("\nMultiplication : %s * %s = %d\n",argv[1],argv[3],(atoi(argv[1])*atoi(argv[3])));
            break;
        case '/':
            printf("\nDivision : %s / %s = %d\n",argv[1],argv[3],(atoi(argv[1])/atoi(argv[3])));
            break;
        default:
            printf("\nInvalid Operator !...");
            break;

    }
}

