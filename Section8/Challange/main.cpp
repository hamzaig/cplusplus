#include<iostream>
using namespace std;
int main(){
    //////////////////////////////Solution 1//////////////////////////////
//    const int dollar_value{100};
//    const int quarter_value{25};
//    const int dime_value{10};
//    const int nickel_value{5};
//    
//    int change_amount{};
//    
//    cout<<"Enter Amount in cents: ";
//    cin>>change_amount;
//
//    int balance{},dollar{},quarter{},dime{},nickel{},pennies{};
//    
//    dollar=change_amount/dollar_value;
//    balance=change_amount-dollar*dollar_value;
//    
//    quarter=balance/quarter_value;
//    balance=balance-quarter*quarter_value;
//    
//    dime=balance/dime_value;
//    balance-=dime*dime_value;
//    
//    nickel=balance/nickel_value;
//    balance-=nickel*nickel_value;
//    
//    pennies=balance;
//    
//    cout<<"dollar: "<<dollar<<endl;
//    cout<<"quarter: "<<quarter<<endl;
//    cout<<"dime: "<<dime<<endl;
//    cout<<"nickel: "<<nickel<<endl;
//    cout<<"pennies: "<<pennies<<endl;
    
    
    //////////////////////////////Solution 2//////////////////////////////
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};
    
    int change_amount{};
    
    cout<<"Enter Amount in cents: ";
    cin>>change_amount;

    int balance{},dollar{},quarter{},dime{},nickel{},pennies{};
    
    dollar=change_amount/dollar_value;
    balance=change_amount%dollar_value;
    
    quarter=balance/quarter_value;
    balance=balance%quarter_value;
    
    dime=balance/dime_value;
    balance%=dime_value;
    
    nickel=balance/nickel_value;
    balance%=nickel_value;
    
    pennies=balance;
    
    cout<<"dollar: "<<dollar<<endl;
    cout<<"quarter: "<<quarter<<endl;
    cout<<"dime: "<<dime<<endl;
    cout<<"nickel: "<<nickel<<endl;
    cout<<"pennies: "<<pennies<<endl;
    
    
    
    cout<<endl;
    return 0;
    
}