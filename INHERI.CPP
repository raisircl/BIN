#include<iostream.h>
//using namespace std;

/*
Inheritance - Acquire the members of existing class into new one.
Existing class - Parent class or base class or super class
New class - Child class or Derive class or sub class

child class has all the members of parent class but it also has new one.

Inheritance Types

Single Level
A
|
B
........  Multi Level
A
|
B
|
C
--------------Multiple Inheritance
A.....B
   |
   C
---------- Hierarichal
A
|
B----C
|    |
D    E
     | --
     F  G
--------------- Hybrid Inheritance

Multiple + Multi Level
A
|
B
|
C ---D
   |
   E

Syntax:

class Parent
{
   private:
    .....

   protected:
   ......

   public:
    ......
};

class Child : public Parent
{
   private:
   .....
   protected:
   .......
   public:
   .....
};
*/
class Rect
{
  protected:

  int l,b;  // instance variable

  public:
  Rect()   // Default
  {
    cout<<"\n Rect Created - Default Constructor of Rect is Called";
    l=0;
    b=0;
  }
  Rect(int len, int b)  // Parameterized
  {
    cout<<"\n Rect Created using parameterized constructor";
    l=len;
    this->b=b;
  }
  void input()
  {
    cout<<"\n enter len and bre";
    cin>>l>>b;
  }
  void output()
  {
    cout<<"Rect dimension is "<<l<<"x"<<b;
  }
  int area()
  {
    return l*b;
  }
};
class Box : public Rect
{
  int h;
  public:
  Box()   // parent class constructor called first before child class
  {
    cout<<"\n Box Created";
    h=0;
  }
  Box(int l, int b, int h) : Rect(l,b) // explicit call of constructor of parent class
  {
    cout<<"\n Now Box Using Parameterized Created";
    this->h=h;
  }
  void input()
  {
    Rect::input();
    cout<<"\n enter height ";
    cin>>h;
  }
  void output()
  {
    cout<<"\nBox Dimension "<<l<<"x"<<b<<"x"<<h;
  }
  int operator==(Box &b)
  {
     return this->vol()==b.vol();
  }
  int vol()
  {
    //return area()*h;
    return l*b*h;  // box can access l and b bcause they are protected
  }
};
int main()
{

   Box b1(1,2,3);
   Box b2(3,2,1);

   Box b3;
   //b1.input();
   //b2.input();
   b1.output();
   b2.output();

   if(b1==b2)
   {
     cout<<"\n Boxes are equal";
   }
   else
   {
     cout<<"\n Boxes are not equal";
   }
   return 0;
}



