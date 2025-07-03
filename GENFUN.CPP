/*
Genric Function - Accept argument of any type and perform operation

template<class T>
T funName(T var, T var, ...)
{

}
*/
#include<iostream.h>
#include<conio.h>

template<class T>
T big(T v1, T v2)
{
  return v1>v2?v1:v2;
}

void main()
{
  int a;
  char b;
  float c;
  clrscr();
  a=big(4,2);
  b=big('A','B');
  c=big(4.5, 5.2);
  cout<<"\n A="<<a<<"\n B="<<b<<"\n C="<<c;
  getch();
}