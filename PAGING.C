#include<stdio.h>
#include<conio.h>
void main()
{
  int i;
  clrscr();
  for(i=1;i<=200;i++)
  {
    printf("\n%d",i);
    if(i%22==0)
    {
       printf("\nPress any key...");
       getch();

    }
  }

}