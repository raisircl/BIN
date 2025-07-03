/*
Aim: Operator Overloading
Name:
Class:
Roll No:
Department:
University:
*/
#include<iostream.h>
#include<conio.h>
class Distance
{
  private:
  int feet,inch;
  public:
  Distance()
  {
    feet=0;
    inch=0;
  }
  Distance(int f,int i)
  {
   feet=f;
   inch=i;
  }

  Distance operator+(Distance &d)
  {
    Distance temp;
    temp.feet=this->feet+d.feet;
    temp.inch=this->inch+d.inch;
    return temp;
  }

  void output()
  {
   cout<<"Distance: "<<feet<<" feet "<<inch<<" inch";
  }
};
void main()
{
  Distance d1(4,6);
  Distance d2(3,4);
  Distance d3;
  clrscr();
  d3=d1+d2;
  d3.output();
  getch();

}
