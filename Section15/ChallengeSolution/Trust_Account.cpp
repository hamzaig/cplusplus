#include "Trust_Account.hpp"
using namespace std;
Trust_Account::Trust_Account(string name,double balance,double int_rate)
    :Savings_Account{name,balance,int_rate},num_withdrawls{0}{
    
}

bool Trust_Account::deposit(double amount){
    if(amount>=bonus_threshold){
        amount += bonus_amount;
    }
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount){
    if(num_withdrawls>=max_withdrawls||amount>(balance*max_withdrawls_percent)){
        return false;
    }
    else{
        ++num_withdrawls;
        return Savings_Account::withdraw(amount);
    }
}

void Trust_Account::print(ostream &os) const{
        os.precision(2);
        os<<fixed;
    os<<"[Trust Account: "<<name<<": "<<balance<<", "<<int_rate<<"% Withdrawls : "<<num_withdrawls<<"]";
}

