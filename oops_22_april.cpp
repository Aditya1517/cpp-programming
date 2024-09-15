// sum and difference in meter-cetimeters and feet-inches
#include<iostream>
using namespace std;

class dist1{
    private:
    int meter;
    int centimeter;
    public:
    dist1(int m=0,int cm=0){
        meter=m;
        centimeter=cm;
    }
    void setDist(int distance_1){
        cout<<"Enter distacne in meter and centimerter"<<endl;
        cin>>meter>>centimeter;
    }
};

int main(int argc, char const *argv[])
{
    dist1 *d;
    int distance_1;
    d->setDist(distance_1);
    cout<<distance_1<<endl;
    return 0;
}
