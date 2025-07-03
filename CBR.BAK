#include<stdio.h>

/*
Call By Reference
if any change in formal parameter it
affects actual  paramater
*/
void fun(int*);

void swap(int*,int*);
int main()
{
  int a=10;
  clrscr();
  printf("\nBefore call of fun A=%d",a);
  fun(&a); // a is actual parameter
  printf("\nAfter Call of Fun A=%d",a);
  getch();
  return 0;
}
void fun(int *x)  // x is formal parameter
{
  *x=100;
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