#include <iostream>
using namespace std;

// inheritence
// parent class / base class
class Vehicle{
private:
    // data member / attribute / class variables
    string color;
    int wheel;
public:
    // constructor
    Vehicle (string color, int wheel){
        this->color=color;
        this->wheel=wheel;
    }

    //default constructor
    Vehicle () {
        color="orange";
        wheel=6;
    }

    // setter
    void set_color(string color){
        this->color=color;
    }

    // getter
    string get_color(){
        return color;
    }

    void set_wheel(int wheel){
        this->wheel=wheel;
    }

    int get_wheel(){
        return wheel;
    }

    void run(){
        cout<<"running"<<endl;
    }

    void run_slow(){
        cout<<"slow running"<<endl;
    }

    ~Vehicle() {
        cout<<"destructor run"<<endl;
    }
};

// child class
class PrivateCar: public Vehicle{
private:
    string type;
    string model;
    int seat;
public:
    void set_type(string type){
        this->type=type;
    }

    // getter
    string get_type(){
        return type;
    }

    void set_model(string model){
        this->type=type;
    }

    // getter
    string get_model(){
        return model;
    }

    void set_seat(int seat){
        this->type=type;
    }

    // getter
    int get_seat(){
        return seat;
    }

    void car_type() {
        cout<<"Private car.";
    }
};

class Bus: public Vehicle{
private:
    int seat;
public:
    int get_seat(){
        return seat;
    }

    void set_seat(int seat) {
        this->seat=seat;
    }

    void speed() {
        cout<<"speed 50";
    }
};




int main() {
    PrivateCar car1;
    car1.car_type();

    Bus bus1;
    bus1.set_seat(40);
    bus1.speed();
}
