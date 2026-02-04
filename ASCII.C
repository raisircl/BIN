int main()
{
  int i;
  clrscr();
  for(i=0;i<=255;i++)
  {
    printf("\n%c=%d",i,i);
    if(i%20==0)
    {
     printf("\npress any key ...");
     getch();

    }
  }
  getch();
}