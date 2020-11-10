#include<iostream>
using namespace std;
class Loop
{
    int counter=0;
public : void whileEx()
{
  while(counter>10)
  {
      cout<<counter<<"\n";
      counter++;
  }
}
void dowhileEx()
{
    int counter1=20;
    do
    {
        cout<<counter1<<endl;
        counter1++;//3
    }while(counter1<5);
}


};
int main()
{
    Loop obj1;
    obj1.dowhileEx();
  //  obj1.whileEx();

}
