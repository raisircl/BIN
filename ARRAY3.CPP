#include<iostream.h>
#include<conio.h>
void main()
{
  int a[5],s=0;
  int i;
  clrscr();
  for(i=0;i<5;i++)
  {
   cout<<"\n enter element ";
   cin>>a[i];
  }
  cout<<"\n your array elements sum is:";
  for(i=0;i<5;i++)
  {
   s=s+a[i];
   cout<<"\n"<<a[i];
  }
  cout<<"\n Sum of array is "<<s;
  getch();
}