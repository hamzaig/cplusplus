#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include<iostream>
#include<string>
#include<vector>
#include "Account.hpp"
using namespace std;

void display(const vector<Account*> &accounts);
void deposit(vector<Account*> &accounts,double amount);
void withdraw(vector<Account*> &accounts,double amount);


#endif // _ACCOUNT_UTIL_H_
