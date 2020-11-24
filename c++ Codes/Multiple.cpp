#include<iostream>
using namespace std;
class A
{
    public : void display()
    {
        cout<<"Parent class A";
    };
};
class B
{
   public : void display()
   {
       cout<<"Parent class B";
   } ;
};
class C : public A, public B  //multiple inheritance
{


};
int main()
{
    C obj;
 //   obj.display();
    obj.B::display();//removing ambiguity in Multiple Inheritance
   // obj.display1();
}
