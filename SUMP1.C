#include<stdio.h>
#include<conio.h>
void main()
{
  int n1,n2,total;  //declaration
  clrscr();
  //assignment
  //take input from user
  //to do this - scanf("format-specifiers",&var,&var,...);
  printf("\nenter 2 nos");
  scanf("%d%d",&n1,&n2);// format specifiers should be adjecent
  //using
  total =n1+n2;
  printf("\nThe total is %d",total);
  getch();
}
/*
Product -: *
Div  -: /
Subtract -: -
Modlulas -: %  remainder
*/