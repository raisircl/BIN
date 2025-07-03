#include<iostream.h>
#include<conio.h>
template<class T,class T1>
class Ops
{
  private:

  T n1;
  T1 n2;

  public:
  Ops(T a, T1 b)
  {
      n1=a;
      n2=b;
  }
  void output()
  {
    cout<<"\n N1="<<n1<<" and N2="<<n2;
  }
  void sum()
  {
    T1 r;
    r=n1+n2;
    cout<<"\nThe sum is "<<r;
  }
};
void main()
{
  Ops<int,double> o1(10,20.88);
  Ops<double,int> o2(77.22,22);
  clrscr();

  o1.output();
  o2.output();
  o1.sum();
  o2.sum();
  getch();
}