#include<stdio.h>
#include<conio.h>
#include<process.h>

void main()
{
  FILE *fptr;
  char ch;
  char pwd[20];
  int i=0;
  int x,y;
  clrscr();

  printf("\nenter the password...");
  while(1)
  {
    ch=getch();

    if(ch==13) // 13 is ascii value of enter
    {
       break;
    }
    pwd[i]=ch;
    i++;
    printf("*");

  }
  pwd[i]='\0';
  printf("\n password is %s \n",pwd);
  x=strcmp(pwd,"ram");
  y=strcmp(pwd,"Pram");
  //printf("\n X=%d",x);

  if(x==0 || y==0)
  {
   fptr=fopen("sum.c","r");

   if(fptr==NULL)
   {
    printf("\n File does not exist... Press any key to exit");
    getch();
    exit(1);
   }

   while(1)
   {
    ch=fgetc(fptr);

    if(ch==EOF)
    {
      break;
    }
    printf("%c",ch);
   }
  fclose(fptr);
 }
 else
 {
  printf("\nenter the correct pwd...");
 }
  getch();
}