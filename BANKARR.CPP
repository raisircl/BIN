#include<iostream.h>
#include<conio.h>
class BankAcc
{
  private:
   static int accgen;
   int accno;
   char accname[20];
   float accbal;
  public:
   BankAcc()
   {
      accno=accgen;
      accgen++;
   }
   void openacc()
   {
     //cout<<"\nenter account number: ";
     //cin>>accno;
     cout<<"\nAcc no is :"<<accno;
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
   int getaccno()
   {
    return accno;
   }
};
int BankAcc::accgen=101;
//Array of objects
void main()
{
   BankAcc acc[5]; // we deal with 5 accounts
   int choice,accno;
   int lac=0; // last account count  it should be <5 then we open the account
   clrscr();
   do
   {
    clrscr();

    CHOICES:
    cout<<"\n--------------------------------------------------";
    cout<<"\nenter your choice";
    cout<<"\nPress 0 for Open Account";
    cout<<"\nPress 1 for Account Info";
    cout<<"\nPress 2 for Desposit";
    cout<<"\nPress 3 for Withdraw";
    cout<<"\nPress 4 for Account Bal";
    cout<<"\nPress 5 for Exit";
    cin>>choice;
    cout<<"\n--------------------------------------------------";

    BankAcc fac; //find account number

    if(choice==1||choice==2||choice==3||choice==4)
    {
      int i,isfound=0;
      cout<<"\nenter your account number";
      cin>>accno;
      for(i=0;i<lac;i++)
      {
	 if(acc[i].getaccno()==accno)
	 {
	   fac=acc[i];
	   isfound=1;
	   break;
	 }
      }
      if(isfound==0)
      {
	cout<<"\nYour account not exist in this bank...";
	goto CHOICES;
      }
    }


    switch(choice)
    {
     case 0:
	if(lac<5)
	{
	  acc[lac].openacc();
	  lac++;
	}
	else
	{
	 cout<<"\n No More account can open now...";
	}
	break;
     case 1:

      fac.accinfo();
      break;
     case 2:
      fac.deposit();
      cout<<"\nAfter deposit ";
      fac.getbal();
      break;
     case 3:
      fac.withdraw();
      cout<<"\nAfter withdraw ";
      fac.getbal();
      break;
     case 4:
      fac.getbal();
      break;
     case 5:
       choice=7;
       break;
     default:
      cout<<"\n Invalid choice try again...";
      break;
    }
    getch();
   }while(choice!=7);

}
