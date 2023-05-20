#include <iostream>
using namespace std;

//encapsulation
//class defination
//inheritence

class Car{
private:
    // data member / attribute / class variables
    string color;
    int wheel;
public:
    // constructor
    Car (string color, int wheel){
        this->color=color;
        this->wheel=wheel;
    }

    //default constructor
    Car () {
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

    ~Car() {
        cout<<"destructor run"<<endl;
    }
};

int main() {
    //Car object;

    Car object("white", 5);
    //Car object2("pink", 2);

    //cout<<object2.get_color()<<endl;
    //object2.set_color("black");
    //cout<<object2.get_color()<<endl;
    //cout<<object2.get_wheel()<<endl;

    //object.set_color("blue");
    cout<<object.get_color()<<endl;

    //object.set_wheel(4);
    cout<<object.get_wheel()<<endl;

    object.run();
    object.run_slow();

    Car object3;
    cout<<object3.get_color()<<endl;
    cout<<object3.get_wheel()<<endl;

    cout<<"Hello";

}
