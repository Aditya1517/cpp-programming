#include <iostream>

using namespace std;

int main()
{
    int n,i,table;
    cout<<"Enter a number of which you want table:"<<endl;
    cin>>n;
    for(i=1;i<=10;i++){
        table = n*i;
        
        cout<<n<<" X "<<i<<" = "<<table<<endl;
    }

    return 0;
}