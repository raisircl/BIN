#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("\nenter 3 nos");
  scanf("%d%d%d",&a,&b,&c);
  a>b ? (a>c ? printf("\nA Big") : printf("\nC is big")):(b>c?printf("\nB big"):printf("\nC big"));


  getch();
}