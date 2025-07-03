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
void main()
{
  Demo d1;
  clrscr();
  d1.msg();
  getch();
}
