
 #include <iostream >
 using namespace std;
 class Building

{
private:
    string name;
    string address;
    double size;
    string ownerName;
    string engineerName;
    string permitNo;
    string licenseNO;
public:
     Building()
    {

    }
    Building (string n,string a,double s,string wn,string en,string pNo,string ln)
    {
        name =n;
        address=a;
        size=s;
        ownerName=wn;
        engineerName=en;
        permitNo= pNo;
        licenseNO=ln;

    }

    string  showinfo()
    {
        cout<<"all the info of the human :";
        cout<<"name :"<<name<<endl;
        cout<<"address:"<<address<<endl;
        cout<<"size:"<<size<<endl;
        cout<<"ownerName:"<<ownerName<<endl;
        cout<<"engineerName:"<<engineerName<<endl;
        cout<<"permitNo:"<<permitNo<<endl;
        cout<<"licenseNO:"<<licenseNO<<endl;
    }
};
int main()
{
    Building obj("Messi","10/a",100,"niloy","nafi","78ac","354fech");
    Building niloy("vila","5/v",6,"zahin","prithy","34er","453gg");
    obj.showinfo();
    niloy.showinfo();
}
