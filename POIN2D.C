#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3]={{1,1,1},{2,7,2},{3,3,3}};
  clrscr();
  printf("\n Base address %u",a);
  printf("\n Base address of 1st 1d array %u",a+0);
  printf("\n Base address of 2nd 1d array %u",*(*(a+1)+1) );
  printf("\n Base address of 3rd 1d array %u",2[a]);


  getch();
}
