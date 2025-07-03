/*
if(condition)
{
  ..
}
else if(condition)
{
  ..
}
else if(condition)
{
 ...

}
...
else
{
  ..
}
*/
#include<iostream.h>
#include<conio.h>

void main()
{
  int day;
  clrscr();
  cout<<"\nenter day of the week";
  cin>>day;
  if(day==1)
  {

    cout<<"\n today is monday";

  }
  else if(day==2)
  {
    cout<<"\n tue";
  }
  else if(day==3)
  {
   cout<<"\nwed";
  }
  else if(day==4)
  {
    cout<<"\nthu";
  }
  else if(day==5)
  {
    cout<<"\nfri";
  }
  else if(day==6)
  {
   cout<<"\nsat";
  }
  else if(day==7)
  {
   cout<<"\n sun";
  }
  else
  {
   cout<<"\n invalid input";
  }
  getch();
}
// biggest between 3 nos
