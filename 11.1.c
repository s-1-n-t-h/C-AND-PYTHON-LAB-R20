#include<stdio.h>
#include<string.h>
 // Implementing the algorithm using library of strings

void main()
{
    char s1[100]="Mr.ANIL is Programming Professor, ";

    char s2[100]="He is an excellent teacher ";

    char s3[100];



    printf("\nstrcpy(s3,s2)is :%s\n",strcpy(s3,s2));

    printf("\nstrcat(s1,s2) is :%s\n",strcat(s1,s2));

    printf("\nstrlen(s1) is :%d\n",strlen(s1));

    printf("\nstrcmp(s1,s2) is :%d\n",strcmp(s1,s2)); // return 0 if strings are equal

    // return 1 if s1>s2 return -1 if s1<s2



}
