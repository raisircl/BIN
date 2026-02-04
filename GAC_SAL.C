/*
enter
Basic Salary of employee
calculate
10 % HRA
40 % DA
5  % PF         Deduct
-------------
----------------
Print Net Salary
Basic : 12000

*/
#include<stdio.h>
#include<conio.h>
void main()
{
   float bs,da,hra,pf,net;
   clrscr();
   printf("\nenter Basic Salary of employee");
   scanf("%f",&bs);
   da=bs*40/100;
   hra=bs*10/100;
   pf=bs*5/100;
   net=bs+hra+da-pf;
   printf("\nSalary Slip :");
   printf("\nBasic Salary : %.2f",bs);
   printf("\nHRA : %.2f", hra);
   printf("\nDA : %.2f",da);
   printf("\nPF : %.2f",pf);
   printf("\nNet Sal: %.2f",net);
   getch();
}