#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
   char str1[12] = "Hello";
   char str2[12] = "World";
   char str3[12]=   "abc";
   int  len ;
   /* copy str1 into str3 */
   strcpy(str3, str1);
   cout<<str3;

   /* concatenates str1 and str2 */
   strcat( str1, str2);
  cout<<str1;

   /* total lenghth of str1 after concatenation */
   len = strlen(str1);
   cout<<len;

   return 0;
}
