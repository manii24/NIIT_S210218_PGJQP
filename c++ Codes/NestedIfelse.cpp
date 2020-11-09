//WAP to find the greater of 3 numbers
//We need 3 number from user
#include<iostream>
using namespace std;
class Greater
{
    int num1,num2,num3;

    public: void find_Greater()
    {

        if(num1>num2)
        {
            if(num1>num3)
            {
                cout<<"num1 is greater";
            }
            else
            {
                cout<<"num3 is greater";
            }
        }
        else
        {
            if(num2>num3)
            {
                cout<<"num2 is greater";
            }
            else{

                cout<<"num3 is greater";
            }
        }

    }
    void accept()
    {
        cout<<"Enter 3 numbers";
        cin>>num1>>num2>>num3;
    }


};
int main()
{
    Greater g1;
    g1.accept();
    g1.find_Greater();

}
