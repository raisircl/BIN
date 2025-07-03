/*
3x3 matrix left diognal.
*/
#include<stdio.h>
int main()
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
  printf("\n Your matrix left diognal is \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
     if(i==j)
     printf("%d\t",a[j][i]);
     else
     printf("\t");
    }
    printf("\n");
  }
  getch();
  return 0;
}