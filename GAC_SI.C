/*
Aim:  Simple Interest Program

*/
#include<stdio.h>
#include<conio.h>
void main()
{
  float p,r,t,si;
  clrscr();

  printf("\nenter Principle Amount, Rate of Interest and Time:");
  scanf("%f%f%f",&p,&r,&t);
  si=p*r*t/100;
  printf("\n Simple Interest is %f",si);
  getch();
}