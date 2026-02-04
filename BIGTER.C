#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,d;
  clrscr();
  printf("\nenter 3 nos ");
  scanf("%d%d%d",&a,&b,&c);
  d= a>b ? (a>c?a:c) : (b>c?b:c);
  printf("\nBiggest Number is %d",d);
  getch();
}