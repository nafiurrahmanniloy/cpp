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
    Human ()
    {

    }
    Human (string n,string c,double h,double w,double ag,string db)
    {
        name =n;
        colour=c;
        height =h;    ///constructor
        weight=w;
        age=ag;
        dateOfBirth=db;
    }

   /* setName(string Name)
    {
       name=Name;
    }
    string getName()
    {
        return name;
    }
    setcolour(string Colour)
    {
       colour=Colour;
    }
    string getcolour()
    {
        return colour;
    }
    setheight(double h)
    {
       height=h;
    }
    double getheight()
    {
        return height;
    }

    }setweight(double w)
    {
       weight=Colour;
    }
    string getweight()
    {
        return weight;
    }
    setage(string ag)
    {
       age=ag;
    }
    string getage ()
    {
        return age;
    }
    setdateofbirth(string db)
    {
      dateOfBirth =db;
    }
    string getdateofbirth()
    {
        return dateOfBirth;
    }*/



    string  showinfo()
    {
        cout<<"all the info of the human :"<<endl;
        cout <<"name: "<<name<<endl;
        cout<<"colour: "<<colour<<endl;
        cout<<"height:"<<height<<endl;
        cout<<"weight:"<<weight<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"birth date:"<<dateOfBirth<<endl;
    }
};
int main()
{
    Human Man("Messi","white",5.6,60,33,"3ed march");

    Man.showinfo();   ///constructor

}
