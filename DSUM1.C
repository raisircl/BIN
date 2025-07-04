#include<stdio.h>
#include<conio.h>
void main()
{
   int num, d1,d2,d3,d4,sum;
   clrscr();
   printf("\nenter a 4 digit number");
   scanf("%d",&num); //5432

   d1=num%10; //2
   num=num/10; //5432/10=>543
   d2=num%10; // 543%10=>3
   num=num/10; // 543/10=>54
   d3=num%10; // 54%10=>4
   num=num/10; // 54/10=>5
   d4=num%10; // 5%10=>5
   num=num/10; // 5/10=>0
   sum=d1+d2+d3+d4;
   printf("\nSum of digits=%d",sum);
   getch();

}

// reverse of digits      5432 => 2345
// sum of 1st and last digit of 4 digit number
