#include<iostream.h>
#include<conio.h>
class BankAcc
{
  private:
   int accno;
   char accname[20];
   float accbal;
  public:
   void openacc()
   {
     cout<<"\nenter account number: ";
     cin>>accno;
     cout<<"\nenter account holder name: ";
     cin>>accname;
     cout<<"\nenter amount to open account: ";
     cin>>accbal;
   }
   void accinfo()
   {
     cout<<"\n Dear Customer your account details is following:";
     cout<<"\n Account Number: "<<accno;
     cout<<"\n Account Name: "<<accname;
     cout<<"\nAccount Balance: "<<accbal;
   }
   void deposit()
   {
     float amnt;
     cout<<"\nenter amount to deposit";
     cin>>amnt;
     accbal=accbal+amnt;
   }
   void withdraw()
   {
     float amnt;
     cout<<"\nenter amnount to withdraw";
     cin>>amnt;
     if(amnt<=accbal)
     {
       accbal=accbal-amnt;
     }
     else
     {
       cout<<"\nNot sufficient amount in your account";
     }
   }
   void getbal()
   {
     cout<<"\nAccount Balance is :"<<accbal;
   }
};

void main()
{
   BankAcc acc1;
   int choice;

   clrscr();
   acc1.openacc();
   do
   {
    clrscr();
    cout<<"\n--------------------------------------------------";
    cout<<"\nenter your choice";
    cout<<"\nPress 1 for Account Info";
    cout<<"\nPress 2 for Desposit";
    cout<<"\nPress 3 for Withdraw";
    cout<<"\nPress 4 for Account Bal";
    cout<<"\nPress 5 for Exit";
    cin>>choice;
    cout<<"\n--------------------------------------------------";

    switch(choice)
    {
     case 1:
      acc1.accinfo();
      break;
     case 2:
      acc1.deposit();
      cout<<"\nAfter deposit ";
      acc1.getbal();
      break;
     case 3:
      acc1.withdraw();
      cout<<"\nAfter withdraw ";
      acc1.getbal();
      break;
     case 4:
      acc1.getbal();
      break;
     case 5:
       choice=0;
       break;
     default:
      cout<<"\n Invalid choice try again...";
      break;
    }
    getch();
   }while(choice!=0);

}
