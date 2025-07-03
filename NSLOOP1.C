#include<stdio.h>
#include<conio.h>
void main()
{
  int i, num;
  clrscr();
  printf("\nenter a number ");
  scanf("%d",&num);
  for(i=1;i<=10;i++)
  {
    printf("\n%3dx%2d=%2d",num,i,i*num);

  }
  getch();
}