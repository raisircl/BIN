#include<stdio.h>
#include<conio.h>
void greet(); // does not accept and does not return
void main()
{
   clrscr();

    greet();   // calling
    greet();
    greet();
   getch();
}
void greet()  // definition
{
  printf("\nHello User");
  printf("\nWelcome to Greet");
}
