/*
Array - 2nd data storage technique. 1st is variable.

Sum of 2 Nos - You Need 3 Variables N1, N2, T
if you want to sum up the 100 nos you need 101 variables

Array can store multiple values of same type at a time.

Array Implementation Rule

1. Declare The Array
   Syntax: datatype arrayname[size];

   Example: int a[5]; // a has 5 element

   a 	   |   |   |    |   |   |
   index     0   1    2   3   4

   1st element always at 0th position

   Last element always at size-1 position

   index is used to access array element

2. Assignment: Put value into array element using index
   Syntax: a[index]=value;
   Example:
	    a[0]=10;
	    a[1]=4;
	    a[2]=7;
	    a[3]=9;
	    a[4]=2;
   a     | 10 | 4 | 7 | 9 | 2 |
   index    0   1   2   3   4

3. Using:
   printf("\n%d",a[0]);
   printf("\n%d",a[1]);
   printf("\n%d",a[2]);
   printf("\n%d",a[3]);
   printf("\n%d",a[4]);

*/
#include<stdio.h>

int main()
{
   int a[5];
   clrscr();
   a[0]=10;
   a[1]=4;
   a[2]=7;
   a[3]=9;
   a[4]=2;

   printf("\n%d",a[0]);
   printf("\n%d",a[1]);
   printf("\n%d",a[2]);
   printf("\n%d",a[3]);
   printf("\n%d",a[4]);
  return 0;
}