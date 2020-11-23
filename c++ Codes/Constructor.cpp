#include<iostream>
using namespace std;
class Calculator
{

    int num1,num2;
    public: Calculator()
    {
       num1=0;
       num2=0;
       cout<<"Welcome";
    }
    public: Calculator(int num)//parameterized constructor
    {
     cout<<num;
    }
    void sum()
    {
        //code
    }
    ~Calculator()
    {
        cout<<"Destructor invoked";
    }
};
int main()
{
   Calculator c1;//Constructor
    Calculator c2,c3;
    Calculator c1(10);

}
