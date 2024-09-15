#include<iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
//     if((age<18)&&(age>0)){
//         cout<<"You can not come to my party"<<endl;
//     }
//     else if(age==18){
//         cout<<"You are a kid and you will get kid pass"<<endl;
//     }
//     else{
//         cout<<"You can come to party"<<endl;
//     }

    // 2. Selection control structure: Switch Case statements

    switch (age)
    {
    case 18: 
        cout<<"You are 18"<<endl;
        break;
    case 22: 
        cout<<"You are 22"<<endl;
        break;
    case 2: 
        cout<<"You are 2"<<endl;
        break;

    default:
    cout<<"No special cases"<<endl;
        break;
    }

    return 0;
}
