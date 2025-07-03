#include<stdio.h>
#include<conio.h>
void main()
{
  float p,r,t,si;
  clrscr();
  printf("\nenter P R T");
  scanf("%f%f%f",&p,&r,&t);
  si=p*r*t/100;
  printf("\nSimple Ineterest is %f",si);
  printf("\nPrinciple=%.2f\nRate=%.f\nTime=%.2f\nSimple Interest=%.2f",p,r,t,si);
  printf("\n%.2fx%.2fx%.2f/100=%.2f",p,r,t,si);
  getch();
}