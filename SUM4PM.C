/*
Aim - Sum of 2 Nos
Author - Rai
Date - 10 Oct 2023
Place - SIRCL TECH
*/
#include<stdio.h>
#include<conio.h>
void main()
{
  //declration
  int n1,n2,total;

  clrscr();
  //Assignment

  //n1=100;
  //n2=200;
  printf("\nenter 2 Nos");
  scanf("%d%d",&n1,&n2);

  //logic or using
  total=n1+n2;
  printf("\nThe sum is %d",total);
  printf("\nThe sum of %d and %d is %d",n1,n2,total);
  printf("\n%d+%d=%d",n1,n2,total);
  printf("\n %d\n+%d\n-----\n %d",n1,n2,total);
  getch();
}//end of program
/*
printf					   scanf
ouput					   input
printf("msg+formatspecifiers",v1,v2,...)   scanf("formatspecifiers",&v1,&v2,...);
format specifiers can be write as you want must be adjacent
variable write dicrectly		   prefix & with each variable
*/
/*
1. enter 2 nos and print product
2. enter 2 nos and print subtraction
3. enter 2 nos and print division (/)
4. enter 2 nos and print modulas (%) remainder
5. enter marks of 5 subject and print total and percentage

*/