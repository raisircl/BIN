/*
Storage Classes in  C
Storage Class
auto
static
register
extern
by default when we declare a variable belong to auto storage class
static int x;
Storage Class   Location    Default Value   Scope           life
auto            RAM         Garbage         inside block    inside block
static          RAM         0               inside block    untill end of program
register      CPU Register  garbage         inside block    inside block
extern          RAM         0               Global          untill end of program

*/
#include<STDIO.H>
void msg();
int main()
{
    msg();
    msg();
    msg();
}
void msg()
{
    static int x=1; 
    printf("\nX=%d",x);
    x++;
}
/*
X=1
X=1
X=1
Static variable preserve itsself last value in multiple function call

*/


