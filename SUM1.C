#include<stdio.h>
#include<conio.h>
int main()
{
   float n1,n2,t; // variable - used to store data
   clrscr();// clrscr is a function used to clear the screen
   n1=100.88; // assignment - put value into variable
   n2=200.99;
   t=n1+n2;
   printf("\nThe sum is %f",t);
   getch();
}
/*
format specifiers

%d - int  6,8,90
%c - char 'A', '#', '9'
%f - float 88.99, 86.99, -9.7

sum of 3 numbers +
div of 2 nos     /   5/2.0=>2.5
product of 2 nos  *  5*2=>10
subtract of 2 nos -  5-2=3
modulas of 2 nos  %  5%2=>1
*/