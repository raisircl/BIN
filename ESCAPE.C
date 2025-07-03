/*
Hello user welcome inc C
Aim - Escape Sequence Characters Introduction

Date - 20	Sep 2023
Place - SIRCL TECH

Break the printing sequence of characters
Hello

\n new line
\t tab  insert 8 characters gap between 2 words

\"  print " on the screen

\b move cursor one step back
\r move cursor at begning of line
\\  print backslash \ on screen
\\n print \n on the screen
*/

#include<stdio.h>
#include<conio.h>

int main()
{
  clrscr();
  printf("Hello\t\t\t\t\t\t\t\t\t    User");
  printf("\n\nWelcome in C\\n");

  getch();
  return 0;
}
/*
  screen 80 chars wide
  22 line

  1. print your name on all corners of a screen

  Garv									Garv




  Garv				 					Garv

  2. print following output
				*******
				*SIRCL*
				*******



print first program of C on the screen

#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  printf("\nHello User");
  printf("\nWelcome in C");
  getch();
}//end of program

* * * *    *******   **
*     *    *     *   **
* * * *    * *** *   **
*  *       *     *   **
*    *     *     *   **


A quick brown fox jumps high over a very little lazy dog.

*/

