/*
Friend Function:
1. It is a non member function.
2. It can access private members of the class.
*/

#include<iostream.h>
#include<conio.h>

class Demo
{
  private:

  int x;

  friend void main();
};

void main()
{
  Demo d1;
  clrscr();
  d1.x=100;
  cout<<"\n X="<<d1.x;
  getch();

}
