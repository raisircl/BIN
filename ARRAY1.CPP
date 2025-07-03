#include<iostream.h>
#include<conio.h>
void main()
{
  int a[5];
  int i;
  clrscr();
  for(i=0;i<5;i++)
  {
   cout<<"\n enter element ";
   cin>>a[i];
  }
  cout<<"\n your array elements are in reverse order:";
  for(i=4;i>=0;i--)
  {
   cout<<"\n"<<a[i];
  }
  getch();
}