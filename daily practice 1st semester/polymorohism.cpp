#include <iostream>
using namespace std;
class person
{
public :
    void display()
    {
        cout <<"I am a person"<<endl;
    }
};
class student : private person

{
    void display ()
    {
        cout <<"I am also a student"<<endl;

    }
};
class teacher  : private person
{ public:
    void display ()
    {
        cout <<"I am also a teacher"<<endl;

    }
};
int main()
{
    student obj;
   teacher t;
    person p;
    p.display();
   t.display();
    obj.display();
}
