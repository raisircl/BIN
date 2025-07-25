/*
Aim : Factorial of a given number using recursion
*/
#include<STDIO.H>
int fact(int);
int main()
{
    int num, f;
    printf("\nenter a number");
    scanf("%d",&num); // 3, 5
    f=fact(num);// 6
    printf("\nThe factorial of %d is %d",num,f);
    return 0;
}
int fact(int x) // 3
{
    if(x==1) //false ,
    {
	return 1;
    }
    else
    {
	return x*fact(x-1); // 3*2
    }
}
/*
int fact(int x) // 2
{
    if(x==1) //false ,
    {
	return 1;
    }
    else
    {
	return x*fact(x-1); // 2*1
    }
}

int fact(int x) // 1
{
    if(x==1) //true ,
    {
	return 1;
    }
    else
    {
	return x*fact(x-1); // 3*fact(2)
    }
}
*/
/*
enter a number and print sum of all natural nos upto it using recursion
10

1+2+3+4+5+6+7+8+9+10=55

*/