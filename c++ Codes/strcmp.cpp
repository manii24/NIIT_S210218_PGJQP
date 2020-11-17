#include <iostream>
using namespace std;
#include<stdio.h>
#include <string.h>   /* declares strcmp() */

#define ANSWER "Grant"

#define MAX 40
//To compare two string we use strcmp
int main()
{
    char try1[MAX];//char try[40];
    puts("Who is buried in Grant's tomb?");

    gets(try1);
 //try : grant  ANSWER : Grant
    while (strcmp(try1,ANSWER) != 0)

    {

        puts("No, that's wrong. Try again.");

        gets(try1);

    }

    puts("That's right!");
//strchr
 const char str[] = "http://www.niit.com";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   cout<<ret;

    return 0;

}
