/*
Function does not return and accept a value
Syntax:
void funname(datatype);
void main()
{

}
//Definition:
void funname(DT varname)
{

}
*/
#include<stdio.h>

void table(int);
int main()
{
  int num;
  printf("\nenter the number to print a table");
  scanf("%d",&num);
  table(num);
  return 0;
} 
void table(int num)
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("\n%d x %d = %d", num, i, num*i);
    }
}