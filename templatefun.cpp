#include<iostream>
using namespace std;

template<typename T>
T sum(T n1, T n2)
{
   T r;
   r=n1+n2;
   return r;
}
int main()
{
    int x=sum<int>(4,2);
    cout<<"\n The sum is "<<x;
    
    double y=sum<double>(6.66,7.22);
    cout<<"\n The sum is "<<y;

}