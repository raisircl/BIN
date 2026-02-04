#include<iostream.h>
#include<conio.h>

class BankAcc
{
  private:
   int accno;
   char accname[20];
   int bal;

  public:
   void openacc()
   {
     cout<<"\n enter accno accname and amount to open acc";
     cin>>accno>>accname>>bal;
   }
   void accinfo()
   {
    cout<<"\n Your Acc Detail is :\n";
    cout<<"\nAccNo: "<< accno;
    cout<<"\nAccName: "<<accname;
    cout<<"\nBalance: "<<bal;
   }
   void deposit()
   {
     int amnt;
     cout<<"\nenter the amount to deposit";
     cin>>amnt;
     bal=bal+amnt;
     cout<<"\n After deposit your balance is "<<bal;
   }
   void withdraw()
   {
     int amnt;
     cout<<"\nenter amount to withdraw";
     cin>>amnt;
     if(amnt<=bal)
     {
       bal=bal-amnt;
       cout<<"\nAfter withdrawl your balance is "<<bal;
     }

     else
     {
       cout<<"\nInsufficent balance in your acc. the balance is"<<bal;
     }
   }
   int getbal()
   {
      return bal;
   }
   int getaccno()
   {
    return accno;
   }
};

void main()
{
  BankAcc b[3]; // array of objects
  int i,choice;
  clrscr();

  for(i=0;i<3;i++)
  {
  cout<<"\n enter the details to open account"<<i+1;
  b[i].openacc();
  }

  do
  {

   cout<<"\n Press 1 for deposit \n Press 2 to Withdraw\n Press 3 to Acc Info\n Press 4 for exit";
   cin>>choice;
   if(choice==4)
   {
    choice=0;
    break;
   }
   int accno;
   cout<<"\n enter the accno";
   cin>>accno;
   //search the account
   BankAcc b1; // we search and store the account detail into b1
   int isfound=0;
   for(i=0;i<3;i++)
   {
    if(b[i].getaccno()==accno)
    {
     isfound=1;
     switch(choice)
     {
     case 1:
     b[i].deposit();
     break;
     case 2:
     b[i].withdraw();
     break;
     case 3:
     b[i].accinfo();
     break;
     default:
     cout<<"\n Invalid choice Try again";
     break;
    }// end of switch case inside if
    }//if closed

   }// for loop end
   if(isfound==0)
   {
     cout<<"\n Acc Not found";
   }
  }while(choice!=0);

}


