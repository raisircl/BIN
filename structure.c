/*
Structure - Third Data Storage Technique. It can store more than one value of different
types at a time. It is also known as user defined data type.

Implementation Rule:
1. Create the structure (your own datatype)
2. Create a structure variable to store the data

Syntax:
struct structure_name
{
    DT varname;
    DT varname;
    ...
};

*/
#include<STDIO.H>
struct Book
{
    char name[20];
    float price;
    int year;
};
int main()
{
    struct Book b1={"Let us C",485.20,2009};
    struct  Book b2;
    printf("\nEnter name price and pub year of the book.");
    scanf("%s%f%d",b2.name,&b2.price,&b2.year);
    printf("\nYour Books Details\n");
    printf("\nBook Name\t\tPrice\t\tYear");
    printf("\n%s\t\t%.2f\t\t%d",b1.name,b1.price,b1.year);
    printf("\n%s\t\t%.2f\t\t%d",b2.name,b2.price,b2.year);
    return 0;
    
       
}