
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int n=1;

    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cout<<num*n<<"\t";
            n++;
        }
        cout<<endl;
    }

    return 0;
}
