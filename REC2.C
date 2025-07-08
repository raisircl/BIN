//recursion - when a function call itself
#include<stdio.h>
#include<conio.h>

void fun(int);

int fact(int);

void main()
{
  int f;
  clrscr();

  f=fact(3);
  printf("\n Factorial is %d",f);
  getch();
}


int fact(int x)
{
   if(x==1)
   {
     return 1;
   }
   else
   {
     return x * fact(x-1);
   }
}