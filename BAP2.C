/*
Variable Demo
*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int x;
  char y;
  float z;

  clrscr();

  x=10;
  y='A';
  z=9.27;

  printf("\nValue of X=%d",x);
  printf("\nY=%c",y);
  printf("\nZ value is %f",z);
  printf("\nX=%d\nY=%c\nZ=%.2f",x,y,z);
  getch();
  return 1;
}