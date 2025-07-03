#include<iostream.h>
#include<conio.h>

class Sum
{
  private:
  int n1,n2,total;

  public:
  void input()
  {
    cout<<"\nenter 2 nos";
    cin>>n1>>n2;
  }
  void output()
  {
    cout<<"\n Value of N1="<<n1;
    cout<<"\n Value of N2="<<n2;
  }
  void dototal()
  {

    total=n1+n2;
    cout<<"\n The sum is "<<total;

  }
};

void main()
{

  Sum s1; // s1 is an object

  clrscr();

  s1.input();


  s1.output();
  s1.dototal();

  getch();
}