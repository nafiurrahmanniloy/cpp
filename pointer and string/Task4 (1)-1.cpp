#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   char arr [15] = {"Hello Worldo "};
   char arr2 [15] = {"Bangladesh"};

   // cout<<strlen(arr2)<<endl;

   // cout<< strcat(arr,arr2)<<endl;

   // cout<<strncat(arr2,arr,7)<<endl;

   //cout<<strcpy(arr,arr2)<<endl;

  cout<<strstr(arr2,"a")<<endl;
  cout<<arr2<<endl;
  cout<<strchr(arr,'o')<<endl;
  cout<<strrchr (arr2, 'a')<<endl;
 // cout<<strcmp("a","A")<<endl;
  return 0;
}
