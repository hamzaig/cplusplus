#include<iostream>
#include<vector>
#include "Mystring.hpp"
using namespace std;
int main(){
    cout<<boolalpha<<endl;
    Mystring larry{"Larry"};
    Mystring Moe{"Moe"};
    
    Mystring stooge = larry;
    larry.display();
    Moe.display();
    cout<<(larry==Moe)<<endl;
    cout<<(stooge==larry)<<endl;
}