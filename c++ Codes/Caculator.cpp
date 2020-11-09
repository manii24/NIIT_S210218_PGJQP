#include<iostream>//cin, cout
using namespace std;

class Calculator
{
    //member variable, they are representing the state, attributes /properties of an object
  int num1,num2, result ;
  public : void add() //member function or method , they depict the behaviour of object
  {
     cout<< "Enter first number";
     //cin is used to accept the value from the user
     cin>>num1;
     cout<<"Enter second number";
     cin>>num2;
     result=num1+num2;
     cout<<"Result is : \t "<<result<<"\n" ;
  }
  void sub()
  {
     cout<< "Enter two  number";
     //cin is used to accept the value from the user
     cin>>num1>>num2;
    result=num1-num2;
     cout<<"Result is :"<<result<<endl ;
  }
};
int main()
{
Calculator c1;//c1 is the object for class calculator
cout<<"Program starts \n";
c1.add();
c1.add();
c1.sub();
Calculator c2;
c2.add();
cout<<"Program ends ";
}
