#include<iostream.h>
#include<conio.h>
void main()
{
  int a[5],big=0;
  int i;
  clrscr();
  for(i=0;i<5;i++)
  {
   cout<<"\n enter element ";
   cin>>a[i];
  }
  cout<<"\n your array elements are:";
  for(i=0;i<5;i++)
  {
   if(big<a[i])
	big=a[i];
   cout<<"\n"<<a[i];
  }
  cout<<"\n Biggest element in array is "<<big;
  getch();
}