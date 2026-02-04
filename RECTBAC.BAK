/*
Encapsulation:Process to create the class.
Class: Collection of Properties, Functions
Syntax:
class ClassName
{
   private:

   datatype var;
   ..
   ReturnType func_name(DataType varname, ...)
   {

   }
   public:

   DataType VarName;
   ...
   ReturnType FuncName(DataType varname,...)
   {

   }
};

*/
#include<iostream.h>
class Rect
{
  private:
   int l;
   int b;

  public:
   void input()
   {
      cout<<"\nenter Length and Breadth of Rect:";
      cin>>l>>b;

   }
   void output()
   {
      cout<<"Rect Dimension is "<<l<<"x"<<b;
   }
   int area()
   {
     int a;
     a=l*b;
     return a;
   }
   int peri()
   {
     int p;
     p=2*(l+b);
     return p;
   }
}; // end of the class. class gives theoratical description about an object

int main() // present
{
  // we need to create an object of class in the main
  Rect r1;
  Rect r2;

  r1.input();
  r2.input();
  cout<<"1st ";
  r1.output();

  cout<<"\n2nd ";
  r2.output();

  int r1_area;
  r1_area=r1.area();
  cout<<"\n Area of Rect 1 is "<<r1_area;
  cout<<"\n Perimeter of Rect 1 is "<<r1.peri();

  return 0;
}