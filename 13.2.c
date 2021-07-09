#include<stdio.h>
struct student
{
    char name[100];
    int year,marks;
};
void main()
{
    FILE *fp1,*fp2;

    struct student stud;

    fp1 = fopen("DATA.TXT","r");
    fp2 = fopen("NewDATA.TXT","w");

     while(fscanf(fp1,"\n\n%s %d %d",&stud.name,&stud.year,&stud.marks)!= EOF)
    {
        fprintf(fp2,"\n\n%s %d %d",stud.name,stud.year,stud.marks);
    }
    fclose(fp1);
    fclose(fp2);
}
