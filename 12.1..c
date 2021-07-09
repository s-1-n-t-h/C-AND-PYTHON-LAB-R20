#include<stdio.h>

struct student
{
    char name[100];
    int year;
    int marks;
}

void main()
{

    struct student student;

    FILE *fp;

    fp = fopen("STUDENT.DAT","r");



    while(fscanf(fp,"\n%s %d %d",&student.name,&student.year,&student.marks)!= EOF)
    {
        printf("\n%s %d %d",student.name,student.year,student.marks);
    }

    fclose(fp);
}
