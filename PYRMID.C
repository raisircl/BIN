#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k;
  clrscr();
  for(i=1;i<=22;i++)
  {
    for(j=22;j>i;j--)
    {
      printf(" ");
    }
    printf("*");
    for(k=1;k<i;k++)
    {
     printf(" *");
    }
    printf("\n");
  }
  getch();
}
/*

----*
---*-*
--*-*-*
-*-*-*-*
*-*-*-*-*

----1
---121
--12321
-1234321
123454321
*/