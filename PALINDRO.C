#include<stdio.h>
int main(){
  int num, temp, revnum=0;
  clrscr();
  printf("\nenter a number ");
  scanf("%d",&num);
  temp=num;
  while(num>0)
  {
   revnum=revnum*10+num%10;
   num=num/10;
  }
  if(temp==revnum)
  {
    printf("\n%d is palindrome",temp);
  }
  else
  {
    printf("\n%d is not palindrome",temp);
  }
  getch();}