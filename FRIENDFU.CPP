/*
friend function -
1. Non member function
2. It can access private members of the class
3. We need to declare a function as a friend inside the class
*/
#include<iostream.h>
#include<conio.h>
class Demo
{
  private:

  int x,y;

  friend void main();

};
void main()  // main non member function
{
  Demo d1;
  clrscr();
  d1.x=10;
  d1.y=20;
  cout<<"\n x="<<d1.x;
  getch();
}

