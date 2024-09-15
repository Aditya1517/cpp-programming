// #include<iostream>
// using namespace std;
// class complex{
//     private:
    // public:
//         int real;
//         int img;

//     public:
//         complex(int r=0,int i=0){
//             real =r;
//             img=i;
//         }
//         void display(){
//         cout<<real<<"+"<<img<<"i"<<endl;
//         }
        // complex add(complex c)
        // complex operator+(complex c)  // operator overloading
        // {
        //     complex temp;
        //     temp.real=real+c.real;
        //     temp.img = img+c.img;
        //     return temp;
        // }

        // friend operator
//         friend complex operator+(complex c1,complex c2);

        // for printing complex number like normal ints and floats
//         friend ostream & operator<<(ostream &out,complex &c);

        // for taking input from user
//         friend istream & operator>>(istream &in,complex &c);
// };
//     complex operator+(complex c1,complex c2)  // operator overloading
//     {
//         complex temp;
//         temp.real=c1.real+c2.real;
//         temp.img =c1.img+c2.img;
//         return temp;
//     }

    // for printing complex number like normal ints and floats
//     ostream & operator<<(ostream &out,complex &c){
//         out<<c.real<<"+"<<c.img<<"i"<<endl;
//         return out;
//     }
    // for taking input from user
//     istream & operator>>(istream &in,complex &c){
//         cout<<"Enter real part of complex number:"<<endl;
//         in>>c.real;
//         cout<<"Enter imaginary part of complex number:"<<endl;
//         in>>c.img;
//         return in;
//     }

// int main(int argc, char const *argv[])
// {
//     complex c1(5,6),c2(5,6),c3,c4;
    // cout<<"Enter values of real and imaginary part of a complex number:-"<<endl;
    // cin>>c1.r>>c1.i;
    // cout<<"Enter values of real and imaginary part of a complex number:-"<<endl;
    // cin>>c2.r>>c2.i;
    // cout<<endl;
    // c3=c1.add(c2);
//     c3=c1+c2;
    // cout<<"Ans is "<<c3.r<<"+i"<<c3.i<<endl;
//     c3.display();
//     cout<<c3<<endl;
//     operator<<(cout,c3);
//     cin>>c4;
//     cout<<endl;
//     cout<<c4<<endl;
//     return 0;
// }

// PRACTICE PROGRAME
// #include <iostream>
// using namespace std;

// class rational
// {
// private:
//     int num;
//     int den;

// public:
//     rational(int a = 1, int b = 1)
//     {
//         num = a;
//         den = b;
//     }
//     void dispaly()
//     {
//         cout << num << "/" << den << endl;
//     }
//     friend rational operator+(rational r1, rational r2);
//     friend istream &operator>>(istream &in, rational &r);
//     friend ostream &operator<<(ostream &out, rational &r);
// };
// rational operator+(rational r1, rational r2)
// {
//     rational temp;
//     temp.num = r1.num * r2.den + r2.num * r1.den;
//     temp.den = r1.den * r2.den;
//     return temp;
// }
// istream &operator>>(istream &in, rational r)
// {
//     cout << "Enter numerator for rationl number" << endl;
//     in >> r.num;
//     cout << "Enter denomenator for rationl number" << endl;
//     in >> r.den;
//     if (r.den == 0)
//     {
//         cout << "Denomenator can not be 0, so please enter correct nubmer!" << endl;
//     }
//     return in;
// }
// ostream &operator<<(ostream &out, rational r)
// {
//     out << r.num << "/" << r.den << endl;
//     return out;
// }
// int main(int argc, char const *argv[])
// {
//     int r1, r2, r3;
//     cin >> r1;
//     cin >> r2;
//     r3 = r1 + r2;
//     cout << r1 << " + " << r2 << " = " << r3 << endl;
// }



 // operator overloading
// #include<iostream>
// using namespace std;

// class complex{
//     private:
//     int real;
//     int img;
//     public:
//     complex(int r=0,int i=0){
//         real=r;
//         img=i;
//     }
//     complex operator+(complex x){
//         complex temp;
//         temp.real=real+x.real;
//         temp.img=img+x.img;
//         return temp;
//     }
//     void display(){
//         cout<<real<<"+i"<<img;
//     }
// };

// int main(){
//     complex c1(3,5);
//     complex c2(5,3);
//     complex c3 = c1+c2;
//     c3.display();
// }



// friend operator overloading

// #include<iostream>
// using namespace std;

// class complex{
//     private:
//     int real;
//     int img;
//     public:
//     complex(int r=0,int i=0){
//         real=r;
//         img=i;
//     }
//     void display(){
//         cout<<real<<"+i"<<img;
//     }
//     friend complex operator+(complex c1,complex c2);
// };

// complex operator+(complex c1,complex c2){
//     complex t;
//     t.real=c1.real+c2.real;
//     t.img=c1.img+c2.img;
//     return t;
// }

// int main(){
//     complex c1(3,5);
//     complex c2(5,3);
//     complex c3 = c1+c2;
//     c3.display();
// }



// insertion and extraction operator overloading 
// #include<iostream>
// using namespace std;

// class complex{
//     private:
//     int real;
//     int img;
//     public:
//     complex(int r=0,int i=0){
//         real=r;
//         img=i;
//     }
//     friend complex operator+(complex c1,complex c2);
//     friend ostream &operator<<(ostream &out,complex &c);
//     friend istream &operator>>(istream &in,complex &c);
// };

// complex operator+(complex c1,complex c2){
//     complex t;
//     t.real=c1.real+c2.real;
//     t.img=c1.img+c2.img;
//     return t;
// }
// ostream &operator<<(ostream &out,complex &c){
//     cout<<c.real<<"+i"<<c.img<<endl;
//     return out;
// }
// istream &operator>>(istream &in,complex &c){
//     cout<<"Enter real and imaginary part of complex number"<<endl;
//     cin>>c.real;
//     cin>>c.img;
//     return in;
// }


// int main(){
//     complex c1(3,5);
//     complex c2(5,3);
//     complex c3 = c1+c2;
//     complex c4;
//     cout<<c3;
//     operator<<(cout,c3);
//     cin>>c4;
//     cout<<c4;
// }


// practice exerice
#include<iostream>
using namespace std;

class rational{
    // private:
        // int num,den;
    public:
    int num,den;
        rational(int n=0,int d=1){
            num=n;
            den=d;
        }
        friend istream &operator>>(istream &in,rational x);
        friend rational operator+(rational x2);
        friend ostream &operator<<(ostream &out,rational t);
};

istream &operator>>(istream &in,rational x){
    cout<<"Enter values of numerator and denomenator of 1st ratoinal number:"<<endl;
    cin>>x.num;
    cin>>x.den;
    // cout<<"Enter values of numerator and denomenator of 2nd ratoinal number:"<<endl;
    // cin>>x.num;
    // cin>>x.den;
}
rational operator+(rational x2){
    rational t;
    t.num=(t.num*x2.den)+(x2.num*t.den);
    t.den=t.den*x2.den;
    return t;
}
ostream &operator<<(ostream &out,rational t){
    cout<<"Sum is "<<t.num<<"/"<<t.den<<endl;
    return out;
}

int main(){
    rational x1,x2,x3;
    cin>>x1;
    cin>>x2;
    x3=x1+x2;
    cout<<x3;
}