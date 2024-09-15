#include<iostream>
#include<cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    // strings are created using two methods 
    // 1. using char array
    // char a[]="hello";
    // cout<<"Lenght of the string is "<<strlen(a)<<endl; // space is also inclueded while couting the length
    // cout<<a<<endl;
    // char b[]={'h','e','l','l','o','\0','f','f'};
    // cout<<b<<endl;
    // char c[]={65,66,67,68,0,69,70}; // 69=E,70=F
    // cout<<c<<endl;

    // char s[20];
    // cout<<"Enter your name:\n";
    // cin>>s; // this will take first name will not take 2nd name after space 
    // cout<<s<<endl;

    // char p[50];
    // cout<<"Enter your name:\n";
    // cin.getline(p,50); // this will take all words and spaces
    // cout<<p<<endl;
    char s[]="Good ";
    char u[]="Morning";
    char v[10]="";
    strcpy(v,s);
    // strncpy = we can specify how many letters we want to copy from 2nd stirng
    cout<<v<<endl;
    strcat (s,u); // stirng concatination 
    // strncat = we can specify how many letters we want to concatinate from 2nd stirng 
    cout<<s<<endl;
    char s1[20]="programming";
    char s3[20]="programming";
    char s4[20]="Programming";
    char s2[10]="gram";  
    cout<<strstr(s1,s2)<<endl; // this strstr function is use to grab substring from the main string
    cout<<strchr(s1,'g')<<endl;
    cout<<strchr(s1,'r')<<endl; // this is used to find substring from the specific char
    cout<<strrchr(s1,'r')<<endl; // this string will find substring from the RHS 
    cout<<strcmp(s1,s3)<<endl;  // this is use to compare two strings 
    cout<<strcmp(s1,s4)<<endl;
    cout<<strcmp(s1,s2)<<endl;
    char x[20]="235";
    char y[10]="54.78";
    cout<<strtol(x,NULL,10 /*at third place it should be base 10/2/8/...*/)<<endl; // str to long int  (converted to int)
    cout<<strtof(y,NULL)<<endl; // str to float (convertred to float)
    return 0;
}
