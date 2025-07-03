/*
Ternery Operator - Operates on 3 Operand

? then
: otherwise

syntax    T            F

condition ? expr1-work : expr2-work;

Nested Ternery
condition ? (condition?expr1:expr2) : (condition?expr1:expr2);

 big  = a>b ? (a>c?a:c) : (b>c?b:c);

*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();

  printf("\nenter 2 nos");
  scanf("%d%d",&a,&b);

  a>b ? printf("\nA is Biggest") : printf("\nB is biggest");

  c = a>b ? a : b;

  if(a>b)
  {
    c=a;
  }
  else
  {
    c=b;
  }

  printf("\nBiggest Number is %d",c);

  getch();
}
//biggest between 3 nos using ternery operator

/*

enter working hour of an employee and calculate daily wage

wh	wage
8	 350

over time
wh		      wage per hour
>8 upto 10      	50
>10 upto 12	    	75
>12 upto 14	    	100

other wise invalid input

  11

8   350
9    50
10   50
11   75
----------
    525
ITR
from 	to 	tax%
1	12 Lac	0
>12	16	5%
>16	20	10%
>20	24	15
>24		20%

2100000   0+20000+40000+15000=85000


*/
