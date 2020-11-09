//WAP to check greater of three no
#include<iostream>
using namespace std;
class GreaterEx
{
    int num1,num2,num3;
    public: check_Greater()
    {
        cout<<"Enter three no";
        cin>>num1>>num2>>num3;
        //num1=10, num2=20, num3=30
        //Dry Run :
        if(num1 > num2 && num1 > num3)
        {
            cout<<"num1 is greater";
        }
        else if(num2>num1 && num2> num3)
        {
            cout<<"num2 is greater";
        }
        else{

            cout<<"num3 is greater";
        }
    }
};
int main()
{
    GreaterEx g1;
    g1.check_Greater();
}
