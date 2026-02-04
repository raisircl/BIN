/*
Operator: It is a symbol which is used to operates on data and the data on
which operator operates is known as operand.

eg 5 + 10

+ operator

5 and 10 operand (data)

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
  int x=5;
  int y;
  y=~x;  // 5 binary 101 => 010> 2
  printf("\n Y=%d",y)// 2

! logical not  - inverse the result 1=>0 or 0=>1

2. Binary Operators- operates on two operands
   2.1 Airthmatic Operator
	+ Addition  5+2=>7
	- Subtraction  5-2=>3
	* Multiplication  5*2=>10
	/ Division        5/2=>2  int/int=>int, int/float=>float  float/int=>float float/float=>float
	% Modulas         5%2=>1  never work on float values

   2.2 Relational Operator - always give result either 1 (true) or false (0)
	<  Less Than   : 5<10 => 1
	>  Greater Than : 3>10=> 0
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

       example - 5>3 && 30>10
		  1  && 1
		     1

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

     example:
     a>b ? printf("A big") : printf("B Big");

*/

#include<stdio.h>
#include<conio.h>

void main()
{
  int x=10, y, a=10,b;
  int i=5, j=1, r;
  clrscr();

  y = x++; // value of x assign to Y first then increse by one
  printf("\nX=%d and Y=%d",x,y); // X=11 and Y=10

  b=++a; // here value of a increase by one then assign to b
  printf("\nA=%d and B=%d",a,b); // A=11 and B=11

  r= a>i && j<y; // 11, 5, 19, 10   11>5 && 1<10
  printf("\nR=%d",r);//1
  getch();
}

/*
Priority of Operator

which one operator operate first

P  Op  		Associativity ( When same priority opestors come in an expression)
1. ()           LTR
2. * / %	LTR
3. + - 		LTR
4. < > <= >=	LTR
5. == !=        LTR
6. &&		LTR
7. ||		LTR
8. =		RTL

6*2/4

int a,b;

a=b=10;

Q1.

5+2*3>7/2&&6>9==4||3/2

5+6>7/2&&6>9==4||3/2
5+6>3&&6>9==4||3/2
5+6>3&&6>9==4||1
11>3&&6>9==4||1
1&&6>9==4||1
1&&0==4||1
1&&0||1
0||1
1

Q1. input basic sal of emp , calculate 10% hra, 40% da , 5% pf deduct print net sal
q2. input a 4 digit number print sum of its digits
    number : 5432 => 14
Q3. input 4 digit number print its reverse
    5432 => 2345
Q4. RD minimum premium INR 5 , for 5 year fix, Maturity => 347.25
    Imp: Premium 5 Divisable

*/