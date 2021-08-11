#include<iostream>
using namespace std;

class Shallow{
private:
    int *data;
public:
    void set_data_value(int d){*data=d;}
    int get_data_value(){return *data;}
    //Constructer
    Shallow(int d);
    //Copy Constructer
    Shallow(const Shallow &source);
    //Destructer
    ~Shallow();
};



int main(){
    
}