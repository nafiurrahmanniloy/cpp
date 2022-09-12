#include <iostream>
using namespace std;
int main()
{
    int i, j, k, c=20;
    for(i=1;i<=20;i++)
    {
        for(k=1;k<c;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            cout<<"X";
        }
        cout<<endl;
        c--;
    }

    return 0;
}


