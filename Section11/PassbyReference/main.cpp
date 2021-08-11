#include<iostream>
#include<vector>
#include<string>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

void pass_by_ref1(int &num){
    num=100;
}

void pass_by_ref2(string &s){
        s="Changed";
}

void pass_by_ref3(vector<string> &v){
    v.clear();
}

void print_vector(const vector<string> &v){
    for(auto i:v){
        cout<<i<<"  ";
    }
    cout<<endl;
}

int main(){
    int num{5};
//    cout<<num<<endl;
//    pass_by_ref1(num);
//    cout<<num<<endl;

//    string name{"Hamzaig"};
//    cout<<name<<endl;
//    pass_by_ref2(name);
//    cout<<name<<endl;

    vector<string> stooges{"Hamza","Ali","Khalid"};
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout<<endl<<endl;
    print_vector(stooges);
}