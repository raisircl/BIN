/*
Factorial of given number using function
Syntax:
RT funname(DT,DT...);
void main()
{

}
RT funname(DT var, DT var)
{
    ....
    ...
    return value;
}

*/
#include<stdio.h>

int fact(int);
int main()
{
    int x, y;
    printf("\nenter a number to get its factorial");
    scanf("%d",&x);
    y=fact(x);
    printf("\n Factorial of %d is %d",x,y);
    return 0; 
}
int fact(int num)
{
    int i,f=1;
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    return f;
}