#include<stdio.h>
#include<conio.h>
struct Book
{
  char name[20];
  float price;
  int year;
};
void main()
{
   struct Book b1;
   clrscr();
   printf("\nenter name price and pub year of book");
   scanf("%s%f%d",b1.name,&b1.price,&b1.year);
   printf("\nBook Detail is \n");
   printf("\nName\tPrice\tPub Year");
   printf("\n%s\t%.2f\t%d",b1.name,b1.price,b1.year);
   getch();
}