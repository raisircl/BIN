/*
Structure - It is 3rd data storage technique. It can store more than one
value of different types at time. To implement structure we need to create it
first then use it. It is also known as user defined datatype.

Syntax:
struct structname
{
  datatype var;
  datatype var;
  ...
};
*/
#include<stdio.h>
#include<conio.h>
struct Book
{
  char name[20];
  int price;
  int year;
};
void main()
{
   struct Book b[3];
   int i;
   clrscr();
   for(i=0;i<3;i++)
   {
   printf("\nenter name of book , price and year of publish: ");
   scanf("%s%d%d",b[i].name,&b[i].price,&b[i].year);
   }
   printf("\nYour book detail is \n");

   printf("\nName\t\tPrice\t\tYear");
   for(i=0;i<3;i++)
   {
   printf("\n%s\t\t%d\t\t%d",b[i].name,b[i].price,b[i].year);
   }
   getch();
}

