/*
do-while

 1. Unknown Loop    like while
 2. Condition Control  like while
 3. Exit Control  not like while (entry control)
 4. Also known as Odd Loop  - always work once.

Syntax:

 do
 {
   ....
   .....
 }while(condition);

During entry inside loop there is no condition
It always execute once so it is called odd loop

Application -

It is used for menu driven programming.

*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,r,choice;


    clrscr();

    do
    {
      printf("\nenter 2 nos");
      scanf("%d%d",&n1,&n2);

      printf("\nEnter 1 for Sum, 2 For Sub , Press 3 to exit");
      scanf("%d",&choice);
      if(choice==1)
      {
      r=n1+n2;
      printf("\nSum=%d",r);
      }
      else if(choice==2)
      {
	r=n1-n2;
	printf("\nSubtration is %d",r);
      }
      else if(choice==3)
      {
	  choice=0;

      }
      else
      {
	 printf("\nInvalid choice try again");
      }
    }while(choice>0);
}
/*
Increase Choices

enter 2 nos
66
33
***************************************************************

What you want to do?
			press...

			1. Sum
			2. Subtract
			3. Product
			4. Division
			5. Exit

			enter choice...3
*****************************************************************

1
1
2
3
5
8
13
21
...

Fibonacii Series
a	b 	c (a+b)
1	0       1
0	1 	1
1	1	2
1	2	3

int a=1, b=0, c;
do
{
  c=a+b;
  printf("\n%d",c);
  a=b;
  b=c;
}while(c<=100);

*/


