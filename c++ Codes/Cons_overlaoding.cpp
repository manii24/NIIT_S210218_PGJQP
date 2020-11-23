#include<iostream>
using namespace std;
class Calc
{
    public : Calc()
    {
cout<<"Constructor without parameter";
    }
    Calc(int a)
    {
 cout<<a;
    }
    Calc(char ch)
    {
        cout<<"In char "<<ch;
    }
    Calc(int a, char ch)
    {
        cout<<"Int char";
    }
    Calc(char a, int y)
    {
    cout<<"Char Int";
    }
};
int main()
{
    Calc c1(20,'e');
  /* Calc c1;
   Calc c2(10);
   Calc c3('t');*/
}
