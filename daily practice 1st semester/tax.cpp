#include<iostream>
using namespace std;
int main()
{
    double price_withouttaxes,weight,taxes,total;
    cout<<"The price of 1 KG potatoes without taxes:";
    cin>>price_withouttaxes;
    cout<<"How much potatoes do you want to buy:";
    cin>>weight;
    cout<<"The percent of tax:";
    cin>>taxes;

    total=((((price_withouttaxes*taxes)/100)+ price_withouttaxes)*weight);

    cout<<"Total price is :" <<total<<endl;

    return 0;
}
