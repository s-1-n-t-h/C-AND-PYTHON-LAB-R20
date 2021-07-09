#include<stdio.h>

struct student_info
{
    char name[100];
    int Roll_no;
    char skills[100];

};

typedef struct student_info student;

int main()
{
   FILE *fp;

   int n,i,key;

   student stud[66];
   student std;

   printf("\n\nInput the number of students data to be added :");

   scanf("%d",&n);

   printf("\n\nInput the student details one by one as first name followed by roll_number and skills : \n");
   printf("\n\nInput values of names and skills, replace space by underscore \"_\":\n\nInput :\n ");
   fp = fopen("ITstudDATA.txt","w");

   for(i=0;i<n;i++)
   {
       printf("\n");

       scanf("%s",stud[i].name);

       scanf("%d",&stud[i].Roll_no);

       scanf("%s",stud[i].skills);

       fprintf(fp,"\n\n%s %d %s",stud[i].name,stud[i].Roll_no,stud[i].skills);

   }

   fclose(fp);

   i=1;

   while(i==1)
   {
        fp = fopen("ITstudDATA.txt","r");


        printf("\n\nPlease input roll no student to know their details : ");

        scanf("%d",&key);


        while(fscanf(fp,"\n\n%s %d %s",std.name,&std.Roll_no,std.skills)!= EOF)
        {
            if(key==std.Roll_no)
        {
            printf("\n\t The data of the student is : ");

            printf("\n\t Name : %s \n\t RollNO: %d \n\t Skills: %s\n\n",std.name,std.Roll_no,std.skills);

            i=0;

            break;
        }

        }

        if(i==1)
        {
             printf("\n\n The requested student data does not exist !\n");

             fclose(fp);
        }
        printf("\n\nInput 1 for searching student data or input 0 to exit :");

        scanf("%d",&i);//using same variable as no longer in use

   }
   fclose(fp);

   return 0;
}
