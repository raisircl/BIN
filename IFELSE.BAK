/*
Decision Control Instructions -
As we know a program is a solution of problem and a problem can not solve
without decision so to take decision in c programs there are following
decision control instructions

1. if-else

syntax-

if(condition)
{
  ..... if condition goes to true then this block executes
}
else
{
 .... if condition goes to false then this else block executes
}

condition 	if block	else block
true		work		not work
false		not work	work

Note - else block always optional

*/
/*
enter mrp of book give 10% discount if mrp>=500 otherwise give 5% discount
after discount print net price
*/
#include<stdio.h>
#include<conio.h>
void main()
{
   float mrp,dis=0,net;
   clrscr();
   printf("\nenter mrp of book");
   scanf("%f",&mrp); //600, 200

   if(mrp>=500) // 600>=500=>true, 200>=500=>false
   {
     dis=mrp*10/100; // dis=600*10/100 =>60
   }
   else
   {
     dis=mrp*5/100; // dis=200*5/100=>10
   }
   net=mrp-dis; // 600-60=>540, 200-10=>190
   printf("\nMRP=%.2f\nDis=%.2f\nNet=%.2f",mrp,dis,net);
   getch();
}
/*
1. enter 2 nos and print which one is biggest
2. enter sale price and cost price of book print profit or loss
*/