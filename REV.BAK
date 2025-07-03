/*
   enter 4 digit number and print sum of its digits
*/
#include<stdio.h>
#include<conio.h>
void main()
{
  long int num, rev=0,temp;
  clrscr();
  printf("\nenter a 5 digit number");
  scanf("%ld",&num);  // 2312

  temp=num;

  rev=rev*10+num%10;  // 0*10+2312%10=> 0+2=>2
  num=num/10; // 2312/10=> 231

  rev=rev*10+num%10; // 2*10 + 231%10=> 20+1=>21
  num=num/10; // 231/10=> 23

  rev=rev*10+num%10; //21*10+23%10=>210+3=>213
  num=num/10; //23/10=>2

  rev=rev*10+num%10; //213*10+2%10=> 2130+2=>2132
  num=num/10; // 2/10=>0

  rev=rev*10+num%10;

  printf("\nReverese of %ld is %ld",temp, rev);
  getch();
}