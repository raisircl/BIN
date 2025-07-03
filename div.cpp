#include<iostream>
using namespace std;
int main()
{
    int n1,n2,r;
    cout<<"\n enter 2 nos";
    cin>>n1>>n2;
    try
    {
      r=n1/n2;
      cout<<"\n Div is "<<r;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}