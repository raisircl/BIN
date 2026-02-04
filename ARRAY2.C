/*
Array - 2nd data storage technique. 1st is variable.
Array can store more than one value of same type at a time.
Array Implementation Rule
1. Declare The Array
   Syntax: datatype arrayname[size];
   Example: int a[5]; // a has 5 element

   a 	   |   |   |   |   |   |
   index     0   1    2   3   4

   1st element at 0th position
   Last element at size-1 position

   index is used to access array element

2. Assignment: Put value into array element using index
   Syntax: a[index]=value;
   Example: a[0]=10;
	    a[1]=4;
	    a[2]=7;
	    a[3]=9;
	    a[4]=2;
   a     | 10 | 4 | 7 | 9 | 2 |
   index    0   1   2   3   4

3. Using:
   printf("\n%d",a[0]);
   printf("\n%d",a[1]);
   printf("\n%d",a[2]);
   printf("\n%d",a[3]);
   printf("\n%d",a[4]);

*/
#include<stdio.h>
int main()
{
   int a[5];
   int i;
   int big;
   int sum=0;
   for(i=0;i<5;i++)  // 0,1,2,3,4
   {
     printf("\nenter element %d: ",i+1);
     scanf("%d",&a[i]);
   }

   printf("\n Your Array elements are:");
   big=0;// let assume 0 is biggest element
   for(i=0;i<5;i++)
   {
     sum=sum+a[i];
     if(big<a[i])
     {
	big=a[i];
     }
     printf("\n%d",a[i]);
   }
   // print big
   printf("\nBiggest element is %d",big);
   printf("\nSum of array elements is %d",sum);
   return 0;
}
/*
enter 10 elements in array and print sum of its element.
enter 10 elements in array and print it in reverse order
enter 10 element in array and print biggest element
enter 10 elements in array and search an element

enter 5 elements in array print it in sorted order

| 5 | 3 | 1 | 7 | 2 |

*/