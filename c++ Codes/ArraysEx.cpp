#include<iostream>
using namespace std;
class ArrayEx
{
    int arr[10];
    public: void accept()
    {
     /*   arr[0]=23;
        arr[1]=78;
        arr[5]=54;
        cout<<arr[2]; */
        int arr[5]={12,23,34,56,77};
        cout<<arr[2];
        int arr1[]={23,45,12};
        cout<<arr1[2];

    }

};
int main()
{
    ArrayEx obj1;
    obj1.accept();

}
