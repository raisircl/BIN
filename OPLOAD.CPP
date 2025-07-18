/*
Aim: Operator Overloading  - Our operators know how to perform operations
on primary data types like int , char , float etc.

So, An operator does not know that how to perform on class objects.

So operaotr knows 2-3 types of task how it can perform on data and we want
to assign it some more task this is known operator overloading.

Aim - Give definition to an operator that how it can perform on class objects.

syntax:
ReturnType operator symbol(dt var,...)
{

}
*/
#include<iostream>
//using namespace std;
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
  Distance Add(Distance &d)
  {
    Distance temp;
    temp.feet=this->feet+d.feet;
    temp.inch=this->inch + d.inch;
    return temp;
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
int main()
{
  Distance d1(4,6);
  Distance d2(3,4);
  Distance d3;
  clrscr();

  d3 = d1 + d2;

  //d3=d1.Add(d2);

  d3.output();

  getch();

}
/*
Box

check 2 boxes are equal or not

==

*/