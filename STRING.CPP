/*
String - Array of characters.

Syntax: char strname[size];

eg. char name[10];

or

char name[]="Ankush";

or

char name[]={'R','A','M','\0'};

\0 it is known as null character

Null represent end of string

*/

#include<iostream.h>
#include<conio.h>
void main()
{
  char name[20];
  int i;
  clrscr();
  cout<<"\nenter your name";
  cin>>name;

  cout<<"\nHello "<<name;

  for(i=0;name[i]!='\0';i++)
  {
     cout<<"\n"<<name[i];
  }
  getch();
}
//print string in reverse order
//length of string
