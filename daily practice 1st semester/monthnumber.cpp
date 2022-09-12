#include<iostream>
using namespace std;
int main()
{
     int month;
    cout << "Enter the number of days in a month:";
    cin >> month;
    if(month == 1)
    {
        cout << "No. of days : 31 days" <<endl;
    }
    else if(month == 2)
    {
        cout << "No. of days :  28 or 29 days" <<endl;
    }
    else if(month == 3)
    {
        cout << "No. of days :  31 days" <<endl;
    }
    else if(month == 4)
    {
        cout << "No. of days :  30 days" <<endl;
    }
    else if(month == 5)
    {
        cout << "No. of days :  31 days" <<endl;
    }
    else if(month == 6)
    {
        cout << "No. of days :  30 days" <<endl;
    }
    else if(month == 7)
    {
        cout << "No. of days :  31 days" <<endl;
    }
    else if(month == 8)
    {
        cout << "No. of days :  31 days" <<endl;
    }
    else if(month == 9)
    {
        cout << "No. of days :  30 days" <<endl;
    }
    else if(month == 10)
    {
        cout << "No. of days :  31 days" <<endl;
    }
    else if(month == 11)
    {
        cout << "No. of days :  30 days" <<endl;
    }
    else if(month == 12)
    {
        cout << "No. of days :  31 days" <<endl;
    }
    else
    {
        cout<<"please enter month number between (1-12)";
    }
    return 0;

}
