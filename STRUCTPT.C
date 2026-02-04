#include<stdio.h>
#include<conio.h>
struct Book
{
  char name[20];
  int price;
  int year;
};
typedef struct Book B;
void disp(B*);
void main()
{
   B b1={"Let Us C",200,2009};
   clrscr();
   disp(&b1);
   getch();
}
void disp(B *ptr)
{
  printf("\nName=%s, Price=%d, Year=%d",ptr->name,ptr->price,ptr->year);
}