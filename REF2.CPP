#include<iostream.h>
#include<conio.h>
void fun(int &);
void main()
{
  //Reference Variable
  //Create an alias of existing variable
  //Syntax :
  //       DataType &RefVarName=VarName;
  int x=10;
  int &y=x; // y is ref of x or y is another name of x
  clrscr();
  y=100;

  fun(x);

  cout<<"\n Value of X="<<x;
  getch();


}
void fun(int &z)
{
  z=200;
}
