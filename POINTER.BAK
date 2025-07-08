/*
pointer is a special variable which can hold an address of another variable

int x=10;      | 10 | 2020 (Address) - location number and 10 location value
		  x  location name

x will reserve a memory block of RAM that block has a number and that number
is know as address of variable so we can get a value of variable by its name
and as well as its adress also.

printf("\nX=%d",x); // 10

--if you want to get address of variable then prefix & (address of operator)
with variable name
syntax: &varname;

*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int x=10;
  int *ptr;  // pointer variable
  clrscr();
  printf("\nX=%d",x); // 10
  printf("\nAddress of X=%u",&x); //& address of operator
  //if you know the address then how you can get value on that address
  //Ans. We use Value At Address operator to get address (*)
  printf("\nX=%d",*(&x));

  //pointer variable -
  // it is a special variable that can hold address of another variable
  ptr=&x; //address of x stored into ptr
  // ptr |65524| address of x

  printf("\nAddress of X=%u",ptr);// xxxx
  printf("\nValue of X=%d",*ptr); //

  *ptr=100;
  printf("\nValue of X=%d",x); //100
  getch();

}
