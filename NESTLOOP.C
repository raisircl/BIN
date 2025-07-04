/*
Nested Loop - when we use a loop inside another loop then it is called nested
	      loop.
Syntax --    <----
 for( 1 ;  2   ; 9 )<-------------   A
  {           - true come in loop-
     ---- 3 <--                  -
     ----      <----             -
     for( 4  ; 5 ; 7 )<------    -   B
     {         -            -    -
       ---- 6 <-            -    -
       -----                -    -
     }  ---------------------    -
     ---- 8                      -
     ----                        -
  } ------------------------------


*/

#include<stdio.h>

int main()
{
  int i,j;
  clrscr();
  for(i=1;i<=5;i++) //A
  {
     for(j=1;j<=i;j++)  //B
     {
	 printf("*");
     }
     printf("\n");
  }
  getch();
 return 0;

}
/*
     Dry Run

i   i<=3   j        j<=2     Print
1    T     1,2,3    T,T,F      **
2    T	   1,2,3    T,T,F      **
3    T     1,2,3    T,T,F      **
4    T     1,2,3    T,T,F      **         _
5    T     1,2,3    T,T,F      **
6    F
-----------------------------------------------
*/

/*

Assignments

*
**
***
****
*****

1
12
123
1234
12345

1
22
333
4444
55555

1
21
321
4321
54321

5
54
543
5432
54321

5
44
333
2222
11111

1
23
456
78910

*****
****
***
**
*

----*
---*-*
--*-*-*
-*-*-*-*
*-*-*-*-*

----1
---121
--12321
-1234321
123454321

*/
