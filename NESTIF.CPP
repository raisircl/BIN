/*
if(condition)
{
  if(condition)
  {
    ...
  }
  else
  {
    ...
  }
}
else
{
 if(condition)
 {
    ...
 }
 else
 {
    ..
 }
}

*/
#include<iostream.h>
#include<conio.h>

void main()
{
  int age;
  clrscr();
  cout<<"\nenter age"; // 18-45 eligible for insurance otherwise not
  cin>>age;
				 //50
  if(age>=18)
  {
    if(age<=45)
    {
    cout<<"\n you are eligible for insurance";
    }
    else
    {
      cout<<"\n you are not eligible";
    }
  }
  else
  {
    cout<<"\n you are not eligible";
  }
  getch();
}
// biggest between 3 nos
