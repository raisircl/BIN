
#include<iostream>
using namespace std;

/*
constructor: It is a special function which has same name as of
the class name and it is automatic called during object creation

Primary Job: Allocate Memmory for an object of a class

Features:

It always be public.
It does not has return type - not even void.
It always called once for an object of a class

Application: It is used to initialize data members (properties) of a class.


it has three type

1. default constructor
syntax:
classname() // does not accept arguments
{
   ......
   ...
}

2. parameterized constructor
classname(dt var, dt var,...)
{
   ......
   .....
}

3. copy constructor

classname(classname &refname)
 {
   ....
   .....
 }

*/
class Rect
{
private:

int l,b;   // instance variable

public:
 Rect()
 {
   l=0;
   b=0;
   cout<<"\n Default Constructor Called";
 }
 ~Rect()  //destructor
 {
   cout<<"\n Object Destroyed";
 }

 Rect(int len, int b) // local variable name (same)
 {
    l=len;  // this is a pointer which is representative of current of object inside a class
    this->b=b;  // it is optional to use with intance members of a class but sometime required to overcome variable name confliction issue
    cout<<"\n Parameterized constructor called";
 }
 Rect(Rect &r) //copy
 {
   this->l=r.l;
   this->b=r.b;
   cout<<"\n Copy constructor called";
 }
 void output()
 {
    cout<<"\n Rect Dimension is "<<l<<" x "<<b;
 }
};
int main()
{

    Rect r1; // default
    Rect r2(3,4); // parameterized
    Rect r3(r2); // copy
    r1.output();
    r2.output();
    r3.output();
   return 0;
}// object destroyed