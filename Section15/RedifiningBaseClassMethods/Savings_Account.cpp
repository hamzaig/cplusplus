#include "Savings_Account.hpp"
#include <iostream>
using namespace std;
Savings_Account::Savings_Account() : Savings_Account{0.0,0.0}{

}

Savings_Account::Savings_Account(double balance,double int_rate) : Account(balance),int_rate{int_rate}{
    
}

void Savings_Account::deposit(double amount){
    amount += (amount * (int_rate/100));
    Account::deposit(amount);
}

//ostream& operator<<(ostream &os,const Savings_Account &account){
//    os<<"Saving Account Balance : "<<account.balance<<" Intrest Rate : "<<account.int_rate;
//}

