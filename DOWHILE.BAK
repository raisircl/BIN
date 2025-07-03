/*
do-while

 1. Unknown Loop
 2. Condition Control
 3. Exit Control
 4. Also known as Odd Loop

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
#include<graphics.h>
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
*/


