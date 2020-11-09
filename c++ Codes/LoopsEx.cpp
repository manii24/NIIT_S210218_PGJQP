#include<iostream>
using namespace std;
class LoopEx
{
    int counter=2;
    public : void display()
    {
        for(;counter<20;counter=counter*2)
        {
             cout<<counter;
        }

    };
};
int main()
{
    LoopEx l1;
    l1.display();
}
