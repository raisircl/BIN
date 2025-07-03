/*
Simple interest program

*/
#include<stdio.h>
#include<conio.h>
void main()
{
   float p,r,t,si;
   clrscr();
   printf("\nenter Principle Rate and time ");
   scanf("%f%f%f",&p,&r,&t);
   si=p*r*t/100;
   printf("\nSimple Interest is %f",si);
   getch();
}