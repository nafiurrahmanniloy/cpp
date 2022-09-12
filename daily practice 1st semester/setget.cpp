 #include <iostream >
 using namespace std;
 class Human

{
private:
    string name;
    string colour;
    double height;
    double weight;
    double age;
    string dateOfBirth;
public:
    /*Human ()
    {

    }
    Human (string n,string c,double h,double w,double ag,string db)
    {
        name =n;
        colour=c;
        height =h;
        weight=w;
        age=ag;
        dateOfBirth=db;
    }*/


    void getName()
    {
        return showinfo();
    }


    string  showinfo()
    {
        cout<<"all the info of the human :";
        cout <<name<<endl;
        cout<<colour<<endl;
        cout<<height<<endl;
        cout<<weight<<endl;
        cout<<age<<endl;
        cout<<dateOfBirth<<endl;
    }
};
int main()
{
    //Human Man("Messi","white",5.6,60,33,"3rd march");
    Human Man;

    Man.getvalue();
    Man.showinfo();
}

