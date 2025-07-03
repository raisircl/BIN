#include<iostream.h>
#include<conio.h>
class Father
{
 public:
  virtual void msg()
  {
    cout<<"\n I am Father";
  }
};
class Son : public Father
{
   public:
     void msg()
     {
       cout<<"\n I am son";
     }
};

void main()
{
  Son s1;
  clrscr();
  s1.msg();

  Father *fptr;  // pointer of parent can point to child class object

  fptr=&s1; // now it can access all the members of child class which inherited from parent

  fptr->msg();

  getch();
}