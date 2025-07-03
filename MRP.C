#include<stdio.h>
#include<conio.h>
void main()
{
  float mrp,dis,net;
  clrscr();
  printf("\nenter mrp of book");
  scanf("%f",&mrp);
  dis=mrp*(10.0/100); //int/int=>int
  net=mrp-dis;
  printf("\nMRP=%f\nDis=%f\nNet=%f",mrp,dis,net);
  getch();
}