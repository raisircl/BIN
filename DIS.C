/*
enter MRP of Book give 10% discount then print net price
*/
#include<stdio.h>
#include<conio.h>
void main()
{
   float mrp,dis=0,net;
   clrscr();

   printf("\nenter MRP of book");
   scanf("%f",&mrp);

   dis=mrp*10/100;

   net=mrp-dis;

   printf("\nMRP=%.2f\nDis=%.2f\nNet=%.2f",mrp,dis,net);

   getch();
}
