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
typedef struct Book B;
int main()
{
    struct Book b[3];
    B hpb; 
    int i;
    for(i=0;i<3;i++)
    {
        printf("\nEnter name price and pub year of the book%d:",i+1);
        scanf("%s%f%d",b[i].name,&b[i].price,&b[i].year);
    }
    hpb=b[0];
    printf("\nYour Books Details\n");
    printf("\nBook Name\tPrice\t\tYear");
    for(i=0;i<3;i++)
    {
        
        printf("\n%s\t\t%.2f\t\t%d",b[i].name,b[i].price,b[i].year);
        if(hpb.price<b[i].price)
        {
            hpb=b[i];
        }
        
    }
        printf("\nHigest Price Book Detail");
        printf("\n%s\t\t%.2f\t\t%d",hpb.name,hpb.price,hpb.year);
    
    return 0;
    
       
}