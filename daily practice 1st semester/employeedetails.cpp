
#include<iostream>
using namespace std;
class Person
{
    private :
        string name;
        string gender;
        string dateofbirth;
        int    age;
        string skin_tone;
        double    height;
    public:
        Person ()
        {

        }
        Person(string n,string g,string db,int a,string st,double h)
        {
            name       =n ;
            gender     =g ;
            dateofbirth=db;
            age        =a ;
            skin_tone  =st;
            height     =h ;
        }
       /* void setname(string Name)
        {
            name=Name;
        }
        void setgender(string Gender)
        {
            gender=Gender;
        }
        void setdateofbirth(string dateOFbirth)
        {
            dateofbirth=dateOFbirth;
        }
        void setage (int aGe)
        {
            age=aGe;
        }
        void setskintone(string skinTone)
        {
            skin_tone=skinTone;
        }
        void setheight (int Height)
        {
            height=Height;
        }
        string getname()
        {
         return name;
        }
        string getgender()
        {
            return gender;
        }
        string getdateofbirth()
        {
            return dateofbirth;
        }
        int getage()
        {
            return age;
        }
        string getskintone()
        {
            return skin_tone;
        }
        double getheight()
        {
            return height;
        }*/
        void showpensoninfo()
        {
            cout <<"The name of the person           : "<<name<<endl;
            cout <<"The gender of this person        : "<<gender<<endl;
            cout <<"The date of birth of this person : "<<dateofbirth<<endl;
            cout <<"The age of this person           : "<<age<<endl;
            cout <<"The skin tone of this  person    : "<<skin_tone<<endl;
            cout <<"The height of the person         : "<<height<<"foot"<<endl;

        }

};


class Employee: public Person
{
    private :
        string mailadd;
        string post;
        string learing_institute;
        int    emid;
    public:
        Employee(string n,string g,string db,int a,string st,double h,string mail,string pst ,string li,int id):Person( n, g,db, a, st, h)
        {
            mailadd=mail;
            post=pst;
            learing_institute=li;
            emid=id;
        }
        showeminfo ()
        {
            cout <<" I am an employee "<<endl;
            cout <<"my id is      : "<<emid<<endl;
            cout <<"post :   " <<post<<endl;
            cout <<"mail address: "<<mailadd;
        }

};
int main()
{
    //Person obj("zahin","Gay","69 may 6969",69,"BBC",5.6);
    Employee oj("zahin","Gay","69 may 6969",69,"BBC",5.6, "jj@j","boss","AIUB",343);
    oj.showpensoninfo();
    oj.showeminfo();
}
