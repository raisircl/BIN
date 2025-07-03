/*
Aim - Sum of 2 Nos
Author - Rai
Place - SIRCL
Date - 29 May 2024
*/
#include<stdio.h>
#include<conio.h>
void main()
{
  //declare
  int n1,n2,total;
  clrscr();
  //assignment - take input from user
  //scanf("format-specifiers",&var1, &var2,...);
  //format specfiers must be adjacent
  //prefix & with each variable
  printf("\n enter 2 nos ");
  scanf("%d%d",&n1,&n2);
  //logic
  total=n1+n2;
  printf("\nThe sum is %d",total);
  printf("\nThe sum of %d and %d is %d",n1,n2,total);

  getch();

}
/*
 1. Subtraction -
 2. Production - *
 3. Division - /     5/2=>2
 4. Remainder - % (Modulas)  5%2=>1
*/