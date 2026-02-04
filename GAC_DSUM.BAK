/*
enter a 4 digit number and print sum of its digits

*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int num,d1,d2,d3,d4,sum, rev;
  clrscr();

  printf("\nenter a number");
  scanf("%d",&num); //3216
  d1=num%10; //3216%10=6

  num=num/10; //3216/10=321
  d2=num%10; // 321%10=>1

  num=num/10; // 321/10=>32
  d3=num%10; //32%10=>2

  num=num/10; //32/10=>3

  d4=num%10; //3%10=>3
  num=num/10; //3/10=>0

  sum=d1+d2+d3+d4;
  rev=d1*1000+d2*100+d3*10+d4*1;
  printf("\nSum of Digits =%d",sum);
  printf("\nRev of Num is %d",rev);
  getch();
}