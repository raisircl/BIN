#include<iostream.h>
#include<conio.h>
class Box
{
  int l,b,h;
  public:
  Box()
  {
    l=0; b=0; h=0;
  }
  Box(int l, int b, int h)
  {
   this->l=l; this->b=b; this->h=h;
  }
  Box(Box &box)
  {
   l=box.l; b=box.b;h=box.h;
  }

  int operator==(Box &box)
  {
     return this->vol()==box.vol();
  }
  int operator!=(Box &box)
  {
     return this->vol()!=box.vol();
  }
  int operator<(Box &box)
  {
     return this->vol()<box.vol();
  }
  int operator>(Box &box)
  {
     return this->vol() > box.vol();
  }
  int vol()
  {
   return l*b*h;
  }
};
void main()
{
   Box b1(4,3,2),b2(2,3,4);
   clrscr();
   if(b1==b2)
   {
    cout<<"\b Boxes are equal";
   }
   else
   {
    cout<<"\nBoxes are not equal";
   }
   getch();
}