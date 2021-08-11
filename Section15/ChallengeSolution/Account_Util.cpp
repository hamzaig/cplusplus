#include "Account_Util.hpp"
#include<iostream>
using namespace std;

void display(const vector<Account*>& account){
    cout<<"==========Accounts=============="<<endl;
    for(const auto acc:account){
        cout<<*acc<<endl;
    }
}

void deposit(vector<Account*>& account,double amount){
    cout<<"==========Depositing to Accounts=============="<<endl;
    for(auto acc:account){
        if(acc->deposit(amount)){
            cout<<"Deposited "<<amount<<" to"<<*acc<<endl;
        }
        else{
            cout<<"Failed Deposit of "<<amount<<" to"<<*acc<<endl;
        }
    }
}

void withdraw(vector<Account*>& account,double amount){
    cout<<"==========Withdrawing from Accounts=============="<<endl;
    for(auto acc:account){
        if(acc->withdraw(amount)){
            cout<<"Withdrew "<<amount<<" From"<<*acc<<endl;
        }
        else{
            cout<<"Failed Withdrawl of"<<amount<<" From"<<*acc<<endl;
        }
    }
}


