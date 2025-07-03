/*
Constructor in Inheritance
1. Constructor Never Inherited
2. Constructor of Parent class always be called first before child class
   costructor

*/
#include<iostream.h>
#include<conio.h>
class Parent
{
  public:
   Parent()  // default constructor
   {
      cout<<"\n Parent Class Constructor Called...";
   }
};
class Child: public Parent
{
   public:
    Child()
    {
       cout<<"\n Child Class Constructor Called...";
    }

};
void main()
{
   clrscr();

   Child c1;

   getch();
}