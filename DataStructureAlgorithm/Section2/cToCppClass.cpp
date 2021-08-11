#include<iostream>
using namespace std;
class Rectangle
{


public:
    int length;
    int bredth;
    Rectangle(int l,int b){
        length=l;
        bredth=b;
    }
    int area(){
        return bredth*length;
    }
    void changeLength(int l){
        length=l;
    }
};
int main(){
    Rectangle r(10,20);
    cout<<r.area()<<endl;
    r.changeLength(55);
    cout<<r.length;
}


