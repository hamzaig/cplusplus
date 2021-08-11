#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int bredth;
public:
    Rectangle(){length=bredth=1;}
    Rectangle(int l,int b);
    int area();
    int perimeter();
    int getLength(){return length;}
    void setLength(int l){length=l;}
    ~Rectangle();
};
Rectangle::Rectangle(int l,int b){
    length=l;
    bredth=b;
}
Rectangle::area(){
    return length*bredth;
}
Rectangle::perimeter(){
    return 2*(length+bredth);
}
Rectangle::~Rectangle(){
}

int main(){
    Rectangle r(10,20);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    r.setLength(15);
    cout<<r.getLength();
}
