#include<iostream>
using namespace std;
class TwoD
{
    int arr[2][3];//2 rows and 3 columns
    public : void accept()
    {


    //nested loops

    for(int i=0;i<2;i++)//outer loop is always for rows
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    }
    void display()
    {
         for(int i=0;i<2;i++)//outer loop is always for rows
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
    }

};
int main()
{
    TwoD d1;
    d1.accept();
    d1.display();

}
