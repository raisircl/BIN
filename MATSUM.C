/*
Sum of 2 matrix
*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3],b[3][3],c[3][3];
  int i,j;
  clrscr();
  printf("\nenter 1st 3x3 Matrix");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
     scanf("%d",&a[i][j]);
   }
  }
  printf("\nenter 2nd 3x3 Matrix");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
     scanf("%d",&b[i][j]);
   }
  }
  printf("\nSum of A and B matrix is \n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    c[i][j]=a[i][j]+b[i][j];
    printf("%d\t",c[i][j]);
   }
   printf("\n");
  }
  getch();
}