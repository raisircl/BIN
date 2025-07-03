/*
nested if else: when we use an if else into another if else
syntax:
if(condition)
{
  if(condition)
  {
    ...
  }
  else
  {
   ...
  }
}
else
{
  if(condition)
  {
    ...
  }
  else
  {
    ....
  }
}
enter age of a person and check eligibility for lic
criteria - age between 18 to 45
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    clrscr();
    printf("\nenter age of a person");
    scanf("%d",&age); //20, 55, 10
    if(age>=18) //20>=18=>T, 55>=18=>T, 10>=18=>F
    {
      if(age<=45)//20<=45=>T, 55<=45=>F
	{
	   printf("\nYou are eligible for LIC");
	}
      else
	{
	   printf("\nYou are not eligible for LIC");
	}
    }
    else
    {
       printf("\nYou are not eligible for LIC");
    }
getch();
}
/*
 enter 3 nos print which one is biggest

*/



