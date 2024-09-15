// #include<iostream>
// using namespace std;

// class base{
    
//     public:
//     int a;
//     void display(){
//         cout<<"Dispaly of base"<<endl<<a<<endl;
//     }
// };
// class derivied:public base{
//     public:
//     void show(){
//         cout<<"Show of derived"<<endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     base b;
//     b.a=100;
//     b.display();
//     derivied d;
//     d.a=200;
//     d.display();
//     d.show();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class rectangle{
//     private:
//     float length;
//     float breadth;
//     public:
//     rectangle(int l=0,int b=0){
//         length=l;
//         breadth=b;
//     }
//     void setLenght(int l){
//         cout<<"Enter lenght "<<endl;
//         cin>>l;
//         length=l;
//     }
//     int getLenght(){
//         return length;
//     }
//     void setBreadth(int b){
//         cout<<"Enter breadth:"<<endl;
//         cin>>b;
//     }  
//     int getBreadth(){
//         return breadth;
//     }  
//     int area(){
//         return length*breadth;
//     }
//     bool isSquare(){
//         return length==breadth;
//     }
    
// };

// class cuboid:public rectangle{
//     private:
//     int height;
//     public:
//     cuboid (int h){
//         height=h;
//     }
//     void setHeight(){
//         cout<<"Enter height:"<<endl;
//         cin>>height;
//     }
//     int getHeight(){
//         return height;
//     }
//     int volume(){
//         return getLenght()*getBreadth()*height;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     cuboid c(int h);
//     c.setLenght();
//     c.setBreadth();
//     c.setHeight();
//     c.volume();
//     return 0;
// }


// constructures in inheritance 
//  when you create object of drived class first consturcture of base class is called then constucture of derived class is created  
// #include<iostream>
// using namespace std;

// class base{
//     public:
//     base(){
//         cout<<"non parameterized constructure of base"<<endl;
//     }
//     base(int x){
//         cout<<"parameterized constructure of base "<<x<<endl;
//     }
// };

// class derived:public base{
//     public:
//     derived(){
//         cout<<"non parameterized constructure of derived"<<endl;
//     }
//     derived(int y){
//         cout<<"paramaeterized constucture of derived "<<y<<endl;
//     }
//     derived(int x,int y):base(x){                              // this is for calling base class parameterized constructure 
                                                                  // through derived class parameterized constucture
//         cout<<"paramaeterized constucture of derived and base "<<y<<endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     derived d(5,10);
//     return 0;
// }


// // access specifiers :
// //                  public
// //                  private
// //                  protected

// #include<iosteram>
// using namespace std;

// class base{
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     int c;
//     void funbase(){
//         a=10;
//         b=20;
//         c=30;
//     }
//     // in base class all members are accessable in this class only 
// };

// class derived:base{
//     public:
//     void funderived(){
//         a=1;
//         b=2;
//         c=3;
//     }
// };

// // and object can access public members only

// int main(){
//     base x;
//     // x.a=12;   upon object we can not access private and protected members but we can access public members
//     // x.b=13;
//     x.c=14;
    
//     derived d;
//     // d.a=11; we can not access private members in derived class 
//     d.b=12;
//     d.c=13;
// }


// // ways of inheritanace
// #include<iostream>
// using namespace std;

// class Parent
// {
//     private: int a;
//     protected: int b;    
//     public: int c;

//     void funParent()
//     {
//         a=10;
//         b=5;
//         c=15;
//     }
    
// };
    
// class Child: private Parent      // when we inharete privatelly public will stay as public and protected will become private 
// {
//     private:
//     protected:
//     public:

//     void funChild()
//     {
//         //a=10;
//         b=5;
//         c=15;
//     } 
	     
// };
    
// class GrandChild : public Child
// {
//     public:
//     void funGrandChild()
//     {
//         //a=10;
//         //b=5;
//         //c=20;
//     }
    
// };
    
// int main()
// {
//     // Child c;
//     //c.a=10;
//     //c.b=5;
//     //c.c=20;
        
// }

// we can restrict the access down the hierarchy



// #include<iostream>
// using namespace std;

// class base{
//     public:
//         int x;
        
//         void show(){
//             cout<<x<<endl;
//         }
// };

// class derived:public base{
//     public:
//         int y;
//         void dispaly(){
//             cout<<x<<" "<<y<<endl;
//         }
// };

// int main(){
//     base b;
//     b.x=10;
//     derived d;
//     d.x=20;
//     d.y=15;
//     b.show();
//     d.dispaly();
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class rectangle{
//     int lenght;
//     int breadth;
//     public:
//         rectangle(int l=0,int b=0){
//             lenght=l;
//             breadth=b;
//         }
//         void setLength(int l){
//             lenght=l;
//         }
//         int getLenghht(){
//             return lenght;
//         }
//         void setBreadth(int b){
//             breadth=b;
//         }
//         int getBreadth(){
//             return breadth;
//         }
//         int area(){
//             return lenght*breadth;
//         }
// };

// class cubiod:public rectangle{
//     private:
//         int height;
//     public:
//         cubiod(int h=1){
//             height=h;
//         }
//         void setHeight(int h){
//             height=h;
//         }
//         int getHeight(){
//             return height;
//         }
//         int volume(){
//             return getLenghht()*getBreadth()*height;
//         }
// };

// int main(int argc, char const *argv[])
// {
//     cubiod c(6);
//     c.setLength(6);
//     c.setBreadth(6);
//     cout<<"The valume is "<<c.volume()<<endl;
//     return 0;
// }


// practice programe
#include<iostream>
using namespace std;

class employee{
    private:
        int eid;
        string name;
    public:
        employee(int e,string n){
            eid=e;
            name=n;
        }
        int getEmpID(){
            return eid;
        }
        string getName(){
            return name;
        }
};

class fulltimeemp:public employee{
    private:
        int salary;
    public:
        fulltimeemp(int e,string n,int s):employee(e,n){
            salary=s;
        }
        int getSalary(){
            return salary;
        }
};

class parttimeemp:public employee{
    private:
        int wage;
    public:
        parttimeemp(int e,string n,int w):employee(e,n){
            wage=w;
        }
        int getWage(){
            return wage;
        }
};

int main(int argc, char const *argv[])
{
    fulltimeemp f(1,"A",2000);
    cout<<"Salary of "<<f.getName()<<" is "<<f.getSalary()<<" per day"<<endl;
    parttimeemp p(2,"B",600);
    cout<<"Wage of "<<p.getName()<<" is "<<p.getWage()<<" per day"<<endl;
    return 0;
}
