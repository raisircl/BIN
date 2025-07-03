#include<stdio.h>
#include<conio.h>
void main()
{
  int a=5, b=3, c;
  clrscr();
  printf("\nBefore swap A=%d and B=%d",a,b);
  c=a;
  a=b;
  b=c;
  printf("\nAfter swap A=%d and B=%d",a,b);
}
