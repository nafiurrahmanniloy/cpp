#include <iostream>
using namespace std;

// function declaration
int maxi(int num1, int num2);

int main () {
   // local variable declaration:
   int num1 = 500;
   int num2 = 200;
   int ret;

   // calling a function to get max value.
   ret = maxi(num1, num2);


   return 0;
}

// function returning the max between two numbers
int maxi(int num1, int num2) {
   // local variable declaration


   if (num1 > num2)
      cout <<"the max is :"<<num1;
   else
      cout <<"the max is :"<<num2;


   return 0;
}
