#include<iostream>
#include "Mystring.hpp"
using namespace std;
int main(){
    cout<<boolalpha;
    Mystring a{"Hamzaig"};
    Mystring b{"Hamzaig"};
    cout<<(a==b)<<endl; 
    cout<<(a!=b)<<endl;
    
    b = "Khalid";
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a>b)<<endl;
    
    Mystring c{"Raazia"};
    c=-c;
    cout<<c<<endl;
    
    c = c + " Seemab";
    cout<<c<<endl;
    
    c += " Love";
    cout<<c<<endl;
    
    Mystring d{"7"};
    d = d*1;
    d*=3;
    cout<<d<<endl;
    
    
    cin>>d;
    cout<<d<<endl;
    
    Mystring e;
    e=d++;
    cout<<d<<" "<<e;
    
}