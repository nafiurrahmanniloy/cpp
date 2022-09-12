
#include <iostream>
using namespace std;
class shape
{
private  :
    double dim1;
    double dim2;
    public :
     double  dim3;
      dim3=dim1;
    double dim4;
    dim2=dim4;
    void setdim1(double di)
    {
        dim3=di;
    }
    void setdim2(double d)

    {
     dim4=d;
    }

};
class triangle:public shape
{
public :

    double getarea()
    {
        return dim1*dim2*.5;
    }
};
class rectangle  : public shape
{
public :

    double getarea()
    {
        return dim1*dim2;
    }
};

int main()
{
    rectangle r;
    r.setdim1(5);
    r.setdim2(10);
    cout <<r.getarea()<<endl;
    triangle t;
    t.setdim1(5);
    t.setdim2(10);
    cout <<t.getarea();
}
