/*
if - else if - else

if(condition)
{
 .....
}
else if(condition)
{
  .....
}
else if(condition)
{
  ....
}
else
{
  ...
}
enter day of the week and print name of the day
*/
#include<stdio.h>

int main()
{
  int day;
  clrscr();
  printf("\nenter day of the week");
  scanf("%d",&day);
  if(day==1)
  {
    printf("\n Monday");
  }
  else if(day==2)
  {
    printf("\n Tuesday");
  }
  else if(day==3)
  {
   printf("\nWedness day");
  }
  else if(day==4)
  {
    printf("\n Thursday");
  }
  else
  {
    printf("\n Invalid Input try again");
  }
  getch();
}
/*
enter a digit 0 - 9 print it in word
0 Zero
1 One
2 Two
3 Three
4 Four

Biggest between 3 nos

logical and &&

if(a>b&&a>c)
{

}
else if(b>c && b>a)
{

}
else if(c>a && c>b)
{

}
else
{

}

*/
