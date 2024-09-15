// we can not access private and proctected members of class, outside the class upon the object for that we have to use friend funtion
// friend function is a globle function outside the class which can acess all the members of class upon object

// #include<iostream>
// using namespace std;

// for class to access members of this class
// class ans;
// class test{
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     int c;
//     friend void fun();
//     friend ans;
// };

// void fun(){
//     test t;
//     t.a=10;
//     t.b=20;
//     t.c=30;
// }

// one class can not access private and protected members of another of class upon the object, to do it we have to declare
// that class as a friend inside other class 
// class ans{
//     public:
//     test m;
//     void run(){
//         m.a=10;
//         m.b=20;
//         m.c=30;
//     }
// };


// Static Members :- static members belongs to a class and does not belong to an object but all object can share it 
// when you have static member inside the class you must declare it outside the class using scope resolution 
// and they can be accessed using object as well as class name 
// static data functions can access only static data members
// 1. static members can be used as a counter 
// 2. static members can be used as shared memory 
// 3. static members can provide info about class 

// class test{
//     public:
//     int a;
//     static int count;
//     test(){
//         a=10;
//         count++;
//     }
//     static int getCount(){
//         return count;
//     }
// };

// int test::count=0;

// int main(){
//     test t1,t2;
// 	cout<<t1.count<<endl;
// 	cout<<t2.count<<endl;
// 	t1.count=25;
// 	cout<<t2.count<<endl;
// 	cout<<test::count<<endl;
//     cout<<test::getCount()<<endl;
// 	cout<<t1.getCount()<<endl;
// }

// example 1
// class innova{
//     public:
//     static int price;
//     static int getPrice(){
//         return price;
//     }
// };

// int innova::price=20;
// int main(int argc, char const *argv[])
// {
//     innova c1,c2,c3;
//     cout<<c1.getPrice()<<endl;
//     cout<<c2.getPrice()<<endl;
//     cout<<innova::price<<endl;
//     return 0;
// }

// example 2
// class student{
//     public:
//     int rollNo; // non static member
//     string Name;
//     static int addNo;
//     student(string n){
//         addNo++;
//         rollNo=addNo;
//         Name=n;
//     }

//     void display(){
//         cout<<"Name is"<<Name<<" RollNo is "<<rollNo<<endl;
//     }
// };
// int student::addNo=0;

// int main(int argc, char const *argv[])
// {
//     student s1("john");
//     student s2("john");
//     student s3("john");
//     student s4("john");
//     student s5("john");
//     student s6("john");
//     s1.display();
//     s6.display();
//     cout<<"Number of addmissions are "<<student::addNo<<endl;
//     return 0;
// }


// inner classes :- class inside the class 
// class outter{
//     class inner{   // as it is by deafault private
//     public:
//         void display(){
//             cout<<"Display of inner"<<endl;
//         }                                    
//     };
    
//     public:
    
//     void fun(){
//         i.display();
//     }
    
//     inner i;
// };

// int main(int argc, char const *argv[])
// {
//     outter t;
//     t.fun();
//     // outter::inner i;   as it is private 
//     return 0;
// }





// if we declare a function as a friend in a class it can access all private , protected and public members of class 

// #include<iostream>
// using namespace std;

// class yours;
// class my{
//     private:
//         int a=10;
//     protected:
//         int b=15;
//     public:
//         int c=20;
//     friend yours;
// };

// class yours{
//     public:
//         my m;
//     void fun(){
//         cout<<m.a<<endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     yours y;
//     y.fun();
//     return 0;
// }


// static members
// static variables occupies memoery only once

// #include<iostream>
// using namespace std;

// class test{
//     private:
//         int a;
//         int b;
//     public:
//         static int count;
//         test(){
//             a=10;
//             b=10;
//             count++;
//         }
// };
// int test::count=0;

// int main(){
//     test t1;
//     test t2;
//     cout<<t1.count<<endl;
//     cout<<t2.count<<endl;
//     cout<<test::count<<endl;
//     return 0;
// }



// static member function

// #include<iostream>
// using namespace std;
    
// class Test
// {
//     public:
//     int a;
//     static int count;
//     Test()
//     {
// 	    a=10;
//         count++;
//     }
            
//     static int getCount()
//     {
// 	    return count;
//     }
    
// };
    
// int Test::count=0;

// int main()
// {
//     cout<<Test::getCount()<<endl;
// 	Test t1,t2;
// 	cout<<Test::getCount()<<endl;  // calling upon class  
// 	cout<<t1.getCount()<<endl;  // calling upon object 
// 	return 0;  
// }

// Static Members :- static members belongs to a class and does not belong to an object but all object can share it 
// when you have static member inside the class you must declare it outside the class using scope resolution 
// and they can be accessed using object as well as class name 
// static data functions can access only static data members
// 1. static members can be used as a counter 
// 2. static members can be used as shared memory 
// 3. static members can provide info about class 


// for inner classes we must create object of inner class after defination 
// inner class can not access members of outer class 
// but in inner classes we can access static members 
#include<iostream>
using namespace std;
    
class Outer
{
	class Inner
    {
	public:
	void display()
	{
	cout<<"Display of Inner"<<endl;
	}
	
};

    public:
	void fun()
	{
		i.display();
	}
	                
    Inner i;
    
};
    
int main()
{
	Outer::Inner i;
}