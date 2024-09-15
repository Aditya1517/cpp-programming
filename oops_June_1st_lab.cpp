// write a programe to add 2 complex numbers by overloading + operator

// #include<iostream>
// using namespace std;

// class complex{
//     private:
//         int real;
//         int img;
//     public:
//         complex(int r=0,int i=0){
//             real=r;
//             img=i;
//         }
//         complex operator+(complex x){
//             complex temp;
//             temp.real=real+x.real;
//             temp.img=img+x.img;
//             return temp;
//         }
//         void display(){
//             cout<<"the sum is "<<real<<"+"<<img<<"i"<<endl;
//         }
// };

// int main(int argc, char const *argv[])
// {
//     complex c1(5,6);
//     complex c2(7,4);
//     complex c3=c1+c2;
//     c3.display();
//     return 0;
// }


// write a progrmae to concatinate 2 strings by overloading + operator

#include<iostream>
using namespace std;

class concatinate{
    private:
        string a;
        string b;
    public:
        concatinate(string s="hello",string t="world"){
            a=s;
            b=t;
        }
        concatinate operator+(){
            concatinate temp;
            temp=a+b;
            return temp;
        }
        void display(){
            cout<<a<<" "<<b<<endl;
        }
};

int main(int argc, char const *argv[])
{
    concatinate t("hello","guys");
    t.display();
    return 0;
}
