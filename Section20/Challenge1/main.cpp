#include<iostream>
#include<vector>
#include<string>
#include<cctype>
#include<deque>
#include<iomanip>
using namespace std;

bool is_palindrome(const string &s){
    deque<d> d;
    for(char c:s){
        if(isalpha(c)){
            d.push_back(toupper(c));
        }
    }
    char c1{};
    char c2{};
    while(d.size()>1){
        c1 = d.front();
        c2 = d.back();
        d.pop_back();
        d.pop_front();
        if(c1!=c2){
            return false;
        }
    }
    return true;
}

int main(){
    
}