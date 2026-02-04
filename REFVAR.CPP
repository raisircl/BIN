#include<iostream.h>
void fun(int&);
int main()
{
  int x=100;
  //refrence variable is an alias of an another variable
  //syntax - datatype &alias_varname=varname;
  int &y=x; // here y is another name of x
  cout<<"\n Value of x="<<x;
  cout<<"\n value of Y="<<y;
  y=200;
  cout<<"\n value of X="<<x;
  fun(x); // x is actual parameter which we are passing to fun
  cout<<"\n X="<<x;
}
void fun(int &z) // z is formar parameter and alias of X
{
  z=900; // if we change z in fun function it affect the value of x
}
