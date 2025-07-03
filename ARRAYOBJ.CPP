#include<iostream.h>
#include<conio.h>
class Rect
{
  private:
  int l,b;
  public:
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
  Rect r[3];
  int i;
  clrscr();
  for(i=0;i<3;i++)
  {
   r[i].input();
  }
  cout<<"\n Your Rectangle Dimensions is ";
  for(i=0;i<3;i++)
  {
   r[i].output();
   r[i].area();
  }
  getch();
}

/*
Box - l, b, h

input output

vol area

*/