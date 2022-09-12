#include<iostream>
using namespace std;
int main()
{
    int score;
    cout<<"enter your score on the exam(0-100):";
    cin>>score;
    if(score >=90)
        cout<<"score is A+";
     else if (score<90 && score >=85)
        cout<<"score is A";
    else if(score<85 && score >=80)
        cout<<"score is B+";
    else if(score<80 && score >=75)
        cout<<"score is B";
    else if(score<75 && score >=70)
        cout<<"score is C+";
    else if(score<70 && score >=65)
        cout<<"score is C";

    else if(score<65 && score >=60)
        cout<<"score is D+";
    else if(score<60 && score >=50)
     cout<<"score is D";
    else
        cout<<"you are fail";
    return 0;
}
