#include<iostream.h>
#include<conio.h>

//constructor  - it is a special function which has same name a of class name

//primary job is to allocate memory for an object of a class for this no
//need to define it inside the class

// it automatically called during an object creation
//applicatio - it is used to intialize the data members(variables) of an
//object
//it always be public
// it does not has return type not even void
// it called only once for an object
// it has three type
// default constructor - does not accept argument
// parameterized constructor - accept argument
// copy constructor - accept argument of type class
class Demo
{

  public:
    int x;
    Demo()
    {
      x=100;
      cout<<"\n Constructor Called";
    }
    Demo(int xval)
    {
      x=xval;
      cout<<"\nParameterized contructor called";
    }
    Demo(Demo &d)
    {
      x=d.x;
      cout<<"\nCopy constructor called";
    }
    ~Demo()
     {
       cout<<"\n Object destroyed";
     }
};
//it has same name as of the class name and define with tilde symbol (~)
// destructor called automatically when control goes outside the block
// and object destroyed
//it does not accept argument

void main()
{
   clrscr();

   {
     Demo d1;
     cout<<"\n x of d1 is "<<d1.x;


   }// here d1 destroyed thats why destructor for d1 has work

   Demo d2(200);
   Demo d3;
   Demo d4(d2);
   cout<<"\n x of d2 is "<<d2.x;
   cout<<"\n x of d3 is "<<d3.x;
   cout<<"\n x of d4 is "<<d4.x;
   getch();
}