#include<stdio.h>
#include<conio.h>
void main()
{
  int num,sum=0;  // num=5423;ans=>14
  clrscr();
  printf("\nenter 4 digit number");
  scanf("%d",&num); // 5423
  /*3*/	sum=sum+num%10; // 5423%10=> 0+3
	num=num/10; // 5423/10=>542
  /*5*/ sum=sum+num%10; // 3+542%10=>3+2
	num=num/10; // 542/10=>54
  /*9*/	sum=sum+num%10; // 5 + 54%10=>5+4
	num=num/10; // 54/10=>5
 /*14*/	sum=sum+num%10; // 9+5%10=>9+5
 printf("\nThe sum of Digits =%d",sum);// 14
 getch();
}
/*
 enter a 4 digit number and print its reverse
 1234=>4321
 enter a 4 digit number and print sum of 1st and last digit
 1234=>5
 enter a 3 digit number print sum of the cubes of its digits
 123=> 1*1*1+2*2*2+3*3*3=>1+8+27=>36

*/