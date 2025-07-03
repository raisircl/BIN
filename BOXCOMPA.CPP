/*
Aim: Inline Function Program Example
Name: Sunita
Roll No:
Department: Computer Science
University: CDLU
*/
#include<iostream.h>
#include<conio.h>
class Box
{
  private:
  int l,b,h;
  public:
  Box()  // it has same name as of class name,
  {
   l=0;
   b=0;
   h=0;
  }
  Box(int len,int bre,int ht) // parameterized constructor
  {
    this->l=len; // this is a pointer which point to current object
    b=bre;
    h=ht;
  }
  Box(Box &box)// accept argument of type class
  {
   l=box.l;
   b=box.b;
   h=box.h;
  }
  void input() // when we define a function inside the class
  {
  cout<<"\nEnter L B H of Box";
  cin>>l>>b>>h;
  }
  void output()// when we call a inline function the body of function
  {           //inserted at calling place
  cout<<"\nBox Detail ";
  cout<<"\n Length ="<<l<<"\n Breadth="<<b<<"\n Height="<<h;
  }
  void area(); // no inline (declare inside the class and define outside the class)
  int vol()
  {
    int v;
    v=l*b*h;
    return v;
  }
  int operator==(Box &b)
  {
    return this->vol()==b.vol();
  }
  int operator!=(Box &b)
  {
    return this->vol()!=b.vol();
  }

  int operator>(Box &b)
  {
    return this->vol()>b.vol();
  }
};
void Box::area()
{
  int a;
  a=l*b;
  cout<<"\n Area of Box is "<<a;
}


void main()
{
 Box b1;
 Box b2(5,4,2);
 Box b3(4,3,2);

 clrscr();
 b3.output();
 if(b2==b3)
 cout<<"\nBox are equal";
 else
 cout<<"\nBox are not equal";

 getch();
}