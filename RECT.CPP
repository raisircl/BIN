#include<iostream.h>
#include<conio.h>
class Rect
{
  private:
  int l,b;
  public:
  Rect()
  {
    l=0;
    b=0;
  }
  Rect(int len, int bre)
  {
    l=len;
    b=bre;
  }
  Rect(Rect &r)
  {
    l=r.l;
    b=r.b;
  }
  void input()
  {
     cout<<"\n enter l and b";
     cin>>l>>b;
  }
  void output()
  {
    cout<<"\n Rect Dimension is "<<l<<"x"<<b;
  }
  void area()
  {
    int a;
    a=l*b;
    cout<<"\n  Rect Area ="<<a;
  }
};
void main()
{
  //array of objects
  Rect r1;
  Rect r2(4,3);
  Rect r3(r2);

  clrscr();
  r1.input();
  r1.output();
  r1.area();

  getch();
}

/*
Box - l, b, h
input output
vol area

*/