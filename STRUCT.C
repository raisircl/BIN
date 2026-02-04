/*
Structure - It is 3rd data storage technique. It can store more than one
value of different types at time.

To implement structure we need to create it
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
  float price;
  int year;
};
typedef struct Book B;
void main()
{
   B b1={"Let us C",400.80,2009};

   struct Book b2;
   clrscr();

   printf("\nenter name of book , price and year of publish");
   scanf("%s%f%d",b2.name,&b2.price,&b2.year);

   printf("\nYour book detail is \n");

   printf("\nName\t\tPrice\t\tYear");
   printf("\n%s\t%.2f\t\t%d",b1.name,b1.price,b1.year);
   printf("\n%s\t\t%.2f\t\t%d",b2.name,b2.price,b2.year);
   getch();
}

