// function overriding :- redefining the function of parent class again in child class and when we call them each on of them will be 
// called for separatly  


// #include<iostream>
// using namespace std;

// class parent{
//     public:
//     void display(){
//         cout<<"display of parent"<<endl;
//     }
// };

// class child:public parent{
//     public:
//     void dispaly(){
//         cout<<"display of child"<<endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     parent p;
//     p.display();
//     child c;
//     c.dispaly();
//     return 0;
// }



// virtual functions :- base class pointer and derived class object ; base calss having one function and derived class function 
// overriding that function and when we call the function base class function will be called 
// function is called based on pointer used here 
// for derived function to be called we have to use key word "virtual"

// class parent{
//     public:
//     virtual void display(){
//         cout<<"display of parent"<<endl;
//     }
// };

// class child:public parent{
//     public:
//     void dispaly(){
//         cout<<"display of child"<<endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     child c;
//     c.dispaly();
//     parent *ptr=&c;
//     ptr-> display();  // for this, output should be display of child
//     return 0;
// }

// #include<iostream>
// using namespace std;
    
// class BasicCar
// {
//     public:
// 	virtual void start()
// 	{
// 		cout<<"BasicCar Started"<<endl;
// 	}
	
// };
    
// class AdvanceCar:public BasicCar
// {
//     public:
// 	void start()
// 	{
// 		cout<<"AdvanceCar Started"<<endl;
// 	}
	
// };
    
// int main()
// {
// 	BasicCar *ptr=new AdvanceCar();
// 	ptr->start();
	    
// }



// polymrophism : in java it called as dynamic method dispatch
// #include<iostream>
// using namespace std;
    
// class Car
// {
//     public:
// 	virtual void start()
// 	{
// 		cout<<"Car Started"<<endl;
// 	}
	
// };
    
// class Innova:public Car
// {
//     public:
// 	void start()
// 	{
// 		cout<<"Innova Started"<<endl;
// 	}
	
// };
    
// class Swift:public Car
// {
//     public:
// 	void start()
//     {
// 		cout<<"Swift Started"<<endl;
// 	}
	
// };
    
// int main()
// {
// 	Car *ptr=new Innova();
// 	ptr->start();
// 	ptr=new Swift();
// 	ptr->start();
	    
// }

// Abstract Function
// If a member function is not having a body then it is an abstract
// function.
// Example:
// class Test
// {
//  public:
//  void fun(); // body is not defined outside
// };
// Abstract Class
// If a class is having an abstract function then class becomes
// abstract.
// If a class is having pure virtual function then it becomes abstract.
// We can declare pointer of abstract class
// We can create object of abstract class but cannot call undefined
// functions.
// Abstract classes are useful for achieving polymorphism.
// Can we overriding private function?
// you can override but can't achieve polymorphism because private
// members cannot be called on object.
// If a base class has both concrete functions and pure
// virtual functions then can we create an object of that
// base class?
// Yes you can create the object of a class but cannot call undefined
// functions.. 

// #include<iostream>
// using namespace std;

// class Base
// {
//     public:
//     virtual void fun1()=0;
//     virtual void fun2()=0;
// };
    
// class Derived :public Base
// {
//     public:
//     void fun1()
//     {
//         cout<<"fun1 of Derived"<<endl;
//     }  
                
//     void fun2()
//     {
//         cout<<"fun2 of Derived"<<endl;
//     }

// };
    
// int main()
// {
//     Derived d;
//     d.fun1();
//     d.fun2();

// }



// function overriding
// function overriding is basically redefining of a function present in parent class, in a child class 
// #include<iostream>
// using namespace std;

// class parent{
//     public:
//         void display(){
//             cout<<"display of parent"<<endl;
//         }
// };

// class child:public parent{
//     public:
//         void display(){
//             cout<<"display of child"<<endl;
//         }
// };

// int main(){
//     parent p;
//     p.display();
//     child c;
//     c.display();
//     return 0;
// }


//  virtual funtion 
// function is called based on pointer not on object
// here parent's fun will called ; in c++ if call a donkey as a horse, it will run like a horse 
// that's y there is a need of virtual function, to call donkey as donkey only 
// by virtual keyword only that function will be called that we want to call after assigning it 

// #include<iostream>
// using namespace std;

// class parent{
//     public:
//         void display(){
//             cout<<"display of parent"<<endl;
//         }
// };

// class child:public parent{
//     public:
//         void display(){
//             cout<<"display of child"<<endl;
//         }
// };

// int main(){
//     parent *p=new child();
//     p->display();
//     return 0;
// }

// now by using virtual function
// when a base class funtion is declared as virtual then the functoin 
// call is based will not be based on pointer it will be based on object  
// #include<iostream>
// using namespace std;

// class parent{
//     public:
//         virtual void display(){
//             cout<<"display of parent"<<endl;
//         }
// };

// class child:public parent{
//     public:
//         void display(){
//             cout<<"display of child"<<endl;
//         }
// };

// int main(){
//     parent *p=new child();
//     p->display();
//     return 0;
// }

 

// to achive run time polymorphism we need virtual function , over riding 
// and base class pointer and derived class object 
// pure virtual function must be over rided by derived class 
// othervise derived class will be abstract class 
// purpose of pure virtual function is to achive polymorphism 

// #include<iostream>
// using namespace std;

// class car{
//     public:
//         virtual void start()=0;
//         virtual void stop()=0; // these are pure virtual funtion 
// };

// class innova:public car{
//     public:
//         void start(){
//             cout<<"innova started"<<endl;
//         }
//         void stop(){
//             cout<<"innova stoped"<<endl;
//         }
// };

// class swift:public car{
//     public:
//         void start(){
//             cout<<"swift started"<<endl;
//         }
//         void stop(){
//             cout<<"swift stoped"<<endl;
//         }
// };

// int main(){
//     car *c=new innova();
//     c->start();
//     c->stop();
    
//     c=new swift();
//     c->start();
//     c->stop();
//     return 0;
// }


// practice programe

#include<iostream>
using namespace std;

class shape{
    public:
        virtual int area()=0;
        virtual int perimeter()=0;
};

class rectangle:public shape{
    private:
        int lenght;
        int breadth;
    public:
        rectangle(int l=0,int b=0){
            lenght=l;
            breadth=b;
        }
        void setLenght(int l){
            lenght=l;
        }
        int getLenght(){
            return lenght;
        }
        void setBreadth(int b){
            breadth=b;
        }
        int getBreadth(){
            return breadth;
        }
        int perimeter(){
            return 2*(lenght+breadth);
        }
        int area(){
            return lenght*breadth;
        }
};

class circle:public shape{
    private:    
        int radious;
    public:
        circle(int r=0){
            radious=r;
        }
        void setRadious(int r){
            radious=r;
        }
        int getRadious(){
            return radious;
        }
        int perimeter(){
            return 2*3.14*(radious);
        }
        int area(){
            return 2*3.14*(radious*radious);
        }
};

int main(int argc, char const *argv[])
{
    shape *s;
    s=new rectangle(10,5);
    cout<<"Area of of rectangle is "<<s->area()<<endl;
    cout<<"Perimeter of rectangle is "<<s->perimeter()<<endl<<endl;
    s=new circle(7);
    cout<<"Area of of circle is "<<s->area()<<endl;
    cout<<"Perimeter of cirlce is "<<s->perimeter()<<endl;
    return 0;
}