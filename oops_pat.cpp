// // Write a C++ program using class and object to find the unique elements in an array.
// #include<iostream>
// using namespace std;

// class unique{
//     public:
//     int a[100];
//     char b;
//     void array_in(){
//         for (int i = 0; i <=5; i++)
//         {
//             cin>>a[i];
//         }        
//     }
//     char dispaly(){
//         b=a[0];
//         for (int i = 0; i <= 5; i++)
//         {
//             if (b==a[i]){
//                 continue;
//             }
//             else{
//                 cout<<b<<endl;
//             }
//         }
//         return b;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     unique q;
//     q.array_in();
//     q.dispaly();
//     return 0;
// }

#include<iostream>
using namespace std;
class uniq{
    public:
    int n;
    int arr[7];
    void inputN(){
        cin>>n;
    }

    void arrInput(){
        for(int h=0;h<7;h++){
            cin>>arr[h];
        }
    }
    void uniqueElement(){
        int c=1,b,a;
        for(a=0;a<7;a++){
            for(b=0;b<7;b++){
                if(arr[a]==arr[b]&&a!=b){
                    break;
                }
            }
            if(b==7){
                cout<<arr[a]<<endl;
                c++;
            }
        }
    }

};
int main(){
    uniq u;
    u.inputN();
    u.arrInput();
    u.uniqueElement();
    return 0;
}