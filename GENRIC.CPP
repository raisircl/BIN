#include<iostream.h>
#include<conio.h>

template <class T, class U>
class A {

    T x;
    U y;

public:
    A()
    {
	cout << "Constructor Called" << endl;
    }
    A(T t1, U u1)
    {
	   cout<<"\n parameterized construtor called";
	   x=t1;
	   y=u1;
    }
    void output()
    {
      cout<<"\n X="<<x<<" and "<<"y="<<y;
    }
};

int main()
{
    clrscr();
    A<char, char> a('A','B');
    A<int, double> b(33,22.33);

    a.output();

    b.output();

    getch();

    return 0;
}
/*
DSA -
SOLID PRINCIPLES - GANGS OF FOUR
APTITUDE - RS AGARWAL

*/