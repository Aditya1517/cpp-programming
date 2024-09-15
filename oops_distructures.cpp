#include<iostream>
using namespace std;
    
class Demo
{
	int *p;
    public:
	Demo()
	{
		p=new int[10];
	    cout<<"Constructor of Demo"<<endl;
	}
	        
    ~Demo()
	{
		delete[]p;
	   	cout<<"Destructor of Demo"<<endl;
	}
	
};
    
void fun()
{
	Demo *p=new Demo();
	delete p;
}
// and here object is created in heap(pointer) so we have to delete it and distructure will be called automatically 
    
int main()
{
	fun();
}
// at the end distructure automaticallu called


// when we derived any class from another and when distructure will be called , distructure of derived class
// will be called first and then distructure of base class 
// but when we use pointer of base class and object of deriverd class at that time distructure of base class 
// will be called alone and not distructure of deriverd class 
// for this problem we use virtual distructures

// Virtual Destructor:- it is usefull while runtime polymorphism 
class Base
{
    public:
	virtual ~Base()
	{
	    cout<<"Destructor of Base"<<endl;
	}
	
};
    
class Derived:public Base
{
    public:
	~Derived()
	{
		cout<<"Destructor of Derived"<<endl;
	}
    };
    
    
void fun()
{
	Base *p=new Derived();
	delete p;
}
    
int main()
{
	fun();
}