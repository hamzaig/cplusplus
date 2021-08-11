#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include<iostream>
#include<string>
#include "Account.hpp"
using namespace std;
class Savings_Account : public Account{
private:
    static constexpr const char* def_name = "Unnamed Saving Account";
    static constexpr const double def_balance = 0.0;
    static constexpr const double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    Savings_Account(string name = def_name, double balance = def_balance,double int_rate = def_int_rate);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(ostream &os) const override;
    virtual ~Savings_Account() = default;
};

#endif // _SAVINGS_ACCOUNT_H_
