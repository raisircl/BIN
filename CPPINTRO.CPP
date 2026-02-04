/*
  OOP - Object Oriented Programming

  Object ( Any Person Place or thing) -Anything which is exist in the world and which has description  or which can be describe
  ^
  |
  Oriented (Dedication in One Direction)
  ^
  |
  Programming (An approach to write a program)


  Program - Solution ( Product )

  OOP is a theoratical concept to understand the real life in computer world with technical description.

  OOP - How to create new objects and how to use existing one (object base)

  Paradigms

  Class   - Class is collection of descriptions. It is just an imagination.
	    It does not physically exist in the world.
  Object  - Physically exist in the world which can be describe

  Relation Between Class and Object

  Class gives theoratical description about an object and object is real life
  representative of class. It tells what what of an object is.

  Ecapsulation - It is a process to wrap the information about an object which
  you want to create into a single unit after encasulation the encapsulated unit
  is know as class. Class has

	Properties  - Decide how an object look like
	Function - decide how an object work
	Events  - what kind of actions an object can take.
	Event Handlers - when a function associated with an event that function is known as event handler

  in its description. During encpsulation we will also decide which one member of class
  should be public or private to make a member private is known as data hiding.

  class classname
  {
    private:
      .....  variables
      -----  function
    public:
      ......... vars
      --------- fun
  };

  // Private and Public known as access specifiers
  //Which one memeber will be accessed outside the class or which one not

  Abstration - represent the complexity in simple manner

  Polymorphism
  Inheritance
*/
#include<iostream.h>
//using namespace std;

class Rect
{
   private:
    int l,b;  // data member (vars) - properties

   public:
    void input()  // member function
    {
      cout<<"\nenter Len and Breadth of Rect";
      cin>>l>>b;
    }
    void output()
    {
     cout<<"\n Rect dimesion is "<<l<<"x"<<b;
    }
    int Area()
    {
     return l*b;
    }
};

int main()  // present
{
  Rect r1, r2; // r1 and r2 is an object of Rect class

  r1.input();  // 3,2
  r2.input();  //4,5

  r1.output();

  r2.output();

  int a=r1.Area();

  cout<<"\nArea of r1 is "<<a;
  cout<<"\nArea of R2 is "<<r2.Area();
  return 0;
}
/*
Box  L, B, H
input()
output()
area ()
vol()


//
Slab
From	To		Tax       INR
0       300000		0%        0
>3Lac   700000		5%        20K
>7Lac   10Lac		10%       30K
>10Lac	15Lac		15%       15K
>15Lac  ~		20%

Input

11Lac

Tax
1 Lac 65000 - Shivam, Navdeep, Komal, ..


Factory
8 Hrs 250/-
Overtime
>8 upto 10    50/-hr OT
>10 upto 12   75/-hr
>12 upto 14   100/- hr

11 hour   => 250+50+50+75=>425

425,
*/