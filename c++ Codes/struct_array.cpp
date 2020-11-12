#include <iostream>
#include <string.h>
using namespace std;

struct student
{
     int id;
     char name[30];
     float percentage;
};
int main()
{
     int i;
     //array of structures
     //int arr[10];
     struct student record[3];
     //record[0] and record[1] ,record[2]

     // 1st student's record
     record[0].id=1;
     strcpy(record[0].name, "Raju");
     record[0].percentage = 86.5;

     // 2nd student's record
     record[1].id=2;
     strcpy(record[1].name, "Surendren");
     record[1].percentage = 90.5;

     // 3rd student's record
     record[2].id=3;
     strcpy(record[2].name, "Thiyagu");
     record[2].percentage = 81.5;

     for(i=0; i<3; i++)
     {
         cout<<"     Records of STUDENT :\n"<<i+1;
         cout<<" Id is: \n"<<record[i].id;
         cout<<" Name is: \n"<<record[i].name;
        cout<<" Percentage is:\n\n"<<record[i].percentage;
     }
     return 0;
}


