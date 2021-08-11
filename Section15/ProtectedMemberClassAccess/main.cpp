#include<iostream>
using namespace std;

class Base{
//Note frieds of Base class have access to all
public:
    int a{0};
    void display(){cout<<a<<" "<<b<<" "<<c<<endl;}
protected:
    int b{0};
private:
    int c{}; 
};

class Derived : public Base {
//  Note friends of Derived have access to only what derived has access to  
//a will be public
//b will be protected
//c will not accessible
public:
    void access_base_members(){
        a=100;//ok
        b=200;//ok
//        c=300;//not accessible
    }
};


int main(){
    
    cout<<"=== Base member access from base objects ==="<<endl;
    Base base;
    base.a=100;
//    base.b=200;
//    base.c=300;

    cout<<"=== Base member access from derived objects ==="<<endl;
    Derived d;
    d.a=100;//ok
//    d.b=200;//error
//    d.c=300;//error

    return 0; 
}