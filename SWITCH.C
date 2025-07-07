/*
switch case -
1. it is a case control instruction
2. it is used as alternate of if-else if-else
3. it is just used to check equality
Syntax -

switch(choice)
{
  case constant:
    .....
    ....
    break;
  case constant:
    .....
    ...
    ...
    break;

  [...]

  default:
    ....
    ....
    break;

}
Point to be remember:

1. constant value can be an int or char
2. float can not be a constant
3. case can not be duplicate
4. break is optional
5. absense of break cause execution of next case.
6. when all case failed then default will work
7. default is also optional like else in if else
*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int day;
   clrscr();
   printf("\nenter day of the week");
   scanf("%d",&day);

   switch(day)
   {
     case 1:
      printf("\nMonday");
      break;
     case 2:
      printf("\nTuesday");
      break;
     case 3:
      printf("\nWednesday");
      break;
     case 4:
      printf("\nThursday");
      break;
     case 5:
      printf("\nFriday");
      break;
     case 6:
      printf("\nSaturday");
      break;
     case 7:
      printf("\nSunday");
      break;
     default:
      printf("\n Invalid Input - Day should be 1-7");
      break;
   }
   getch();
}
/*
1. enter a digit and print it in word. 0 Zero, 1 One
2. enter a char and check is it vowel or consonant

'A' 'a'
case 'a':

char ch;

input scanf("%c",&ch);

ch=ch>=65&&ch<=90 ? ch+32 : ch;
// ASCII  A - 65 a 97  ch='A'; ch=ch+32; printf("%c",ch); output a
switch(choice)
{
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  printf("\nvowel");
  break;

  default:
  printf("\nconsonant");
  break;
}
getch();

*/