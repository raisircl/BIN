/*

syntax:

  for(  ;    ;   )
  {
     ...
     .....
     ....
     break; ------
     .....       _
     .....       -
  }              -    1. Break transfer the control outside the loop
  ....           -    2. cause of break become un-natural death of loop
  ....    <-------    3. emergency exit from loop

1. enter a number check is it prime or not

  5
 5%2 => 1
 5%3=> 2
 5%4=> 1
 5%5=> 0

  9
 9%2=>1
 9%3=>0  break

*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int num,i;
  clrscr();
  printf("\nenter a number");
  scanf("%d",&num);  // 5, 9

  for(i=2;i<num;i++) // 2<5=>t, 3<5, 4<5, 5<5=>f |  2<9=>t, 3<9=>t
  {
      if(num%i==0)  //5%2==0=>F, 5%3==0=>F, 5%4==0=>F | 9%2=>1==0>F, 9%3=>0==0=>T
      {
	break;
      }
   }

   if(i==num) //5==5, 3==9
   {
      printf("\n%d is prime number",num);
   }
   else
   {
     printf("\n%d is not prime number",num);
   }
  getch();
}
/*
 Print all prime numbers upto 100
*/

