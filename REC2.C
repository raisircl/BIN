//recursion - when a function call itself
#include<stdio.h>
#include<conio.h>

void fun(int);

int fact(int);

void main()
{
  int f;
  clrscr();
  fun(3);

  f=fact(5);
  printf("\n Factorial is %d",f);
  getch();
}

void fun(int x) //3  2  1 0
{                       //-
  if(x>0)              //-
  {                   // -
    printf("\nHello");// -
    fun(x-1); //2 1 0---------
  }
  printf("\n x=%d",x);

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