//array of characters
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char fname[]={'R','a','m','\0'}; // char array last char always be null char \0
  char mname[10];
  char lname[]="Kumar";

  char *salu="Mr.";   // it can not scanf

  clrscr();
  // \0 always denote end of string
  //if you forgot the presence of null you will face issue to deal with string
  printf("\nenter middle name");
  scanf("%s",mname); // array name contain itself base addres


  printf("\n Hello %s %s %s %s",salu,fname,mname,lname);
  getch();





}