//static data member and member functions
//static member become a common member of a class
//static member is a variable or a function
//static variable known as static data member
//static function known as static member function
//static member function always made for static data member - vv imp
//static variable retain itself last value between multiple function call
// static data member declare inside the class and define outside the class
//(declare inside the class and defined outside the class)
//static variable default value always be 0
//static members directly access by class itself not an object
#include<iostream.h>
#include<conio.h>
//using namespace std;

class Demo
{
    private:
    static int x;      // declare
    public:
    void msg()
    {
	x++; // it retains itself last value in multiple function calls
	cout<<"\n X="<<x;
    }
    void msg2()
    {
      static int y=0;
      cout<<"\ny="<<y;
      y++;
    }
    static void getx()
    {
       cout<<"\n current value of the X="<<x;
    }
};
int Demo::x=10;   //initialize outside the class
int main()
{
    Demo d1,d2,d3,d4;
    clrscr();
    d1.msg();
    d2.msg();
    d3.msg();
    d4.msg();
    d1.msg2();
    d2.msg2();
    d3.msg2();
    d4.msg2();

    Demo::getx();  // getx static member function and class demo able to call it


    getch();
}