#include "Checking_Account.hpp"
#include<iostream>
using namespace std;
Checking_Account::Checking_Account(string name,double balance)
    : Account{name,balance}{
}

bool Checking_Account::withdraw(double amount){
    amount += per_check_fee;
    Account::withdraw(amount);
}

bool Checking_Account::deposit(double amount){
    return Account::deposit(amount);
}


void Checking_Account::print(ostream &os) const{
        os.precision(2);
        os<<fixed;
        os<<"[Checking Account: "<<name<<": "<<balance<<"] ";
}

