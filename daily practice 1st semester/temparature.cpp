#include<iostream>
using namespace std;
int main()
{
    int num;
    float cel, faren;

    cout<<"Type 1 to convert Fahrenheit to Celsius:"<<endl<<"2 to convert Celsius to Fahrenheit:";
    cin>>num;

    if(num==1)
    {
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>faren;
        cel=(faren-32)*5/9;
        cout<<"In Celsius that's "<<cel<<endl;
    }
    else if(num==2)
    {
        cout<<"Enter temperature in Celsius: ";
        cin>>cel;
        faren=(cel*9/5)+32;
        cout<<"In Fahrenheit that's "<<faren<<endl;
    }
    else
    {
        cout<<"Invalid input.";
    }

    return 0;
}


