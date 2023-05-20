#include <iostream>
using namespace std;

// create a user-defined custom data type flight

class Flight{
    // create following data-members with proper access modifiers, use correct data types
private:
    string name;
    int ticket_no;
    double ticket_price;
    string flight_name;
    int flight_no;
    int flight_departure_time;
public:
    // create a constructor to set all the data member values
    Flight(string name, int ticket_no, double ticket_price, string flight_name, int flight_no, int flight_departure_time) {
        this->name=name;
        this->ticket_no=ticket_no;
        this->ticket_price=ticket_price;
        this->flight_name=flight_name;
        this->flight_no=flight_no;
        this->flight_departure_time=flight_departure_time;
    }

    // create a function for changing the ticket information
    void change_ticket(int ticket_no, double ticket_price) {
        this->ticket_no=ticket_no;
        this->ticket_price=ticket_price;
    }

    // create a function for changing the flight information
    void change_flight(string flight_name, int flight_no, int flight_departure_time) {
        this->flight_name=flight_name;
        this->flight_no=flight_no;
        this->flight_departure_time=flight_departure_time;
    }

    // create a function for showing all of the information
    void show_details() {
        cout<<"Name: "<<name<<endl;
        cout<<"Ticket No: "<<ticket_no<<endl;
        cout<<"Ticket Price: "<<ticket_price<<endl;
        cout<<"Flight Name: "<<flight_name<<endl;
        cout<<"Flight No: "<<flight_no<<endl;
        cout<<"Flight departure time: "<<flight_departure_time<<endl;
    }

    // create a function for showing flight information
    void flight_details() {
        cout<<"Flight Name: "<<flight_name<<endl;
        cout<<"Flight No: "<<flight_no<<endl;
        cout<<"Flight departure time: "<<flight_departure_time<<endl;
    }

    // create a function for giving a discount of 5% if the ticket price is more than 25000, show the user discounted ticket price.
    int get_discount() {
        if(ticket_price > 25000) {
            return this->ticket_price=ticket_price - (ticket_price * 0.05);
        }
    }
   /* void discoutgot(){
    cout<<ticket_price;
    }*/

};

int main() {
    // show proper demonstration of the class and its all functions

    Flight flight1("x", 234, 26000.00, "y", 3, 1600);
    flight1.change_ticket(236, 26000);
    flight1.change_flight("zz", 26, 1700);
    flight1.show_details();
    flight1.flight_details();
    //cout<<flight1.discoutgot();

}
