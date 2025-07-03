/*
5+2
Logical Operator
combine 2 or more than 2 relations give result either true or false
 R1     R2
9>6 && 7<9
 1  && 1
    1
&& Logical And gives true when all conditions goes to true

R1	R2	Result
1	1	1
1	0	0
0	1	0
0	0	0
---------------------------
5>6 || 7<9
 0  ||  1
     1
|| Logical Or it gives true when anyone condition goes to true
R1	R2	Result
1	1	1
1	0	1
0	1	1
0	0	0


! Logical Not

Condition       Result
1		0
0		1
      !(5<3)=>1
	 !0 =>1


*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int age;
   clrscr();
   printf("\nenter age of a person");
   scanf("%d",&age);

   if(age>=18 && age<=45)
   {
	printf("\n Eligible for LIC");
   }
   else
   {
	printf("\nNot Eligible for LIC");
   }
   getch();
}

/*

Biggest between 3 Nos  using logical operator and if -  else if - else

h,e,m,sci,sst then clac =>total, per

 print divsion

>=80 merit
>=60 1st
>=50 2nd
>=40 3rd
else fail

*/



