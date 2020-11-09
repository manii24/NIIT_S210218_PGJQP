//WAP to check whether the eneterd no is even or odd
#include<iostream>
using namespace std;
class DecisionEx
{
    int num;
    public: void check_even_odd()
    {
        cout<<"Enter a number";
        cin>>num;
        if(num%2==0)
        {
         cout<<"Even";
        }
        else{
            cout<<"Odd";

        }
    }

};
int main()
{
    DecisionEx d1;
    d1.check_even_odd();

}
