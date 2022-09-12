#include <iostream>
using namespace std;
class cube

{
public :
    int side;
    cube(int x,int y)
    {
        side = x-y;

    }
    int display ()
    {
        int result;
        result =side;
        cout<<result<<endl;
    }
    int disp()
    {

     cout<<"hello world"<<endl;
    }

};
int main()
         {
          cube side1(56,55),side2(45,34);

          side1.display();
          side1.disp() ;
          side2.disp();
          side2.display();
         }
