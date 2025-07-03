#include<iostream>
using namespace std;
class Box
{
  int l,b,h;
  public:
  Box()
  {
    l=0;
    b=0;
    h=0;
  }
  Box(int len, int bre, int ht)
  {
    l=len;
    b=bre;
    h=ht;
  }
  int operator==(Box &b)
  {
     return this->vol()==b.vol();
  }
  int vol()
  {
    return l*b*h;
  }
};
void main()
{
   Box b1(1,2,3);
   Box b2(3,2,1);
   clrscr();
   if(b1==b2)
   {
     cout<<"\n Boxes are equal";
   }
   else
   {
     cout<<"\n Boxes are not equal";
   }
   getch();
}



