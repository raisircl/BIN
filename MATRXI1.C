/*
Matrix - 2d array. It is used to store data in form of rows and columns.

syntax:

datatype matrix_name[rows][cols];
     0    1   2
0   12    6  10
1    7    8   5
2    5    3   3
eg.

 int a[3][3];

     0      1       2
0   0,0    0,1     0,2
1   1,0    1,1     1,2
2   2,0    2,1     2,2

printf("%d",a[0][0]); // 1
a[0][0]=12;
a[0][2]=10;
*/

#include<stdio.h>


int main()
{
  int a[3][3],i,j;

  for(i=0;i<3;i++) // 0,1,2, (3) stop
  {
    for(j=0;j<3;j++) //0=>0,1,2 (3), 1=>0,1,2 (3), 2=>0,1,2 (3)
    {
      printf("\nenter an element:");
      scanf("%d",&a[i][j]);// 1,2,3, 4,5,6, 7,8,9
    }
  }
  printf("\nyour matrix output is \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
 getch();
 return 0;
}