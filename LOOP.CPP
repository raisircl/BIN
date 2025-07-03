/*

loop  is a technique to execute one or more than one instructions again
and again

Loop execute in 2 modes or situations

1. Known  - example - Run arround a ground 3 time.
for loop
2. Un Known - example - Run arround a ground untill you tired.
while
do-while

In c++ langauge for loop is used for known situations. It is counter control
loop. syntax -                   <---------------
		(1)             (2)             <----------------------
for(initialize-loop-counter;condition;incr|decr-in-counter)           -
{                              3 - (true)                             -
  ....<-------------------------- if condition goes to true come inside loop
  ....                             execute statement one by one       -
  ....                                                                -
}----- from closing braces go to incr or decr point--------------------

*/
#include<iostream.h>
#include<conio.h>
void main()
{
   int i;
   clrscr();
   for(i=1;i<=5;i++)
   {
     cout<<"\nHello User";
   }
   getch();
}
/*
		 Dry Run
i	condition
1	True
2       T
3       T
4       T
5       T
6       F
--------------------------------Output
Hello User
Hello User
Hello User
Hello User
Hello User
*/
/*
Assignment
(1).
1.Hello User
2.Hello User
3.Hello User
4.Hello User
5.Hello User
-------
(2).
1
2
3
4
5
6
7
8
9
10
-------
(3)
2
4
6
8
10
12
14
16
18
20
----------
(4)
1
2
4
8
16
32
64
128
256
512
----------------
(5)
1
4
9
16
25
36
49
64
81
100
----------------------
(6)
print sum of all nos upto 10
eg. 1+2+3+4+5+6+7+8+9+10=55

(7)
print product of all nos upto 5
eg. 5x4x3x2x1=120

(8)
enter a number and print factorial

(9)
enter m and n print product of m "n" times
eg. m=3 and n=4 ans= mxmxm=>27

(10).
print all even nos upto 50
*/




