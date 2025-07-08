/*
Recursion - When a function call itself then that function is known as
	         recursive function and process is known as recursion
*/
#include<stdio.h>

int x=0;  // global

int main()
{

   printf("\nHello");
   if(x<10)
   {
     x++;
     main(); //recursion
   }
   return 0;
}
