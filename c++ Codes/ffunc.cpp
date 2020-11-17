#include<iostream>
using namespace std;
class  base
{
    int val1,val2;
   public:
    void get()
    {
       cout<<"Enter two values:";
       cin>>val1>>val2;//11..12
    }
    friend float mean(base b);//friend function
};
float mean(base b)
{
   return float(b.val1+b.val2)/2;
}
int main()
{

    base obj;//obj is the object for class base
    obj.get();//through obj, we are invoking method get
    cout<<"\n Mean value is : "<<mean(obj);

}
