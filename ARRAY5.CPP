#include<iostream.h>
#include<conio.h>
void main()
{
  int a[5],x, flag=0;
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
   cout<<"\n"<<a[i];
  }
  cout<<"\nenter element to search";
  cin>>x;
  for(i=0;i<5;i++)
  {
    if(x==a[i])
    {
      flag=1;
      break;
    }
  }

  if(flag==1)
  {
   cout<<"\n element found in array  at "<<i+1<<" position";
  }
  else
  {
   cout<<"\nelement not found";
  }
  getch();
}