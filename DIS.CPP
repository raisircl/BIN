/*
Topic: Return object from function. Boxing
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
 Distance operator+(Distance &d)// add is a function which return distance object and accept distance's object reference
 {
    Distance temp;
    temp.feet=this->feet+d.feet; // this is a pointer which represent
    temp.inch=this->inch+d.inch; // current object of a class
    return temp;
 }
 int operator==(Distance &d)
 {
    return this->feet==d.feet && this->inch==d.inch;
 }
};

void main()
{
  Distance d1;
  Distance d2;
  Distance d3;
  clrscr();

    d1.input();
    d2.input();

   //d3=d1.add(d2);

   d3=d1+d2;   // d3=d1-d2;

  cout<<"\n D1 ";
  d1.output();

  cout<<"\n D2 ";
  d2.output();

  cout<<"\n D3 ";
  d3.output();

  if(d1==d2)
  {
     cout<<"\n DIstnaces are equal";
  }
  else
  {
    cout<<"\n Distances are not equal";
  }

  getch();
}
