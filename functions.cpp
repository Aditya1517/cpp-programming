#include <iostream>
using namespace std;

// float add(float a, float b)
// {
//     float c = a + b;
//     return c;
// }

// float max(float a, float b, float c)
// {
//     if (a > b && a > c)
//     {
//         return a;
//     }
//     else if (b > c)
//     {
//         return b;
//     }
//     else
//     {
//         return c;
//     }
// }

int power(int n, int m)
{
    int pro = 1;
    for (int i = 0; i < m; i++)
    {
        pro = pro * n;
    }
    return pro;
}

// function overloading

int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    float add(float a, float b)
    {
        return a + b;
    }

// function templet :- Function templates are special functions that can operate with generic types. 
//  This allows us to create a function template whose functionality can be adapted to more than one type 
//    or class without repeating the entire code for each type. In C++ this can be achieved using template parameters.

template <class T>
T maxim(T a,T b){
     return a>b?a:b;
}

// default argument 

int add_defalut(int a,int b,int c=0){
    return a+b+c;
}

// call by value :- value of actual parameters are copied in formal parameters and if any changes are done in formal parameters 
//      will not be reflected in actual parameters 

// void swap(int a,int b){  // these are formal parameters 
//     int temp;
//     temp = a;
//     a=b;
//     b=temp;
// }

// pass by address :- though one function can not access the variables of another function 
//      but it is possible to through the pointers and values are relflected in the actual parameters 
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// call by reference :- it works like call by address its also called as inline function in C++
// refrence means its nick name of the function  this can be used only in simple functions
void swap(int &a,int &b){  // these are formal parameters 
    cout<<&a<<" "<<&b<<endl;
    int temp;
    temp = a;
    a=b;
    b=temp;
} 

// return by address 
// int *func(){
//     int *p = new int[5];
//     for (int i = 0; i < 5; i++)
//     {
//         p[i]=5*i;
//         cout<<p<<endl;
//     }
//     return p;
    
// }

// return by refrence :- we can not return refrence of local variable
// int &func(int &x){
//     return x;
// }

// local and globle variables 
// int g=5;
// int x=10;
// void fun()
// {
// 	int a=10;
// 	a++;
//     g++;
    	
// 	cout<<a<<" "<<g<<endl;
// }

// Static Variables
// void fun()
// {
// 	static int s=10;
// 	s++;
	    
// 	cout<<s<<endl;
// }

// recursive function 
// void fun(int n){
//     if(n>0){
//         cout<<n<<endl;
//         cout<<endl;
//         fun(n-1);
//         cout<<endl;
//         cout<<n<<endl;
//     }
// }

// liner search throught an array using functions 
int search(int A[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if (key == A[i]){
            return i;
        }
        
    }
    return 0;
    
}

int main()
{
    // float x,y,z;
    // cout<<"Enter the value of 1st number:"<<endl;
    // cin>>x;
    // cout<<"Enter the value of 2nd number:"<<endl;
    // cin>>y;
    // z = add(x,y);
    // cout<<"Sum is "<<z<<endl;

    // float w,x,y,z;
    // cout<<"Enter the value of 1st number:"<<endl;
    // cin>>w;
    // cout<<"Enter the value of 2nd number:"<<endl;
    // cin>>x;
    // cout<<"Enter the value of 3rd number:"<<endl;
    // cin>>y;
    // z = max(w,x,y);
    // cout<<"Maximum of 3 number is "<<z<<endl;

    // int x,y;
    // cout<<"Enter the value of base:"<<endl;
    // cin>>x;
    // cout<<"Enter the value of power:"<<endl;
    // cin>>y;
    // cout<<y<<" power "<<x<<" is "<<power(x,y)<<endl;

    // cout<<maxim(12,14)<<endl;
	// cout<<maxim(2.3,1.4)<<endl;
	// cout<<maxim(2.3f,5.6f)<<endl;

    // default argument
    // cout<<add_defalut(4,5)<<endl;

    // call by value
    // int a=12;
    // int b=34;
    // swap(a,b);
    // cout<<a<<" "<<b;

    // call by address 
    // int a=12;
    // int b=34;
    // swap(&a,&b);
    // cout<<a<<" "<<b;

    // call  by refrence    
    // int a=12;
    // int b=34;
    // cout<<&a<<" "<<&b<<endl;
    // swap(a,b);
    // cout<<a<<" "<<b;

    // return by address
    // int *q=func();
    // cout<<q<<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<q[i]<<endl;        
    // }
    
    // return by refrence
    // int a=10;
    // func(a)=25;
    // cout<<a<<endl;

    // local and globle variables 
    // cout<<g<<endl;
	// fun();
	    
	// cout<<g<<endl;

    // int x=20;
	// {
	// 	int x=30;
	// 	cout<<x<<endl;
	// }
	    
	// cout<<x<<endl;
	// cout<<::x<<endl;

    // // Static Variables
    // fun();
	// fun();

    // recursive function 
    // fun(5);

    // liner search throught an array using functions
    int A[]={1,2,3,4,5,6,7,8,9};
    int k;
    cout<<"Enter the key you want search:"<<endl;
    cin>>k;
    int index=search(A,9,k);
    cout<<"The index of "<<k<<" is "<<index<<endl;

    return 0;
}