#include <iostream>
using namespace std;
// class
// here no data hiding is used
// classes are used to define user define datatypes 
// class rectangle{
//     public:
//     float length;
//     float breadth;

//     int area(){
//         return length*breadth;
//     }
//     int perimeter(){
//         return 2*(length+breadth);
//     }
// };

// int main(){
//     rectangle r1,r2;  // these are objects of class and these are created in stak memory
//     r1.length=10;
//     r1.breadth=5;
//     cout<<"The area of rectangle r1 is "<<r1.area()<<endl;

//     //  pointer to an object
//     rectangle *p;
//     p=&r2;
//     p->length=15;  // -> is derefrencing oparator
//     p->breadth=10;
//     cout<<"Area of rectangle r2 is "<<p->area()<<endl;

    // creating an object in heap using pointer
//     rectangle *q= new rectangle;
//     p->length=12;
//     p->breadth=9;
//     cout<<"Area of rectangle in heap memory is "<<p->area()<<endl;

//     return 0;

// }

// data hiding = it useful to avoid miss use of class
// class rectangle{

//     private:
//     float length;
//     float breadth;

//     public:
//     void setLenght(float l){
//         cout<<"Enter a value of l:"<<endl;
//         cin>>l;
//         if (l>=0){
//             length=l;
//         }
//         else{
//             cout<<"Value of lenght can not be -ve"<<endl;
//         }
//     }
//     float getLenght(){
//         return length;
//     }
//     void setBreadth(float b){
//         cout<<"Enter value of b:"<<endl;
//         cin>>b;
//         if (b>=0){
//             breadth=b;
//         }
//         else{
//             cout<<"Value of breadth can not be -ve"<<endl;
//         }
//     }
//     float getBreadth(){
//         return breadth;
//     }
//     float area(){
//         return length*breadth;
//     }

//     // constucuture :- do not have return type
//     rectangle(int l=0,int b=0){
//         setLenght(l);           // parameterized constucturer
//         setBreadth(b);
//     }
//     rectangle(rectangle &r){   copy constucture 
//         length = r.length;
//         breadth= r.breadth;
//     }

//     // copy constructure may on not copy that object bt only points towards that only so deep copy consturcture is used
// };

// // accessor = getxxx
// // mutator = setxxx
// together these functinos are called as property functions

// int main(int argc, char const *argv[])
// {
//     rectangle r;
//     // r.setLenght(10);
//     // r.setBreadth(5);
//     rectangle r3(r);
//     cout<<"Area is "<<r.area()<<endl;
//     cout<<"Area is "<<r3.area()<<endl;
//     return 0;
// }

// practice exerxcise

class student
{
private:
    int rollNo;
    string name;
    float sub1;
    float sub2;
    float sub3;
    float avg;

public:
    void Roll(int rollNo)
    {
        cout << "Enter RollNo:-" << endl;
        cin >> rollNo;
    }
    void Name(string name)
    {
        cout << "Enter student name:-" << endl;
        cin.get();
        getline(cin, name);
    }
    void marks()
    {
        cout << "Enter marks in subject 1:-" << endl;
        cin >> sub1;
        cout << "Enter marks in subject 2:-" << endl;
        cin >> sub2;
        cout << "Enter marks in subject 3:-" << endl;
        cin >> sub3;
    }
    float average()
    {
        avg = ((sub1 + sub2 + sub3) / 3);
        return avg;
    }
    char grade()
    {
        if (avg > 60)
        {
            return 'A';
        }
        else if (avg > 40 && avg < 60)
        {
            return 'B';
        }
        else
        {
            return 'C';
        }
    }
};

int main(int argc, char const *argv[])
{
    student s;

    int roll;
    string name;
    float sub1, sub2, sub3;
    s.Roll(roll);
    s.Name(name);
    s.marks();
    cout << "average is " << s.average() << endl;
    cout << "and grade is " << s.grade() << endl;
    return 0;
}




// also stucture and class are similer but in c stuct can not have function but struct in c++ can have struct