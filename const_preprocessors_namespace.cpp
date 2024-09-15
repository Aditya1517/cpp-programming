// uses of constnat 

// 1st use of constant 

// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     const int x=10;
//     // x++; we can not do this as it is constant 
//     cout<<x<<endl;
//     return 0;
// }


// 2nd use 

// #include<iostream>
// using namespace std;

// int main(){
//     const int x=10;
//     const int *ptr=&x;
//     // ++*ptr;  can not modify constant 
//     cout<<*ptr<<" "<<x<<endl;
// }


// 3rd use 

// #include<iostream>
// using namespace std;

// int main(){
//     int x=10;
//     int *const ptr=&x;
//     ++ *ptr;
    
//     int y=30;
//     //ptr = &y; can not access this as pointer is constant 
    
     
//     cout<<*ptr<<" "<<x<<endl;
// }


// 4th use 

// #include<iostream>
// using namespace std;

// int main(){
//     const int x=10;
//     const int *const ptr=&x;
    
//     //++ *ptr;  can not do this also 
    
//     int y=30;
//     //ptr = &y; can not access this as pointer is constant 
    
     
//     cout<<*ptr<<" "<<x<<endl;
// }


// 5th use 

// #include<iostream>
// using namespace std;

// class demo{
//     public:
//         int x=10;
//         int y=20;
        
//         void display() const
//         {
//             // x++; when a function is delcared as constant we can not modify members of class 
//             cout<<x<<" "<<y<<endl;
//         }
// };

// int main(){
//     demo d;
//     d.display();
// }


// 6th use 

// #include<iostream>
// using namespace std;

// void fun(const int &a,int &b){
//     cout<<a<<" "<<b<<endl;
//     // a++;  now we can not modify this a 
// }

// int main(){
//     int x=10;
//     int y=20;
//     fun(x,y);
//     cout<<x<<" "<<y<<endl;
// }


// preprocessor :- symbolic constants 
// they are used for replacing the content before the compilataion process starts 

// #include<iostream>
// using namespace std;

// #define pi 3.14
// #define c cout
// #define s(x) (x*x)
// #define m(y) #y  // this will be converted into string 

// int main(){
//     c<<pi<<endl;
//     c<<s(5)<<endl;
//     c<<m(hello);
// }
