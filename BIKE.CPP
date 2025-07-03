#include<IOSTREAM.h>
//using namespace std;
class Bike
{
    private:
	int srno;
	char color[20]; // instance variable
	static int price; // class variable - common
	static int x; // class variable - common
    public:
	Bike()
	{
	    x++;  // here x is static and it will retain itself last value in multiple function calls
	    srno=x;
	}
	void input()
	{
	    cout<<"\nenter color of Bike";
	    cin>>color;
	}
	void output()
	{
	    cout<<"\nBike Srno:"<<srno;
	    cout<<"\nColor of Bike:"<<color;
	    cout<<"\nBike Price:"<<price;
	}
	static void Hike(int per)
	{

	    // here hp or per is local variable
	    int hp=price*per/100;
	    price=price+hp;
	    cout<<"\n After "<<per<<"% hike new price of bike is:"<<price;
	}
	static void Down(int per)
	{
	    int dp=price*per/100;
	    price=price-dp;
	    cout<<"\n After "<<per<<"% down new price of bike is:"<<price;
	}
};
// static member function always made for static data members
// non static data members can not access by static member function
int Bike::x=0;
int Bike::price=1000;
int main()
{
    Bike b1,b2,b3;  // default constructor
    b1.input();
    b2.input();
    b3.input();

    b1.output();
    b2.output();
    b3.output();

    Bike::Hike(20);
    // static members directly access by the class not by an object


    b1.output();
    b2.output();
    b3.output();
}