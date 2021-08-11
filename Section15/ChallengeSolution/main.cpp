#include<iostream>
#include<vector>
#include<string>
#include "Account.hpp"
#include "Savings_Account.hpp"
#include "Checking_Account.hpp"
#include "Trust_Account.hpp"
#include "Account_Util.hpp"
using namespace std;
int main(){
    
    
    
//    Account joe;

//    Checking_Account c;
//    cout<<c<<endl;
//    
//    Savings_Account s("Frank",5000,2.6);
//    cout<<s<<endl;
    
    Account *ptr = new Trust_Account("Leo",10000,2.6);
    cout<<*ptr<<endl;
    ptr->deposit(1000);
    cout<<*ptr<<endl;
    
    
    
    
    
    
//    cout.precision(2);
//    cout<<fixed;   
//    
//    
//    //Accounts Class
//    vector<Account> accounts;
//    accounts.push_back(Account{});
//    accounts.push_back(Account{"Larry"});
//    accounts.push_back(Account{"Moe",2000});
//    accounts.push_back(Account{"Curly",5000});
//    cout<<endl;
//    display(accounts);
//    cout<<endl;
//    deposit(accounts,1000);
//    cout<<endl;
//    withdraw(accounts,2000);
//    cout<<endl;
//    cout<<endl;
//    cout<<endl;
//    
//    
//    
//    
//    //savings
//    vector<Savings_Account> sav_account;
//    sav_account.push_back(Savings_Account{});
//    sav_account.push_back(Savings_Account{"Superman"});
//    sav_account.push_back(Savings_Account{"Batman",2000});
//    sav_account.push_back(Savings_Account{"Wonderwomen",5000,5});
//    cout<<endl;
//    display(sav_account);
//    cout<<endl;
//    deposit(sav_account,1000);
//    cout<<endl;
//    withdraw(sav_account,2000);
//    cout<<endl;
//    cout<<endl;
//    cout<<endl;
//    
//    
//    vector<Checking_Account> check_accounts;
//    check_accounts.push_back(Checking_Account{});
//    check_accounts.push_back(Checking_Account{"Krik"});
//    check_accounts.push_back(Checking_Account{"Spack",2000});
//    check_accounts.push_back(Checking_Account{"Spack",5000});
//    cout<<endl;
//    display(check_accounts);
//    cout<<endl;
//    deposit(check_accounts,1000);
//    cout<<endl;
//    withdraw(check_accounts,2000);
//    cout<<endl;
//    cout<<endl;
//    cout<<endl;
//    
//    
//    vector<Trust_Account> trust_accounts;
//    trust_accounts.push_back(Trust_Account{});
//    trust_accounts.push_back(Trust_Account{"Athos",10000,5.0});
//    trust_accounts.push_back(Trust_Account{"Porthos",20000,4.0});
//    trust_accounts.push_back(Trust_Account{"Aramis",30000});
//    cout<<endl;
//    display(trust_accounts);
//    cout<<endl;
//    deposit(trust_accounts,1000);
//    cout<<endl;
//    withdraw(trust_accounts,3000);
//    cout<<endl;
//    cout<<endl;
//    cout<<endl;
//    
//    for(int i=0;i<5;i++){
//            withdraw(trust_accounts,1000);
//    }
    
    return 0;
}