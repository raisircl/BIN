/*
String - Array of characters.

Syntax: char strname[size];  or char strname[]="value";

eg. char name[50];  // we need to take input using scanf or gets func.

or

char name[]="Chelsi"; // initialize

or

char name[]={'R','A','M','\0'};
	      0   1   2    3    index
\0 it is known as null character. Null represent end of string

RAM

*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char name[20];

  char *str="Hello";   // can not scanf

  int i;
  clrscr();

  printf("\nenter your name:");
  //scanf("%s",name); //it can not accept multiword
  gets(name);

  printf("\nHello %s",name);

  //RAM\0
  for(i=0;name[i]!='\0';i++)
  {
     printf("\n %c",name[i]);
  } // 0,1,2, 3(exit)

  printf("\n%s is %d char long",name,i);

  printf("\n%s is in rev order ",name);
  //i=3
  for(i=i-1;i>=0;i--)
  {
   printf("%c",name[i]);
  }
  getch();
  return 0;
}

//length of string
//print string in reverse order
