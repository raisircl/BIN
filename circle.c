/*
Area of a circle
syntax:
RT funname();
int main()
{

}
RT funname()
{
    .....
    return value;
}
*/
#include<stdio.h>

float getpi();
int main()
{
    float r, a;
    printf("\n enter Radius of a circle");
    scanf("%f",&r);
    a=getpi()*r*r;
    printf("\nArea of a circle is %.2f",a);
    return 0;
}
float getpi()
{
    return 3.14;
}