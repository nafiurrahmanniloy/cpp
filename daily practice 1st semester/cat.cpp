 #include <iostream >
 using namespace std;


 class Cat
{
private:
    string name;
    string colour;
    double height;
    double weight;

public:
   Cat ()
    {

    }
    Cat (string n,string c,double h,double w)
    {
        name =n;
        colour=c;
        height =h;
        weight=w;
    }




    void  showinfo()
    {
        cout<<"all the info of the cat :"<<endl;
        cout <<"name: "<<name<<endl;
        cout<<"colour: "<<colour<<endl;
        cout<<"height:"<<height<<endl;
        cout<<"weight:"<<weight<<endl;
    }
    void setName(string Name)
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
    setweight(double w)
    {
       weight = w;
    }
    double getweight()
    {
        return weight;
    }

};
int main()
{
   Cat obj("Mila","black",2.5,5);
   obj.showinfo(); ///for constructor
   /*Cat f1;
   f1.setName("tang");
   f1.setcolour("black");
   f1.setheight(3.33);
   f1.setweight(10);
   cout<<f1.getcolour()<<endl;
   f1.showinfo();*/
}



