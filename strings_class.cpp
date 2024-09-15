#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str = "Hello";
    string str2 = "World";
    // cout<<str<<endl;

    // string a;
    // cout<<"Enter a string:"<<endl;
    // cin>>a; // this will take one word only
    // cout<<a<<endl;

    // string b;
    // cout<<"Enter another string:"<<endl;
    // getline(cin,b); // this will take multiple words
    // cout<<b<<endl;

    // cout<<str.length()<<endl;
    // cout<<str.size()<<endl;
    // cout<<str.capacity()<<endl;
    // str.resize(30);
    // cout<<str.capacity()<<endl;
    // cout<<str.max_size()<<endl;

    // if (str.empty()){
    //     cout<<"The string is empty"<<endl;
    // }
    // else{
    //     cout<<"The string is "<<str<<endl;
    // }
    // str.append("World");
    // cout<<str<<endl;
    // str.insert(3,"kk");  // at a certain position 
    // cout<<str<<endl;
    // str.insert(3,"ppaa",3);   // at a certain position but from a string only 1st 3 chars 
    // cout<<str<<endl;
    // str.replace(3,5,"kk"); // 3,5 means from 3 to 5 chars
    // cout<<str<<endl;
    // str.push_back('G'); // only single char can be inserted at the end
    // cout<<str<<endl;
    // str.swap(str2);
    // cout<<str<<endl;
    // cout<<str2<<endl;

    // string a = "how are you";
    // cout<<a.find("are")<<endl;
    // cout<<a.rfind('a')<<endl;
    // cout<<a.substr(4,3)<<endl; // 3,4 means from 3 to 4 chars

    // string b = "Holiday";
    // b[4]='M';
    // cout<<b<<endl;

    
    // iterator
    // string e = "today";
    // string::iterator it;
    // string::reverse_iterator i;
    // for (it=e.begin();it!=e.end();it++){
    //     cout<<*it;
    // }
    // cout<<endl;
    // for (it=e.begin();it!=e.end();it++){
    //     *it=*it-32;
    // }
    // cout<<e<<endl;
    // for (i=e.rbegin();i!=e.rend();i++){
    //     cout<<*i;
    // }
    // cout<<endl;
    // for(int i=0;e[i]!='\0';i++){  // same thing can be done by for loop
    //     cout<<e[i];
    // }
    // differnce between the ASCII values of small and capatial letters is 32 
    // range of ASCII values of capital letter is from 65 to 90

    // change the cases of letters keeping nums as it is 
    string t="WelCome5";
    for (int i=0;t[i]!='\0';i++){
        if (t[i]>=65 && t[i]<=90){
            t[i]=t[i]+32;
        }
        else if (t[i]>=97 && t[i]<=122){
            t[i]=t[i]-32;
        }
        else{
            t[i]=t[i];
        }
    }
    cout<<t<<endl;

    // count the number of vowels,words and consonants 
    string st = "how Many wOrds are there";
    int vowels = 0;
    int words = 1;
    int consonants = 0;
    int nums = 0;
    for (int i=0;st[i]!='\0';i++){
        if (st[i]>=65 && st[i]<=90 && st[i]>=97 && st[i]<=122){
            if (st[i]=='A' || st[i]=='E' || st[i]=='I' || st[i]=='O' || st[i]=='U' || st[i]=='a' || st[i]=='A' || st[i]=='A' || st[i]=='A' || st[i]=='A' ){
            vowels++;
            }
            else if (st[i]==' '){
            words++; 
            }
            else{
            consonants++;
            }
        }
        else{
            nums++;
        }
    }
    cout<<"Number of vowels in the string are "<<vowels<<endl;
    cout<<"Number of words in the string are "<<words<<endl;
    cout<<"Number of consonants in the string are "<<consonants<<endl;
    // cout<<"Number of nums in the string are "<<nums<<endl;

    // programe to find palindrom 
    string str="MADAM";
	string rev="";
	int len=(int)str.length();
	rev.resize(len);
	    
	for(int i=0,j=len-1;i<len;i++,j--)
	{
		rev[i]=str[j];
	}
	rev[len]='\0';
			
	if(str.compare(rev)==0)
		cout<<"Palindrome"<<endl;
	else
		cout<<"Not a Pallindrome"<<endl;

    //  Find username from email address
    string email="john123@gmail.com";
	int i=(int)email.find('@');
	string uname=email.substr(0,i);
	    
	cout<<"User Name is "<<uname<<endl;


    return 0;
}