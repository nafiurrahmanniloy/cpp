#include <iostream>
using namespace std;

class Rectangle
{
    private :
	int length;
	int breadth;
	public:
		void setDimension(int l, int b)
		{
			length = l;
			breadth = b;
		}
		double getArea(int area)
		{
			area= .5*length * breadth;
			cout <<"the area is :"<<area;
		}
};

int main()
{
	Rectangle rt;
	rt.setDimension(7, 4);
	rt.getArea(55);
	return 0;
}

