// STL :- standard template library

// using vector class
// vector is array only bt its size is not fixed , it is a selfmanaged vector

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<int> v={2,3,4,55};  // in vector we can mention the size of the vector , otherwise vecotr of default size of 16 created
//     v.push_back(20);
//     v.push_back(53);
// push_back() is for inserting at the end

// using for each loop
//     cout<<"using for each loop"<<endl;
//     for(int x:v){
//         cout<<x<<endl;
//     }

// using iterater class
// iterater is like pointer so we have to use derefrancing operator
// by using iterater i can modify the values also
//     cout<<"using iterater class"<<endl;

//     vector<int>::iterator itr;
//     for(itr=v.begin();itr != v.end();itr++){
//         cout<<*itr<<endl;
//     }

//     v.pop_back();
// pop_back() is for deleting from the end

// using for each loop
//     cout<<"using for each loop"<<endl;
//     for(int x:v){
//         cout<<x<<endl;
//     }

// using iterater class
// iterater is like pointer so we have to use derefrancing operator
//     cout<<"using iterater class"<<endl;

//     vector<int>::iterator iter;
//     for(iter=v.begin();iter != v.end();iter++){
//         cout<<*iter<<endl;
//     }

//     return 0;
// }

// using list class
// it is linked list , we can inster from both side i.e from front and back aslo

// #include<iostream>
// #include<list>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     list<int> v={2,3,4,55,};
//     v.push_back(20);
//     v.push_back(53);
// push_back() is for inserting at the end

// using for each loop
//     cout<<"using for each loop"<<endl;
//     for(int x:v){
//         cout<<x<<endl;
//     }

// using iterater class
// iterater is like pointer so we have to use derefrancing operator
// by using iterater i can modify the values also
//     cout<<"using iterater class"<<endl;

//     list<int>::iterator itr;
//     for(itr=v.begin();itr != v.end();itr++){
//         cout<<*itr<<endl;
//     }

//     v.pop_back();
// pop_back() is for deleting from the end

// using for each loop
//     cout<<"using for each loop"<<endl;
//     for(int x:v){
//         cout<<x<<endl;
//     }

// using iterater class
// iterater is like pointer so we have to use derefrancing operator
//     cout<<"using iterater class"<<endl;

//     list<int>::iterator iter;
//     for(iter=v.begin();iter != v.end();iter++){
//         cout<<*iter<<endl;
//     }

//     return 0;
// }

// using forward list class
// it is linked list in forward direction only

// #include<iostream>
// #include<forward_list>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     forward_list<int> v={2,3,4,55,};
//     v.push_front(20);
//     v.push_front(53);
// push_back() is for inserting at the end

// using for each loop
//     cout<<"using for each loop"<<endl;
//     for(int x:v){
//         cout<<x<<endl;
//     }

// using iterater class
// iterater is like pointer so we have to use derefrancing operator
// by using iterater i can modify the values also
//     cout<<"using iterater class"<<endl;

//     forward_list<int>::iterator itr;
//     for(itr=v.begin();itr != v.end();itr++){
//         cout<<*itr<<endl;
//     }

//     v.pop_front();
// pop_back() is for deleting from the end

// using for each loop
//     cout<<"using for each loop"<<endl;
//     for(int x:v){
//         cout<<x<<endl;
//     }

// using iterater class
// iterater is like pointer so we have to use derefrancing operator
//     cout<<"using iterater class"<<endl;

//     forward_list<int>::iterator iter;
//     for(iter=v.begin();iter != v.end();iter++){
//         cout<<*iter<<endl;
//     }

//     return 0;
// }

// using set class
// set is collection of unique elements

// #include<iostream>
// #include<set>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     set<int> v={2,3,4,55,2};
//     v.insert(20);
//     v.insert(53);
// push_back() is for inserting at the end

// using for each loop
//     cout<<"using for each loop"<<endl;
//     for(int x:v){
//         cout<<x<<endl;
//     }

// using iterater class
// iterater is like pointer so we have to use derefrancing operator
// we can not modify elements of set
//     cout<<"using iterater class"<<endl;

//     set<int>::iterator itr;
//     for(itr=v.begin();itr != v.end();itr++){
//         cout<<*itr<<endl;
//     }

// v.pop_front();
// pop_back() is for deleting from the end

// using for each loop
//     cout<<"using for each loop"<<endl;
//     for(int x:v){
//         cout<<x<<endl;
//     }

// using iterater class
// iterater is like pointer so we have to use derefrancing operator
//     cout<<"using iterater class"<<endl;

//     set<int>::iterator iter;
//     for(iter=v.begin();iter != v.end();iter++){
//         cout<<*iter<<endl;
//     }

//     return 0;
// }

// map contains key value pair

// #include<iostream>
// #include<map>
// using namespace std;

// int main()
// {
// 	map<int,string> m;
// 	m.insert(pair<int,string>(1,"john"));
// 	m.insert(pair<int,string>(2,"ravi"));
// 	m.insert(pair<int,string>(3,"khan"));
// 	map<int,string>::iterator itr;

// 	for(itr=m.begin();itr!=m.end();itr++)
// 	{
// 	    cout<<itr->first<<" "<<itr->second<<endl;
// 	}
// 	map<int,string>::iterator itr1;
// 		itr1=m.find(2);

// 	cout<<"Value Found is"<<endl;
// 	cout<<itr1->first<<" "<<itr1->second<<endl;

// }

// practice exerice

// #include<iostream>
// #include<fstream>
// #include<vector>
// using namespace std;

// class Item{
//     private:
//         string name;
//         int price;
//         int quantity;
//     public:
//         Item(){};
//         Item(string n,int p,int q){
//             name=n;
//             price=p;
//             quantity=q;
//         }
//         friend ofstream &operator<<(ofstream &ofs,Item &i);
//         friend ifstream &operator>>(ifstream &ifs,Item &i);
//         friend ostream &operator<<(ostream &os,Item &i);
// };

// ofstream &operator<<(ofstream &ofs,Item &i){
//     ofs<<i.name<<endl;
//     ofs<<i.price<<endl;
//     ofs<<i.quantity<<endl;
// }

// ifstream &operator>>(ifstream &ifs,Item &i){
//     ifs>>i.name;
//     ifs>>i.price;
//     ifs>>i.quantity;
// }

// ostream &operator<<(ostream &os,Item &i){
//     os<<"Name of Item is "<<i.name<<endl;
//     os<<"Price of Item is "<<i.price<<endl;
//     os<<"Quantity of Item is "<<i.quantity<<endl;
// }

// int main(int argc, char const *argv[])
// {
//     int n,price,quantity;
//     string name;

//     cout<<"Enter number of items"<<endl;
//     cin>>n;
//     vector <Item *> list;

//     cout<<"Enter details of all items"<<endl;

//     for(int i=0;i<n;i++){
//         cout<<"Enter name"<<endl;
//         cin>>name;
//         cout<<"Enter price"<<endl;
//         cin>>price;
//         cout<<"Enter quantity"<<endl;
//         cin>>quantity;
//         list.push_back(new Item(name,price,quantity));
//     }

//     ofstream ofs("Item1.txt");
//     vector<Item *> :: iterator itr;

//     for(itr=list.begin();itr!=list.end();itr++)
//     {
//         ofs<<**itr;
//     }

//     Item item;

//     ifstream ifs("Item1.txt");
//     for(int i=1;i<4;i++){
//         ifs>>item;
//         cout<<"Item "<<i<<" "<<item;
//     }

//     return 0;
// }



