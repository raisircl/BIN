/*
Result sheet
*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int result[2][7];
  int i,j,total;
  clrscr();
  for(i=0;i<2;i++)
  {
    printf("\nenter Rollno , Hindi, Eng Math sci sst marks");
    total=0;
    for(j=0;j<6;j++)
    {
      scanf("%d",&result[i][j]);
      if(j>0)
      {
	 total=total+result[i][j];
      }
     } // end of j loop
    result[i][j]=total;
  }
  printf("\nResult sheet");
  printf("\nRNo\tHindi\tEng\tMath\tSci\tSST\tTotal\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<7;j++)
    {
      printf("%d\t",result[i][j]);
    }
    printf("\n");
  }
  getch();
}