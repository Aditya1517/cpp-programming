// writing in a file
// while wrting in a file if file is not there file will be created

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     ofstream ofs("My.txt",ios::trunc);
//     // by default ios is trucn it means all existing data will be cleard first
//     // we use ios as app for appending data that means it existing data will be as it is
//     ofs<<"John"<<endl;
//     ofs<<25<<endl;
//     ofs<<"cs"<<endl;
//     ofs.close();
//     return 0;
// }

// reading from a file
// for reading from file , file must be there

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     ifstream ifs("My.txt");
//     string name;
//     int roll;
//     string branch;

//     ifs>>name>>roll>>branch;
//     ifs.close();

//     cout<<name<<endl;
//     cout<<roll<<endl;
//     cout<<branch<<endl;
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;

// class student{
//     private:
//         string name;
//         int roll;
//         string branch;
//     public:
//         student(string n,int r,string b){
//             name=n;
//             roll=r;
//             branch=b;
//         }

//         friend ofstream & operator<<(ofstream &ofs,student s);
//         friend ifstream & operator>>(ifstream &ifs,student s);
//         friend ostream & operator<<(ostream &os,student s);
// };

// ofstream & operator<<(ofstream &ofs,student s){
//     ofs<<s.name<<endl;
//     ofs<<s.roll<<endl;
//     ofs<<s.branch<<endl;
//     return ofs;
// }

// ifstream & operator>>(ifstream &ifs,student s){
//     ifs>>s.name;
//     ifs>>s.roll;
//     ifs>>s.branch;
//     return ifs;
// }

// ostream & operator<<(ostream &os,student s){
//     os<<"name:- "<<s.name<<endl;
//     os<<"roll:- "<<s.roll<<endl;
//     os<<"branch:- "<<s.branch<<endl;
//     return os;
// }

// int main(int argc, char const *argv[])
// {
//     ofstream ofs("Test.txt");
//     student s1("Mike",35,"CS");
//     ofs<<s1;
//     ofs.close();
//     ifstream ifs("Test.txt");
//     ifs>>s1;
//     cout<<s1;
//     return 0;
// }

// practice exerise

#include<iostream>
#include<fstream>
using namespace std;

class Item{
    private:
        string name;
        int price;
        int quantity;
    public:
        Item(){};
        Item(string n,int p,int q){
            name=n;
            price=p;
            quantity=q;
        }
        friend ofstream &operator<<(ofstream &ofs,Item &i);
        friend ifstream &operator>>(ifstream &ifs,Item &i);
        friend ostream &operator<<(ostream &os,Item &i);
};

ofstream &operator<<(ofstream &ofs,Item &i){
    ofs<<i.name<<endl;
    ofs<<i.price<<endl;
    ofs<<i.quantity<<endl;
}

ifstream &operator>>(ifstream &ifs,Item &i){
    ifs>>i.name;
    ifs>>i.price;
    ifs>>i.quantity;
}

ostream &operator<<(ostream &os,Item &i){
    os<<"Name of Item is "<<i.name<<endl;
    os<<"Price of Item is "<<i.price<<endl;
    os<<"Quantity of Item is "<<i.quantity<<endl;
}

int main(int argc, char const *argv[])
{
    int n,price,quantity;
    string name;

    cout<<"Enter number of items"<<endl;
    cin>>n;
    Item *list[n];

    cout<<"Enter details of all items"<<endl;

    for(int i=0;i<n;i++){
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter price"<<endl;
        cin>>price;
        cout<<"Enter quantity"<<endl;
        cin>>quantity;
        list[i]=new Item(name,price,quantity);
    }

    ofstream ofs("Item.txt");

    for(int i=0;i<n;i++){
        ofs<<*list[i];
    }

    Item item;

    ifstream ifs("Item.txt");
    for(int i=1;i<4;i++){
        ifs>>item;
        cout<<"Item "<<i<<" "<<item; 
    }

    return 0;
}