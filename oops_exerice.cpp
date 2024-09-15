#include <iostream>
using namespace std;
class student
{
public:
    int roll;
    string name;
    float sub1, sub2, sub3;
    float avg;
    char grade;
    void setRoll()
    {
        cout << "Enter Roll No. :-" << endl;
        cin >> roll;
    }
    void Name()
    {
        cout << "Enter the name of studnet" << endl;
        cin.get();
        getline(cin, name);
    }
    int getRoll()
    {
        return roll;
    }
    void setMarks()
    {
        cout << "Enter marks of 3 subs" << endl;
        cin >> sub1 >> sub2 >> sub3;
    }
    void Avg()
    {
        avg = (sub1 + sub2 + sub3) / 3;
        cout<<"Average is "<<avg<<endl;
    }
    void Grade(){
        if (avg>60){
            grade='A';
        }
        else if(avg>40 && avg<60){
            grade='B';
        }
        else{
            grade='C';
        }
        cout<<"Grade is "<<grade<<endl;
    }
};

int main()
{
    student s;
    s.setRoll();
    s.getRoll();
    s.Name();
    s.setMarks();
    s.Avg();
    s.Grade();
    return 0;
}