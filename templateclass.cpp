#include<iostream>
using namespace std;

template<class T>
class Math
{
   T n1,n2;
   public:
   void input()
   {
    cout<<"\n enter 2 nos";
    cin>>n1>>n2;
   }
   void output()
   {
    cout<<"\n N1= "<<n1<<" N2="<<n2;
   }
   void sum()
   {
      cout<<"\n Sum is "<<n1+n2;
   }
   void div()
   {
    cout<<"\n Div is "<<n1/n2;
   }
};
int main()
{
    Math<int> m1;
    Math<double> m2;
    m1.input();
    m2.input();
    m1.output();
    m2.output();
}