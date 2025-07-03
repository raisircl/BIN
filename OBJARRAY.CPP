/*

*/
#include<iostream>
using namespace std;

class Rect
{
   private:
    int l,b;
   public:
    void input()
    {
      cout<<"\nenter Len and Bre of Rect";
      cin>>l>>b;
    }
    void output()
    {
     cout<<"\n Rect dimesion is "<<l<<"x"<<b;
    }
    int Area()
    {
     return l*b;
    }
};
int main()
{
  Rect r[3]; // Array of Rect Object
  int i;
  clrscr();
  for(i=0;i<3;i++)
  {
    cout<<"\n enter Rect"<<i+1<<" object Len and Bre";
    r[i].input();
  }
  cout<<"\n Output is ";
  for(i=0;i<3;i++)
  {

    r[i].output();
  }
  
}
/*
Box  L, B, H
input()
output()
area ()
vol()

Student
rollno, name, H, E, M , SCI, SST, Total, Per

input

output

5 students data input and display

*/