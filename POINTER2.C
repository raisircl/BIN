int main()
{
   int i,a[]={1,2,4,6,3};
   int *p[5];
   clrscr();
   p[0]=a;
   p[1]=a+1;
   p[2]=a+2;
   p[3]=a+3;
   p[4]=a+4;

   printf("\np=%u",**p);

   getch();
}