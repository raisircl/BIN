#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5]={1,3,4,5,6};
  int *x,i;
  clrscr();
  x=a; // name of array always contain it self base address
  //x=&a[0];

  printf("\n Base address of A=%u",x);
  x++;  //18
  printf("\n x point to %u location of array",x);
  x=x+2;  //22
  printf("\n x point to %u location of array",x);

  x=x-3;

  for(i=0;i<5;i++)
  {
     printf("\n %d",*x);
     x++;
  }
  getch();
}