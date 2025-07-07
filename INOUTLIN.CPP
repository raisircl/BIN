/*
inline function vs non inline function

when we define a function inside the class - inline

when we declare a function inside the class and
define out side the class with help of scope resolution operator ::

syntax of non inline:
class classname
{
  public:
  RT funcname(DT,DT); //declare inside
};

RT classname::funcname(DT var,DT var,...)
{
  ....
  .....
  return value;
}
*/
#include<iostream.h>
#include<conio.h>
class  Demo
{
  public:
  void msg();
  void sum(int,int);
  int fact(int);


};
void Demo::msg()
{
  cout<<"\n Welcome to non member function";
}
void Demo::sum(int n1,int n2)
{
  int r;
  r=n1+n2;
  cout<<"\n Sum="<<r;
}
void main()
{
  Demo d1;

  clrscr();

  d1.msg();

  d1.sum(33,22);

  getch();
}

/*

1. when we call the inline function then body of function inserted at calling
place

2. when we call non inline function then control jump to that function and
after process the job return back to calling place like function work in C

90% functions should be non inline



*/