#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   char arr[] ={"Ya habibi"};

int size = sizeof (arr)/ sizeof (arr [0] ) ;
   cout<<size<<endl;

   cout<<arr;

   char arr2 [12];
    cout<<"enter array:";
   cin>>arr2;
   cout<<arr2;
 // cout<<"enter arr 2 :";
  // cin.getline(arr2,12);
  // cout<<arr2;

}
