/*
   enter 4 digit number and print sum of its digits
*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int num, sum=0,temp;
  clrscr();
  printf("\nenter a 4 digit number");
  scanf("%d",&num);  // 2312

  temp=num;

  sum=sum+num%10;  // 2312%10+0=>2
  num=num/10; // 2312/10=> 231

  sum=sum+num%10; // 2 + 231%10=> 2+1=>3
  num=num/10; // 231/10=> 23

  sum=sum+num%10; //3+23%10=>3+3=>6
  num=num/10; //23/10=>2

  sum=sum+num%10; //6+2%10=> 6+2=>8
  num=num/10; // 2/10=>0
  printf("\nSum of Digit of %d is %d",temp, sum);
  getch();
}