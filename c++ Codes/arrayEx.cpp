#include<iostream>
using namespace std;
class ArrayEx
{

public : void accept()
{
 /*  int arr[5]={3,4,58,9,2};
   cout<<arr[3] <<endl;
   int arr1[]={34,66,777};
   cout<<arr1[1];*/
   int arr[5];
   cout<<"Enter the values in array";
   for(int i=0;i<5;i++)
   {
       cin>>arr[i];

   }cout<<"Values in array are "<<endl;
   for(int j=0;j<5;j++)
   {
       cout<<arr[j]+2<<endl;
   }
}
};
int main()
{
   ArrayEx e1;
   e1.accept();
}
