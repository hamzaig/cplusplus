#include<iostream>
#include "Savings_Account.hpp"
using namespace std;

int main(){
    cout<<"======Account Class"<<endl;
    Account a1{1000};
    cout<<a1<<endl;
    
    a1.deposit(100);
    cout<<a1<<endl;
    
    a1.withdraw(200);
    cout<<a1<<endl;
    
    a1.withdraw(20000);
    cout<<a1<<endl;
    
    cout<<"=======Saving Account"<<endl;
    Savings_Account s1{1000,5};
    cout<<s1<<endl;
    
    s1.deposit(1000);
    cout<<s1<<endl;
    
    s1.withdraw(500);
    cout<<s1<<endl;
    
    s1.withdraw(10000);
    cout<<s1<<endl;
}