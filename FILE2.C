#include<stdio.h>
#include<conio.h>
void main()
{

  FILE *fp;
  char ch;
  clrscr();
  fp=fopen("P1.C","r");
  while(1)
  {
     ch=fgetc(fp);
     if(ch==EOF)
     {
       break;
     }
     printf("%c",ch);
  }
  fclose(fp);
  getch();
}