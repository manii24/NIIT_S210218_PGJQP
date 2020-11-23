#include<iostream>
using namespace std;
class function_overloading
{
public: void sum()
{

}
int sum()
{

}
void sum(int a)
{
    cout<<++a;

}
void sum(int a, int b)
{
cout<<a+b;
}
void sum(float a, float b)
{
    cout<<a+b;

}
};
int main()
{
function_overloading obj;
obj.sum();
obj.sum(1);
obj.sum(23,44);

}
