#include<iostream>
using namespace std;

template<class t>
class Arithametic
{
private:
    t a;
    t b;
public:
    Arithametic(t a,t b);
    t add();
    t sub();
};

template<class t>
Arithametic<t>::Arithametic(t a,t b){
    this->a=a;
    this->b=b;
}

template<class t>
t Arithametic<t>::add(){
    t c;
    c=a+b;
    return c;
}

template<class t>
t Arithametic<t>::sub(){
    t c;
    c=a+b;
    return c;
}

int main(){
    Arithametic<int> a(20,20);
    cout<<a.add()<<endl;
    Arithametic<float> a1(20.3,20.3);
    cout<<a1.add();
}
