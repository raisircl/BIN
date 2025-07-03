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
     printf("\nenter an element a[%d][%d]: ",i,j);
     scanf("%d",&a[i][j]);
    }
  }

  printf("\n Your matrix output is \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
     printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  getch();
}