#include<iostream>
using namespace std;
class dowhileEx
{
    int choice, num1,num2;
    char ch;
    public : void calculator()
    {
        do
        {
            cout<<"Enter your choice. 1. Addition 2. Subtraction 3. Multiplication 4. Division \n";
            cin>>choice;
            cout<<"Enter two numbers";
            cin>>num1>>num2;
            switch(choice)
            {
                case 1: cout<<num1+num2;break;
                case 2: cout<<num1-num2;break;
                default : cout<<"Invalid choice";
            }
            cout<<"\n  Do you want to continue? Y/N";
            cin>>ch;//y
        }while(ch=='y' || ch=='Y');
    }

};
int main()
{
    dowhileEx obj1;
    obj1.calculator();

}
