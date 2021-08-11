#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include<iostream>
#include<string>
#include "Account.hpp"
using namespace std;
class Checking_Account : public Account{
private:
    static constexpr const char* def_name = "Unamed Checking Account";
    static constexpr const double def_balance = 0.0;
    static constexpr const double per_check_fee = 1.5;
public:
    Checking_Account(string name = def_name,double balance = def_balance);
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
    virtual void print(ostream &os) const override;
    virtual ~Checking_Account() = default;
};

#endif // _CHECKING_ACCOUNT_H_
