#include<stdio.h>
/*
Call By Value
if any change in formal parameter
it does not affect actual  paramater
*/
void fun(int);
int main() //calling function
{
  int a=10;
  clrscr();
  printf("\nBefore call of fun A=%d",a);

  fun(a); // a is actual parameter

  printf("\nAfter Call of Fun A=%d",a);
  getch();
  return 0;
}
void fun(int x)  // x is formal parameter // fun is called function
{
  x=100;
}