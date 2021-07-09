#include<stdio.h>

struct bookInfo
{
    char name[100];
    char author[100];
    char subject[100];
    int id;

};

void main()
{
    struct bookInfo book;
    //Information about the book is taken from the user
    printf("\nPlease enter the name of the book :");

    scanf("%[^\n]%*c",book.name);

    printf("\nPlease enter the name of the author :");

    scanf("%[^\n]%*c",book.author);

    printf("\nPlease enter the name of the subject :");

    scanf("%[^\n]%*c",book.subject);

    printf("\nPlease enter the book identification number :");

    scanf("%d",&book.id);

    //information is now stored in the instance / variable book of structure type

    printf("\nThe information given was :\n\n name :%s,\n\n author :%s,\n\n subject :%s,\n\n id :%d\n\n",book.name,book.author,book.subject,book.id);

    //The whole code can also be written using gets,puts,fgets functions predefined in stdio.h
}


