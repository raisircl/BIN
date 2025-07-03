#include<iostream.h>
#include<conio.h>
void main()
{
    //int a[3][3]={ {1,2,3}, {4,5,6}, {7,8,9} };
    int a[3][3],i,j;
    clrscr();
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
       cout<<"\nenter element:";
       cin>>a[i][j];
     }
    }
    cout<<"\nyour array element are: \n";
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
       //i==j
       cout<<a[i][j]<<"\t";
      }
      cout<<endl;
    }
    getch();
}
/*
Transpose of 3x3 matrix
Print left diognal => i==j
Print Right Diognal => i+j==2
Print Lower Triangle
Print Upper Triangle
Sum of 2 Matrix
Product of 2 Matrix
*/