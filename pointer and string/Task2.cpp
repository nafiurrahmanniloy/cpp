#include<iostream>

using namespace std;

int main()
{
    char arr[12];
    cout<<"enter array:";
    cin.getline(arr,12);

    for (int i =0; i<12;i++)
    {
        if (arr[i]>=65 && arr[i]<=90)
        {
            cout<<char(arr[i]+32);
        }
        else if (arr[i]>=97 && arr[i]<=122)
        {
            cout<<char(arr[i]-32);
        }
        else
        {
            cout<<arr[i];
        }
    }

   // cout<<arr;
}
