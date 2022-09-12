#include<iostream>
using namespace std;
class car
{
   private :

       string brand;
       string model;
       int year;
   public :
    car (string x,string y ,int z)
    {
        brand =x;
        model=y;
        year=z;
    }
    int disp()
    {
        cout <<"brand : " <<brand<<" model : " << model<< "  year : "<<year<<endl;
    }

};

int main ()
{
    car c1("BMw","x6969",123 );
    c1.disp();
    car c2("Nsl","dcrr4",4369);
    c2.disp();
}
