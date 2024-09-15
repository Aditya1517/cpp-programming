// we can take pointer of any type 
// we can have a base class pointer and derived class object attached to it and you can call only those functions which are present 
// in base class, you can not call the functoins which are defined in derived class though the object is derived class object

// #include<iostream>
// using namespace std;

// class base{
//     public:
//     void fun1(){
//         cout<<"fun1 of base"<<endl;
//     }
// };

// class derived:public base{
//     public:
//     void fun2(){
//         cout<<"fun2 of base"<<endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     derived d;
//     base *p=&d;
//     p->fun1();
//     // p->fun2();  we cannot call fun2 coz this object is in derived class
//     d.fun1();
//     d.fun2();
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Rectangle
// {
//     public:
// 	void area()
// 	{
// 		cout<<"Area of Rectangle"<<endl;
// 	}
	
// };
    
// class Cuboid:public Rectangle
// {
//     public:
// 	void volume()
// 	{
// 		cout<<"Cuboid Volume"<<endl;
// 	}
	
// };
    
// int main()
// {
// 	Cuboid c;
// 	Rectangle *p=&c;
// 	p->area();
// 	// p->volume(); // this function cannot be call	
		      
// 	return 0;
	    
// }


#include<iostream>
using namespace std;

class BasicCar
{
    public:
	void start()
	{
		cout<<"Car Started"<<endl;
	}
	
};
    
class AdvanceCar:public BasicCar
{
    public:
	void playmusic()
	{
		cout<<"Playing Music"<<endl;
	}
	
};
    
int main()
{
	BasicCar b;
	// AdvanceCar *q=&b;
	AdvanceCar a;
	a.start();
	a.playmusic();
	BasicCar *ptr=&a;
	ptr->start();
	// ptr->playmusic(); // this function cannot be called.
	    
}