#include<stdio.h>
void main()
{
  int n,i,marks,count;
  printf("Enter the total no of students in the class :");
  scanf("%d",&n);
  count=0;
  i=1;
  while(i<=n)
  {
    printf("Enter the marks of the Student no %d ",i);
    scanf("%d",&marks);
    if((marks>=0)&&(marks<=100))
    {
      if(marks>=50)
      {
        count++;
        i++;
      }
      else
      {
        i++;
      }
    }
    else
    {
      printf("Enter a valid marks in the range of (0-100)\n");
      printf("Enter the VALID marks of the Student no %d\n",i);
      scanf("%d",&marks);
      if(marks>=50)
      {
        count++;
        i++;
      }
    }
  }
  printf("The No.Of Students Passed in the Exam are : %d out of %d\n",count,n);
}
