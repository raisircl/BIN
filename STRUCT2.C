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
typedef struct Book B;
typedef unsigned long int ULI;
typedef int I;

void disp(B);

void main()
{
   I x;
   struct Book b[3];

   B hpb;

   int i;
   clrscr();
   for(i=0;i<3;i++)
   {
   printf("\nenter name of book , price and year of publish: ");
   scanf("%s%d%d",b[i].name,&b[i].price,&b[i].year);
   }

   printf("\nYour book detail is \n");

   printf("\nName\t\tPrice\t\tYear");

   hpb.price=0;

   for(i=0;i<3;i++)
   {
    printf("\n%s\t\t%d\t\t%d",b[i].name,b[i].price,b[i].year);
    if(hpb.price<b[i].price)
    {
      hpb=b[i]; // we can assign a structure variable into another structure variable
    }
   }

   disp(hpb);

   getch();
}
void disp(B hpb)
{
   printf("\nYour highest price book detail is \n");

   printf("\nName\t\tPrice\t\tYear");
   printf("\n%s\t\t%d\t\t%d",hpb.name,hpb.price,hpb.year);

}
/*
enter marks of 5 student print total , percentage and topper student detail
rollno, name, hindi, eng, math, sci, sst, total, per

*/
