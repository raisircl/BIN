/*
Operator: It is a symbol which is used to operates on data and the data on
which operator operates is known as operand.

eg 5 + 10
+ operator
5 and 10 operand

Types of operators  -

1. Unary Operator - Operates on single operand
+ unary plus  +5, +10
- unary minus  -10, -3

++ increment operator - increase the value of variable by one

	syntax:

	varname++; //post increment

	example -

	int x=10;
	x++; // x will be 11
	printf("\nX=%d",x); //output - 11

	or

	++varname; pre increment

	int x=10;
	++x;// x will be 11
	printf("\nX=%d",x); // 11

-- decrement operator - decrease the value of variable by 1

~ bitwise one's complement
! logical not  - inverse the result 1=>0 or 0=>1

2. Binary Operators- operates on two operands
   2.1 Airthmatic Operator
	+ Addition  5+2=>7
	- Subtraction  5-2=>3
	* Multiplication  5*2=>10
	/ Division        5/2=>2  int/int=>int int/float=>float  float/int=>float float/float=>float
	% Modulas         5%2=>1  never work on float values

   2.2 Relational Operator - always give result either 1 (true) or false (0)
	<  Less Than   : 5<10 => 1
	>  Greater Than : 3>10=>0
	<= LT Equal To
	>= GT equal to
	== equal to
	!= not equal to

   2.3 Logical Operator - combine 2 or more than 2 relations give result 1 or 0
       && Logical And - gives true when all condtions goes to true

       Truth table &&

       R1	R2 	Result
       1        1	1
       1	0	0
       0	1	0
       0	0	0

       example - 5>3 && 30<10
		  1  && 0
		     0

       || Logical Or  - gives true when any one condition goes true

       Truth table ||
       R1	R2	Result
       1	1	1
       1	0	1
       0	1	1
       0	0	0
       example
       5>10 || 4<20
	0   ||  1
	    1

  3. Ternery Operator - operates on 3 operands
	? then
	: otherwise

     Syntax:

     condition ? expr1    :  	expr2;
     True	 Work	  	Not Work
     False       Not Work 	Work

*/

#include<stdio.h>
#include<conio.h>

void main()
{
  int x=10, y, a=10,b;
  int i=5, j=19, r;
  clrscr();
  y = x++; // value of x assign to Y first then increse by one
  printf("\nX=%d and Y=%d",x,y); // X=11 and Y=10

  b=++a; // here value of a increase by one then assign to b
  printf("\nA=%d and B=%d",a,b); // A=11 and B=11

  r=a>i && j<y; // 11, 5, 19, 10   11>5 && 19<10
  printf("\nR=%d",r);//0
  getch();
}