#include<iostream>
using namespace std;

class Base{
private:
    int value;
public:
    Base():value{0}{
        cout<<"Base No Args Constructer"<<endl;
    }
    Base(int x):value{x}{
        cout<<"Base int overloaded constructer "<<value<<endl;
    }
    ~Base(){
        cout<<"Base Destructer Called"<<endl;
    }
};

class Derived : public Base {
private:
    int doubled_value;
public:
    Derived():Base{},doubled_value{0}{
        cout<<"Drived No args constructer"<<endl;
    }
    Derived(int x):Base{x},doubled_value{x*2}{
        cout<<"Drived Int Args constructer "<<doubled_value<<endl;
    }
    ~Derived(){
        cout<<"Derived Destructer Called"<<endl;
    }
};

int main(){
//    Derived d;
    Derived d{100};
}