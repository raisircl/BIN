/*
pointer is a special variable which can hold an address of another variable

int x=10;      | 10 | 2020 (Address) - location number and 10 location value
		  x  location name

when we run the program 0-65535 locations reserve for a program
x    location name
10   location value
2020 location number (pointer or address)

x will reserve a memory block of RAM that block has a number and that number
is know as address of variable so we can get a value of variable by its name
and as well as its adress also.

printf("\nX=%d",x); // 10 - this a way to get a value of variable by its name

Q. How we can get value of x by its address?
Ans. For this we need to know x's address first.

Now if you want to get address of variable then prefix
& (address of operator) with variable name
syntax: &varname;
so printf("\nAddress of x=%u",&x); //%u used to print unsigned int values

int range is  32767 max -32768 min

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

  printf("\nX=%d",*(&x)); // *2020=>10

  //pointer variable -
  // it is a special variable that can hold address of another variable
  ptr=&x; //address of x stored into ptr
  // ptr |2020| address of x

  printf("\nAddress of X=%u",ptr);// 2020
  printf("\nValue of X=%d",*ptr); //10

  *ptr=100;
  printf("\nValue of X=%d",x); //100
  getch();

}
