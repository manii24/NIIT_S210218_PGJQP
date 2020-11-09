#include<iostream>
using namespace std;
class SwitchCaseEx
{
    //WAP to display the days of the week
    int choice;
    public : void display()
    {
      cout<<"Enter your choice 1. Sun 2. Mon 3. Tues";
      cin>>choice;
        switch(choice)
        {
           case 1: cout<<"Sunday";
           case 2:cout<<"Monday";break;
           default : cout<<"Invalid choice";


        }
    }
      void Calculator()
      {
          cout<<" 1. Adddition 2. Subtraction 3. Multiplication  ";
          cin>>choice;
          int num1,num2;
          cout<<"Enter two numbers";
          cin>>num1>>num2;
          switch(choice)
          {
              case 1: int result;
                      result=num1+num2;
                       cout<<result;break;
              case 2:cout<<num1-num2;break;
              default: cout<<"Invalid choice";
          }
      }
};
int main()
{
    SwitchCaseEx obj1;
    //obj1.display();
    obj1.Calculator();


}
