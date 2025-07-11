#include<iostream.h>
#include<conio.h>
class Father
{
  public:
  virtual void jeep()
  {
    cout<<"\n I have jeep with hood and default tyres";
  }

};
class Son:public Father
{
 public:
 void jeep()
 {
  cout<<"\nI have father jeep and modified it.\nWithout hood and wide tyres";
 }
};
void main()
{
  Father f1;
  Son s1;
  clrscr();
  //f1.jeep();
  //s1.jeep();
  Father *ptr; // in oops pointer of parent class can point to child class object
  ptr=&s1; // ptr pointing to son object

  ptr->jeep();


  getch();
}