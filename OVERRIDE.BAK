#include <iostream.h>

//using namespace std;
/*
    Override the functin of base class into derive class
*/
class Father
{
  public:
  virtual void jeep()
  {
    cout<<"\n I have a jeep with hood";
  }
  /*
  virtual is a keyword which is used by a class to make its function
  overidable in child classes.
  */
};
class Son:public Father
{
  public:
  void jeep()
  {

    cout<<"\n Now I have Father's Jeep without hood with wide tyres";
  }
  void car()
  {
    cout<<"\n I have BMW X Series.";
  }
};
int main()
{
   Father   f1;
   Son s1;



   //f1.jeep();
   //s1.jeep();
   // base class pointer can point to derive class object
   // pointer can hold the address of derive class object
   Father *ptr;

   ptr=&s1;
   // pointer of parent class can access those members of
   //child class which are inherit from parent

   ptr->jeep();
   //ptr->car(); // error prone
  return 0;
}