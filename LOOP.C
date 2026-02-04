/*
loop  is a technique to execute one or more than one instructions again
and again.

Loop execute in 2 modes or situations.

1. Known  - example - Run around a ground 3 time.

for loop

2. Un Known - example - Run around a ground untill you tired.

while
do-while

In c langauge for loop is used for known situations. It is counter control
loop. syntax -                   <---------------4
		(1)             (2)             <----------------------
for(initialize-loop-counter; condition; incr|decr-in-counter)         -
{                               - (true)                              -
  ....<--------------------if condition goes to true come inside loop -
  ....                             execute statement one by one       -
  ....  3                                                             -
}----- from closing braces go to incr or decr point--------------------
......
*/
#include<stdio.h>
#include<conio.h>
void main()
{
   long int i,num,x=1,sum=0,fact=1,n,p=1;
   clrscr();

   printf("\nenter a value of M");
   scanf("%ld",&num);  //m

   printf("\nenter value of N");
   scanf("%ld",&n);


   //for(i=1;i<=num;i++) //1,2
   //{
     //printf("\n%d.Hello User",i);
     //printf("\n%2dx%2d = %2d",num,i,i*num);
     //printf("\n%d",i*i);
     //printf("\n%ld",x);
     //x=x*2;
     //printf("%ld+",i);
     //sum=sum+i;
     //fact=fact*i;
     //printf("%ldx",i);
   //}

   //printf("\b=%ld",sum);
   //printf("\b=%ld",fact);

   //for(i=1;i<=n;i++)
   //{
     // p=p*num;
   //}
   //printf("\n%ld raise to power %ld is %ld",num,n,p);
   /*for(i=1;i<=200;i++)
   {
     printf("\n%ld",i);
     if(i%20==0)
     {
      printf("\npress any key...");
      getch();
     }
   } */
   getch();
} // end of program

/*
			  Dry Run
i	condition                                Output
1	True                              Hello User
2       T                                 Hello User
3       T                                 Hello User
4       T                                 Hello User
5       T                                 Hello User
6       F
--------------------------------Output
Hello User
Hello User
Hello User
Hello User
Hello User
_
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
eg. m=3 and n=4 ans= mxmxmxm=>81

(10).
print all even nos upto 50

11.
print all nos upto 200 paging 20

*/




