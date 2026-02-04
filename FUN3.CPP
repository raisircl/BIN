#include<stdio.h>
#include<conio.h>
/*
  Function Return and Accept

  RT funName(DT,DT,...);

*/
int fact(int);
 // fact is a function it accept an int value and return int val

int ss(int);
// WAF that accept int value and return sum of all natural nos up to it.

//10 1+2+3+4+5+6+7+8+9+10=55

void table(int);

void sum();
void pro();

void main()
{
  int x;
  int y;
  clrscr();

  x=fact(4); //4x3x2x1=24

  y=ss(10);

  printf("\nFactorial is %d",x);
  printf("\nsum of all natural nos =%d",y);

  getch();
}

int ss(int num)
{
    int s=0, i;
    for(i=1;i<=10;i++)
    s=s+i;
    return s;
}


int fact(int num)
{
  int i, f=1;
  for(i=1;i<=num;i++)
  {
    f=f*i;
  }
  return f;
}