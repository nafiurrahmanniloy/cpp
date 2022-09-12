#include<iostream>
#include<conio.h>
using namespace std;
 int main()
{
           int n;
           cout<<"Enter the Number :";
           cin>>n;
           if((n%2==0)&&(n%5==0))
            {
                   cout<<"\n Its Divisible by 2 and 5.";
            }
          else
           {
                  cout<<"\n Its not Divisible by 2 and 5.";
            }
         return 0 ;
}

