#include<iostream.h>
class Demo
{
  int x;
  public:
  Demo()
  {
   x=10;
   cout<<"\n Object create by Default Constructor";
  }
  Demo(int xval)
  {
    cout<<"\n Parameterized contructor called";
    x=xval;
  }
  Demo(Demo &d)
  {
    cout<<"\nCopy constructor called";
    x=d.x;
  }
  void output()
  {
   cout<<"\n X="<<x;
  }
};

void main()
{
  Demo d1;
  Demo d2(200);
  d1.output();
  d2.output();

}