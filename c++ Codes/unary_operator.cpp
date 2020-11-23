#include <iostream>
using namespace std;
class minus1
{
  int d1,d2,d3;
  public:
  minus1()
  {d1=d2=d3=0;}
  minus1(int a,int b,int c)
  {
   d1=a;//2
   d2=b;//-4
   d3=c;//6
  }
  void display()
  {
    cout<<d1<<"  "<<d2<<"  "<<d3;
  }
  void operator -() //operator overloading
  {
    d1=-d1;
    d2=-d2;
    d3=-d3;
  }
};
int main()
{
  minus1 o1,o2(2,-4,6);

  -o1;//o1 is the object of minus1..it will invoke operator overloading
  cout<<"\nData of Object 1 : ";
  o1.display();

  -o2;
  cout<<"\n\nData of Object 2 : ";
  o2.display();

}

















