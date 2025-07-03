/*
while loop - Unknown loop and condition control.

while(condition)
{
  ...
  ....
  ....
}
enter a number and count its digits

*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int num, x=0, y=0,r=0;
  clrscr();
  printf("\nenter a number");
  scanf("%d",&num); //123
  while(num>0) // 123>0=>T, 12>0=>T , 1>0=>T, 0>0=>F
  {
    x++;  // 1, 2 , 3
    y=y+num%10;//0+123%10=>0+3=>3, 3+12%10=>3+2=>5, 5+1%10=>5+1=>6
    r=r*10+num%10; //
    num=num/10; // 123/10=>12, 12/10=>1 , 1/10=>0
  }
  printf("\nDigits=%d",x);
  printf("\nSum of Digits =%d",y);
  printf("\nReverse of a number is %d",r);
  getch();
}
/*
i=1;
while(i<=10)
{
  printf("\n%d",i);
  i++;
}
for(;num>0;)
{

}
7/3=> 2
7%3=>1

1. Sum of Digits     %
2. Reverse of Digits

3. Print a number to Word 123=> One Two Three
4. enter a number and check is it arm strong or not
153
1*1*1+5*5*5+3*3*3 =>1+125+27=>153
*/