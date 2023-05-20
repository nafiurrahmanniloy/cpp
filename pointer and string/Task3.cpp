#include <iostream>
using namespace std;

int main()
{
    char a [] = "Ab";
    char b [] = "Ab";
    bool flag = false;

    for (int i =0; i<2; i++)
    {
        if (a[i]!=b[i])
        {
            flag = true;
        }
    }

    if (flag == true)
    {
        cout<<" not Same"<<endl;
    }
    else
    {
        cout<<" Same"<<endl;
    }
}
