#include<stdio.h>
#include<conio.h>
#include "MYLIB.h"
void main()
{
  float r,a;
  printf("\nenter rad");
  scanf("%f",&r);
  a=PI*r*r;
  printf("\nArea is %f",a);

  MSG;

  getch();
}