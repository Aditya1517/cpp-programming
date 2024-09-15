// exceptoin handling construct

// #include<iostream>
// using namespace std;

// int main(){
//     int a=10,b=0,c;
//     try{
//         if(b==0){
//             throw 1;
//         }
//         else{
//             c=a/b;
//             cout<<c<<endl;
//         }
//     }
//     catch(int d){
//         cout<<"Division by zero "<<d<<endl;
//     }
//     cout<<"BYE"<<endl;
//     return 0;
// }




// throw and catch between fucntions 

// #include<iostream>
// using namespace std;

// int divide(int a,int b){
//     if(b==0){
//         throw 1;
//     }
//     else{
//         return a/b;
//     }
// }

// int main(){
//     int x=10,y=0,z;
//     try{
//         z=divide(x,y);
//         cout<<z<<endl;
//     }
//     catch(int d){
//         cout<<"Division by zero "<<d<<endl;
//     }
//     cout<<"BYE"<<endl;
//     return 0;
// }



// all about throw 
// we can throw any datatype 

// we can throw double aslo 
// #include<iostream>
// using namespace std;

// int main(){
//     int a=10,b=0,c;
//     try{
//         if(b==0){
//             throw 1.5;
//         }
//         else{
//             c=a/b;
//             cout<<c<<endl;
//         }
//     }
//     catch(double d){
//         cout<<"Division by zero "<<d<<endl;
//     }
//     cout<<"BYE"<<endl;
//     return 0;
// }


// we can throw string also 

// #include<iostream>
// using namespace std;

// int main(){
//     int a=10,b=0,c;
//     try{
//         if(b==0){
//             throw string("Division by zero");
//         }
//         else{
//             c=a/b;
//             cout<<c<<endl;
//         }
//     }
//     catch(string d){
//         cout<<"Division by zero "<<d<<endl;
//     }
//     cout<<"BYE"<<endl;
//     return 0;
// }


// even we can throw objects of class 

// #include<iostream>
// using namespace std;

// class MyException: exception
// {
        
// };
    
// int division(int a,int b)throw(MyException)  // this declares that it is throwing something 
//                     // throw() // this means it is not throwing anything and we have to erase the below code 
// {
// 	if(b==0)
// 	throw MyException();
// 	return a/b;
// }
    
// int main()
// {
// 	int x=10,y=2,z;
// 	try
// 	{
// 		z=division(x,y);
// 		cout<<z<<endl;
// 	}
// 	catch(MyException e)
// 	{
// 	    cout<<"Division by Zero"<<endl;
// 	}
	        
// 	cout<<"Bye"<<endl;
	    
// }




// all about catch

// we can have multiple catch blocks for each type of data 
// also we can have catch bolck for all type of exception  and we can denote it by  "catch(...)" and we call it as 
// catch all and it must be the last cathc block 
// we can have try bolck inside try block 
// and for base class and derived class catch block for derived class must be written first 
// and then catch block for base class 

// #include<iostream>
// using namespace std;

// int main(){
//     try{
//         throw 'a';
//     }
//     catch(int e){
//         cout<<"Int catch"<<endl;
//     }
//     catch(double e){
//         cout<<"Double catch"<<endl;
//     }
//     catch(char e){
//         cout<<"Char catch"<<endl;
//     }
//     catch(...){
//         cout<<"All catch"<<endl;
//     }
// }


// for class in inheritance 

#include<iostream>
using namespace std;
    
class MyException1: exception
{
        
};
    
class MyException2:public MyException1
{
        
};
    
int main()
{
	try
	{
		throw MyException1();
	}
	        
	catch(MyException2 e)
	{
		cout<<"Int Catch"<<endl;
    }
        	
	catch(MyException1 e)
	{
	    cout<<"Double Catch"<<endl;
	}
	        
	catch(...)
	{
		cout<<"All Catch"<<endl;
	}
	        
}