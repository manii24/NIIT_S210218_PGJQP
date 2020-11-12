#include<iostream>
#include <string.h>
using namespace std;
struct employee
{   int id;
    char name[50];
} ; //declaring e1 variable for structure
int main( )
{
    struct employee e1;
   //store first employee information
   e1.id=101;
   strcpy(e1.name, "Ram yadav");//copying string into char array
   //printing first employee information
   cout<<"employee 1 id : \n"<<e1.id;
   cout<<"employee 1 name : \n"<<e1.name;
return 0;
}
