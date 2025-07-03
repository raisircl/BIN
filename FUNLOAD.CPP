/*
Polymorphism - more than one form

Compile Time Polymorphism | Design Time  | static overloading

Function Overloading - Function has same name and accept diffrent arguments
Operator Overloading - operator perform more than one task according to datatype
Constructor Overloading - 

Runtime Polymorphism -
 Function Overriding

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

   s1.area(2,3);  // data binding - connection of a function call with its body
   s1.area(5.2);
   s1.area(4);
   return 0;
}