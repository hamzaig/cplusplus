#include<iostream>
using namespace std;
class Account{
    friend ostream& operator<<(ostream &os,const Account &account);
public:
    virtual void withdraw(double amount){
        cout<<"Account::Withdraw"<<endl;
    }
    virtual ~Account(){}
};
ostream& operator<<(ostream &os,const Account &account){
    os<<"Account Display";
    return os;
}

class Checking_Account : public Account {
    friend ostream& operator<<(ostream &os,const Checking_Account &account);
public:
    virtual void withdraw(double amount){
        cout<<"Checking_Account::Withdraw"<<endl;
    }
    virtual ~Checking_Account(){}
};
ostream& operator<<(ostream &os,const Checking_Account &account){
    os<<"Checking_Account Display";
    return os;
}


int main(){
    
}