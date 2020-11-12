#include<iostream>
using namespace std;
int global=30;//global/File  scope : It will be accessible to any class within that application
class Scope
{
    int num=15;//class scope : Any method defined within a class can access this variable
  public:  void check()
    {
        int local=60;//local scope : can be accessed within that method only, You cant access it in another method
        cout<<num<<endl<<local<<endl
    }
    void check1()
    {
        cout<<num<<endl<<global;
    }
};
class Scope1
{
    public : void check2()
    {
        cout<<"In check2 \t "<<global;
    }
};
int main()
{
    Scope s1;
    s1.check();
    s1.check1();
    Scope1 s2;
    s2.check2();
}
