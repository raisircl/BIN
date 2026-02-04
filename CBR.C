#include<stdio.h>

/*
Call By Reference
if any change in formal parameter it
affects actual  paramater

why call by ref:

using cbr a function able to return more values at a time

*/

void fun(int*);

void swap(int*,int*);

int main()  // calling function
{
  int a=10, b=20;
  clrscr();
  printf("\nBefore call of fun A=%d, B=%d",a,b);
  //printf("\nBefore call of Fun A=%d",a);
  //fun(&a); // a is actual parameter
  swap(&a,&b);
  printf("\nAfter Call of Fun A=%d, B=%d",a,b);
  //printf("\nAfter call of fun A=%d",a);
  getch();
  return 0;
}
void fun(int *x)  // x is formal parameter
{
  *x=100;
}
void swap(int *x, int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
/*

Swaping of 2 nos using call by reference


void result(int,int,int,int,int,int*,int*);
void main()
{
    result(h,e,m,sci,sst,&total, &per);

}

void result(int h,int e,int m, int sci, int sst,int *t, int *p)
{
  *t=h+e+m+sci+sst;
  *p=*t/5;
}

*/