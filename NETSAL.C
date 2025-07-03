#include<stdio.h>
#include<conio.h>
void main()
{
  float bs,hra,da,pf,net;
  clrscr();
  printf("\nEnter Basic Salary of employee");
  scanf("%f",&bs);   // hra=10%, da=40%, pf=5% net=bs+da+hra-pf;
  hra=bs*10/100;
  da=bs*40/100;
  pf=bs*5/100;
  net=bs+hra+da-pf;
  printf("\n Basic Salary : %.2f",bs);
  printf("\n House Rent Allowance %.2f",hra);
  printf("\n Dearance Allowance %.2f",da);
  printf("\n Provident Fund %.2f",pf);
  printf("\n Net Salary %.2f",net);
  getch();
}