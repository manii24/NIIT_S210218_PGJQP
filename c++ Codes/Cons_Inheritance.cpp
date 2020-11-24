#include<iostream>
using namespace std;
class Parent
{
    public: Parent()
    {

        cout<<"Parent class Constructor"<<endl;

    }
    ~Parent()
    {
        cout<<"Parent class destrcutor"<<endl;
    }
};
class Derived : public Parent{
public : Derived()
{
    cout<<"Derived class constructor"<<endl;
}
~Derived()
{
    cout<<"Derived class destructor";
}
};
int main()
{
    Derived obj;
}
