#include<IOSTREAM>
using namespace std;
class Demo
{
    public:
    void msg()
    {
        cout<<"\n Welcome to Inline function";
        cout<<"\nWhen we define a function inside the class it is called inline function";
    }
    //Non Inline - declare a function inside the class and define a function outside the class
    void fun(); // declare

};
// define the function outside the class
void Demo::fun()
{
    cout<<"\n Fun function is non inline function";
}
int main()
{
    Demo d1;
    d1.msg(); // inline function calling
    // when we call the inline function then body of function inserted at calling place
    d1.fun(); // non inline function
    //when we call the non inline function the control goes to called  function and after work it come back to calling function

    // inline function expension of code not allowed 
}