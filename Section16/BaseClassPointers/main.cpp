#include<iostream>
#include<vector>
using namespace std;
class Account{
    
};
class Checking : public Account {
    
};
class Savings : public Account {
    
};
class Trust : public Account {
    
};
int main(){
    cout<<"========= Pointer ======="<<endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();
    
    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);
}