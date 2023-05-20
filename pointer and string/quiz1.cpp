/*#include<iostream>
using namespace std;
int main(){
int arr[] = {20, 30, 40};
int *p = arr;
int q;
//q = ++*p;
//cout<q<<endl;
cout<<*p<<endl;
//cout‹<arr[1]<<endl;
//coutく<*p+-+く<endl;
//coutく<++*p<<endl;
//coutk<arr[0]++<<endl;
//coutく<*--p<<endl;
//coutく<*p--<<endl;
//coutく<q<<endl;
//cout<<*++p<<endl;
}
*/

#include<iostream>
#include <string.h>
using namespace std;
int main()
{
char arr [15] = {"Hello World "};
char arr2 [15] = {"Bangladesh"};
cout<<strlen(arr)<<endl;
cout<<arr<<endl;
cout<<strcat(arr, arr2)<<endl;
cout<<arr2<<endl;
cout<<arr<<endl;
cout<<strcpy(arr, arr2)<<endl;
cout<<strncat(arr2, arr,5)<<endl;
cout<<arr2<<endl;
cout<<strcmp("aB","aA")<<endl;
cout<<strlen(arr2) <<endl;
}

