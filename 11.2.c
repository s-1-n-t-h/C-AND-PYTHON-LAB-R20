#include<stdio.h>
// code for finding length of a string

int ls(char s[])
{
    int i,length = 0;
    for(i = 0;s[i]!='\0';i++)
    {
        length++;
    }
    return length;
}

// code for copying one string into another string (a)
void cps(char s1[],char s2[])
{
    int i;
    for(i = 0;s2[i]!='\0';i++)
    {
        s1[i]=s2[i];
    }
    s1[i]='\0';
}
// code for concatenating 2 strings
void ccs(char s1[],char s2[])
{
    int i,j = ls(s1);
    for(i = 0;s2[i]!='\0';i++)
    {
        s1[j]=s2[i];
        j++;
    }
    s1[j]='\0';

}

// code for comparing two strings
void coms(char s1[],char s2[])
{
    for(int i = 0;i<ls(s1);i++)
    {
        if(s1[i]=s2[i])
        {
            continue;
        }
        else
        {
            if(s1[i]<s2[i])
            {
                printf("\n-1 -- First string is SMALLER than Second string. \n");
                return;
            }
            else
            {
                printf("\n1 -- First string is GREATER than Second string. \n");
                return;
            }
        }
    }
    if(ls(s1)<ls(s2))
    {
        printf("\n-1 -- First string is SMALLER than Second string. \n");
    }
    else if(ls(s1)==ls(s2))
    {
        printf("\n0 -- The Two strings are EQUAL. \n");
    }
    else
    {
      printf("\n1 -- First string is GREATER than Second string. \n");
    }
}
void main()
{
    char s1[100],s2[100],s3[100];

    printf("\n Please Input a string : ");
    gets(s1);

    printf("\n Please Input another string : ");
    gets(s2);

    //a copying
    cps(s3,s2);
    printf("\n The string obtained after copying is : %s\n",s1);


    ccs(s1,s2);
    printf("\n The string obtained after concatenating the two strings is : %s\n",s1);

    //c length
    printf("\n Length of 1'st string is %d and 2'nd string is %d.\n",ls(s1),ls(s2));

    //d comparing
    coms(s1,s2);
}
