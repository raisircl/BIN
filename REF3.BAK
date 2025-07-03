#include<iostream.h>
#include<conio.h>

void college(int &);

void swap(int&, int&);

void main()
{
  int x=100;

  clrscr();

  cout<<"\n value of X="<<x;
  //Ref variable DT &refname=varname;
  int &y=x; // now Y is another name of X

  cout<<"\n value of Y="<<y;


  y=300;

  cout<<"\n Value of X="<<x;

  college(x);

  cout<<"\n after college X="<<x;

  int a,b;
  cout<<"\n enter a and b";
  cin>>a>>b;
  swap(a,b);
  cout<<"\n after swap a="<<a<<" and b="<<b;

  getch();
}
void college(int &f)
{
    f=1000;
}
void swap(int &x, int &y)
{
   int z;
   z=x;
   x=y;
   y=z;
}