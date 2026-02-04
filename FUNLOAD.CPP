/*
Polymorphism - more than one form

1. Compile Time Polymorphism | Design Time  | static Binding

Function Overloading - Function has same name and accept diffrent arguments
Operator Overloading - operator perform more than one task according to datatype
Constructor Overloading -

2. Polymorphism -  Function Overriding
   Run Time Polymorphism | Run Time | Dyanamic Binding

*/
#include<iostream>
using namespace std;
class Shape
{
  public:
  void area(int x)
  {
    cout<<"\n area of sqaure "<<x*x;
  }
  void area(int l, int b)
  {
    cout<<"\n area of rect "<<l*b;
  }
  void area(double r)
  {
     cout<<"\n area of circle is "<<3.14*r*r;
  }
};

int main()
{
   Shape s1;

   s1.area(2,3);// data binding - connection of a function call with its body
   s1.area(5.2);
   s1.area(4);
   return 0;
}