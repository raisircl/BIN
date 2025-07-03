/*
3x3 matrix right diognal
*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3],i,j;
  clrscr();
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
     printf("\nenter an element : ");
     scanf("%d",&a[i][j]);
    }
  }
  printf("\n Your matrix right diognal is \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
     if(i+j==2)
     printf("%d\t",a[i][j]);
     else
     printf("\t");
    }
    printf("\n");
  }
  getch();
}