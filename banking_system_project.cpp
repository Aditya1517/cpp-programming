#include<iostream>
#include<fstream>
#include<cstdlib>  
#include<vector>
#include<map>
using namespace std;

#define min_balance 500;

class InSufficinetFunds{};

class Account{
    private:
        long AccountNumber;
        string FirstName;
        string LastName;
        float balance;
        static long NextAccountNumber;
    public:
        Account(){}
        Account(string fname,string lname,float bal){
            NextAccountNumber++;
            FirstName=fname;
            LastName=lname;
            balance=bal;
        }
        long getAccNo(){
            return AccountNumber;
        }
        string getFirstName(){
            return FirstName;
        }
        string getLastName(){
            return LastName;
        }
        float getBalance(){
            return balance;
        }
        void Deposite(float amount){
            balance=balance+amount;
        }
        void Withdraw(float amount){
            // if(balance-amount<min_balance)
            //     throw InSufficinetFunds();
            balance=balance-amount;
        }
        void setLastAccountNumber(long AccountNumber){
            NextAccountNumber=AccountNumber;
        }
        long getLastAccountNumber(){
            return NextAccountNumber;
        }
        friend ofstream & operator<<(ofstream &ofs,Account A);
        friend ifstream & operator>>(ifstream &ifs,Account A);
        friend ostream & operator<<(ostream &os,Account A);
};

ofstream & operator<<(ofstream &ofs,Account A){
    ofs<<A.AccountNumber<<endl;
    ofs<<A.FirstName<<endl;
    ofs<<A.LastName<<endl;
    ofs<<A.balance<<endl;
    return ofs;
}

ifstream & operator>>(ifstream &ifs,Account A){
    ifs>>A.AccountNumber>>A.FirstName>>A.LastName>>A.balance;
    return ifs;
}

ostream & operator<<(ostream &os,Account A){
    os<<"First Name: "<<A.getFirstName()<<endl;
    os<<"Last Name: "<<A.getLastName()<<endl;
    os<<"Account Number: "<<A.getAccNo()<<endl;
    os<<"Balance: "<<A.getBalance()<<endl;
}

long Account::NextAccountNumber=0;

class bank{
    private:
        map<long,Account> Accounts;
    public:
        bank();
        Account Openaccount(string fname,string lname,float bal){
            ofstream outfile;
            Account account(fname,lname,bal);
            Accounts.insert(pair<long,Account>(account.getAccNo(),account));

            outfile.open("Bank.data", ios::trunc);

            map<long,Account>:: iterator itr;
            for(itr=Accounts.begin();itr!=Accounts.end();itr++){
                outfile<<itr->second<<endl;
            }
            outfile.close();
            return account;
        }
        Account Balance_Enquiry(long accountNumber){
            map<long,Account>::iterator itr=Accounts.find(accountNumber);
            return itr->second;
        }
        Account Deposite(long accountNumber,float amount){
            map<long,Account>::iterator itr=Accounts.find(accountNumber);
            itr->second.Deposite(amount);
            return itr->second;
        }
        Account Withdraw(long accountNumber,float amount){
            map<long,Account>::iterator itr=Accounts.find(accountNumber);
            itr->second.Withdraw(amount);
            return itr->second;
        }
        void CloseAccount(long accountNumber){
            map<long,Account>::iterator itr=Accounts.find(accountNumber);
            cout<<"Account deleted"<<itr->second;
            Accounts.erase(accountNumber);
        }
        void ShowAllAccounts(){
            map<long,Account>::iterator itr;
            for(itr=Accounts.begin();itr!=Accounts.end();itr++){
                cout<<"Account "<<itr->first<<endl<<itr->second<<endl;
            }
        }
        ~bank();

        Account account;
        ifstream infile("Bank.data");
        
};