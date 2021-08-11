#include<iostream>
using namespace std;

class Base{
private:
    int value;
public:
    Base():value{0}{cout<<"Base no args constructer"<<endl;}
    Base(int x):value{x}{cout<<"Base int overloaded constructer"<<endl;}
    ~Base(){cout<<"Base destructer"<<endl;}
};

class Derived : public Base {
    using Base::Base;
private:
    int doubled_value{0};
public:
    Derived():doubled_value{0}{cout<<"Derived no args constructer"<<endl;}
//    Derived(int x):doubled_value{x}{cout<<"Derived int overloaded constructer"<<endl;}
    ~Derived(){cout<<"Derived destructer"<<endl;}
};

int main(){
//    Base b;  
//    Base b{100};
//    Derived d;
    Derived d{1000};
    return 0;
}