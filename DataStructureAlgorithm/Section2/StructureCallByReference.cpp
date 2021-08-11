#include<iostream>
using namespace std;
struct Area
{
    int length;
    int bredth;
};

int area(struct Area &r1){
    r1.length++;
    return r1.bredth*r1.length;
}

int main(){
    struct Area r={10,5};
    cout<<area(r)<<endl;
    cout<<r.length;
}
