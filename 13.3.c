#include<stdio.h>

struct student
{
    char name[100];
    int year,marks;
};

void main()
{
    FILE *fp1,*fp2,*fp3;
    struct student stud;

    fp1 = fopen("DATA.TXT","a");
    fp2 = fopen("NewDATA.TXT","r");
    fp3 = fopen("MergeDATA.TXT","w");

     while(fscanf(fp2,"\n\n%s %d %d",&stud.name,&stud.year,&stud.marks)!= EOF)
    {
        fprintf(fp1,"\n\n%s %d %d",stud.name,stud.year,stud.marks);
    }
    fclose(fp1);
    fp1 = fopen("DATA.TXT","r");

     while(fscanf(fp1,"\n\n%s %d %d",&stud.name,&stud.year,&stud.marks)!= EOF)
    {
        fprintf(fp3,"\n\n%s %d %d",stud.name,stud.year,stud.marks);
    }

    fclose(fp2);
    fclose(fp3);
}
