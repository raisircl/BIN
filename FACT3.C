#include<stdio.h>
#include<conio.h>

int fact(int);

int big(int,int);

void main()
{
  int num, f, b;
  clrscr();
  printf("\nenter a number");
  scanf("%d",&num);   // 3
  f=fact(num); //3

  printf("\nFactorial of %d is %d",num,f);

  b=big(10,20);

  printf("\nBiggest number is %d",b);

  getch();
}
int fact(int n)  //3
{
  int i,x=1;
  for(i=1;i<=n;i++) // i<=3
  {
    x=x*i;
  }
  return x;
}
int big(int n1,int n2)
{

  return n1>n2 ? n1 : n2;

}