#include<iostream>
using namespace std;
int main()
{
    int side1, side2, side3;

	cout << "Enter Three Sides of the Triangle =  ";
	cin >> side1 >> side2 >> side3;

	if( (side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2) )
  	{
  		cout << "This is a Valid Triangle";
  	}
  	else
    {

    	cout << "This is an Invalid Triangle";
    }

 	return 0;
}
