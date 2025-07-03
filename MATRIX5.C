/*
3x3 matrix lower triangle
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
  printf("\n Your matrix lower triangle is \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<=i;j++)
    {

     printf("%d\t",a[j][i]);

    }
    printf("\n");
  }
  getch();
}
/*
1. Upper Triangle
2. sum of 2 matrix
3. product of 2 matrix
*/