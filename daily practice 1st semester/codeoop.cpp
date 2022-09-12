#include<iostream>
using namespace std;
class test
{
    private :
         int x;

    public :

            test (int x1)
            {
                x=x1;
            }
            test (const test &x2)
            {
                x=x2.x;

            }

            int disp()
            {
                cout <<x<<endl;
            }

} ;
int main()
{
    test N(69);
    test N2=N;
    N.disp();
    N2.disp();


}
