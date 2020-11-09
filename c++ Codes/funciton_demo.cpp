#include<iostream>
using namespace std;
class Func_Test
{
    int num;
    //Increment the no by 1
    public : int inc(int x,int y) //a is parameter of int type
    {

    return x+y;
    }
};
int main()
{
    Func_Test f1;
    int num1,num2;
    cout<<"Enter two numbers";
    cin>>num1>>num2;
    cout<<f1.inc(num1,num2);//calling code..Argument

}
