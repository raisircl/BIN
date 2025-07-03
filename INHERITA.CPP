/*
Inheritance is a technique to acquire the members of existing class into new
class. New class is known as child class or derive class or sub class and
existing is known as parent class or base class or super class.
syntax:
class parent_class
{

   private:
   .......
   ....
   protected:
   ..........
   ......
   public:
   .............
   ....
};
class child_class : type_of_inheritance parent_class_name
{
   private:
   ...............
   ....
   protected:
   ......
   ....
   public:
   .......
   ....
};
Type of Inheritance
1. private - parent class members become private in child class
2. protected - parent class members become proctected in child class
3. public - parent class proctected members become proctected in child class
	   and public members become public

Single Level
A
|
|
B

Multi Level
A
|
|
B
|
|
C

Multiple

A........B
   |
   |
   C

Hierarchical
A
|_____
|    |
B    C
     | ___
     D   E

Hybrid

Multilevel + Multiple
A
|
|
B ---- C
   |
   |
   D

*/
#include<conio.h>
#include<iostream.h>
class A
{
   private:
   void amsg()
   {
      cout<<"\n Hello from Private msg of A";
   }
   protected:
   void amsgpro()
   {
       cout<<"\n Hello from A pro";
   }
   public:
   void amsgpub()
   {
    cout<<"\n Hello From public msg of A";
   }
};
class B: public A
{

};
void main()
{
  B b1;
  clrscr();
  //b1.amsg();
  //b1.amsgpro();
  b1.amsgpub();
  getch();
}