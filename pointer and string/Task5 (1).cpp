#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
   int arr[] = {20, 30, 40};
   int *p = arr;
   int q;

   q = ++*p;
   //cout<<p<<endl<<*p<<endl<<arr;
   cout<<"arr[0] = "<<arr[0]<<" arr[1] = "<< arr[1]<<" *p = "<< *p<<" q = "<< q<<endl;

   q = *p++;
   cout<<"arr[0] = "<<arr[0]<<" arr[1] = "<< arr[1]<<" *p = "<< *p<<" q = "<< q<<endl;

   q = *++p;
   cout<<"arr[0] = "<<arr[0]<<" arr[1] = "<< arr[1]<<" *p = "<< *p<<" q = "<< q<<endl;
   return 0;
}
