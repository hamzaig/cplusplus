#include<iostream>
using namespace std;
class Base{
private:
    int value;
public:
    Base() : value{0}{
        cout<<"Base class no args constructer"<<endl;
    }
    Base(int x) : value{x} {
        cout<<"Base class int args constructer"<<endl;
    }
    Base(const Base &other) : value{other.value}{
        cout<<"Base copy Constructer"<<endl;
    }
    Base &operator=(const Base &rhs){
        cout<<"Base Operator ="<<endl;
        if(this==&rhs){
            return *this;
        }
        value = rhs.value;
        return *this;
    }
    ~Base(){
        cout<<"Base Destructer is called"<<endl;
    }
};
class Derived : public Base {
private:
    int doubled_value;
public:
    Derived() :Base{}, doubled_value{0}{
        cout<<"Derived No args constructer called"<<endl;
    }
    Derived(int x) : Base{x},doubled_value{x*2}{
        cout<<"Derived Int Args constructer called"<<endl;
    }
    Derived(const Derived &other) : Base(other),doubled_value{other.doubled_value}{
        cout<<"Derived copy constructer"<<endl;
    }
    Derived &operator=(const Derived &rhs){
        cout<<"Derived copy assignment ="<<endl;
        if(this==&rhs){
            return *this;
        }
        Base::operator=(rhs);
        doubled_value = rhs.doubled_value;
        return *this;
    }
    ~Derived(){
        cout<<"Derived Destructer"<<endl;
    }
};
int main(){
//    Base b{100};//overloaded constructer
//    Base c{b};//copy constructer
//    b = c;//copy assignment

    Derived b{100};//overloaded constructer
    Derived c{b};//copy constructer
    b = c;//copy assignment
}