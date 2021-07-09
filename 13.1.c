#include<stdio.h>

struct student
{
    char name[100];
    int year,marks;
};

void main()
{
    FILE *fp;

    struct student stud;

    fp = fopen("DATA.TXT","r");

    while(fscanf(fp,"\n\n%s %d %d",&stud.name,&stud.year,&stud.marks)!= EOF)
    {
        printf("\n\n%s %d %d",stud.name,stud.year,stud.marks);
    }
    fclose(fp);

}
