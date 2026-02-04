/*
Topic: Return an object from a function.

Boxing  -

Program: Create a distance class with members feet ,inch and add 2 distnace
*/
#include<iostream.h>
#include<conio.h>
class Distance
{
 private:
 int feet,inch;
 public:

 void input()
 {
   cout<<"\nenter feet and inch";
   cin>>feet>>inch;
 }
 void output()
 {
  cout<<" Distance is "<<feet<<" feet "<<this->inch<<" inch";
 }

 Distance add(Distance &d)// add is a function which return distance object and accept distance's object reference
 {
    Distance temp;  //boxing
    temp.feet=this->feet+d.feet; // this is a pointer which represent
    temp.inch=this->inch+d.inch; // current object of a class
    return temp;
    //d3=d1.add(d2);
 }

};

void main()
{
  Distance d1;
  Distance d2;
  Distance d3;
  Distance d4;
  clrscr();
    d1.input();
    d2.input();
    d3.input();

    //d3=d2.add(d1);

    d4=d1.add(d2).add(d3);// d1 is current object


   cout<<"\n D1 ";
   d1.output();

   cout<<"\n D2 ";
   d2.output();

   cout<<"\n D3 ";
   d3.output();

  cout<<"\n D4";
  d4.output();


  getch();
}
