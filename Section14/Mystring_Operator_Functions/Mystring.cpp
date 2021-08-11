#include <iostream>
#include <cstring>
#include "Mystring.hpp"
using namespace std;

Mystring::Mystring()
    :str{nullptr}{
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s)
    :str{nullptr}{
    if(s==nullptr){
        str = new char[1];
        *str = '\0';
    }
    else{
        str = new char[strlen(s)+1];
        strcpy(str,s);
    }
}

Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
    str = new char[strlen(source.str) + 1];
    strcpy(str,source.str);
}

Mystring::~Mystring(){
    delete [] str;
}


Mystring &Mystring::operator =(const Mystring &rhs){
    cout<<"Copy Assignment Operator"<<endl;
    if(this==&rhs){
        return *this;
    }
    delete [] str;
    str = new char[strlen(rhs.str)+1];
    strcpy(str,rhs.str);
    return *this;
}

Mystring &Mystring::operator =(Mystring &&rhs){
    cout<<"Move Assignment"<<endl;
    if(this == &rhs){
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str=nullptr;
    return *this;
}

//bool Mystring::operator ==(const Mystring &rhs) const {
//    return(strcmp(str,rhs.str)==0);
//}
//
//Mystring Mystring::operator -() const {
//    char *buff = new char[strlen(str)+1];
//    strcpy(buff,str);
//    for(size_t i;i<strlen(buff);i++){
//        buff[i]=tolower(buff[i]);
//    }
//    Mystring temp{buff};
//    delete [] buff;
//    return temp;
//}
//
//Mystring Mystring::operator +(const Mystring &lhs) const{
//    char *buff =new char[strlen(str)+strlen(lhs.str)+1];
//    strcpy(buff,str);
//    strcat(buff,lhs.str);
//    Mystring temp{buff};
//    delete [] buff;
//    return temp;
//}




void Mystring::display() const {
    cout<<str<<" : "<<get_length()<<endl;
}

int Mystring::get_length() const {
    return strlen(str);
}

const char *Mystring::get_str() const {
    return str;
}

//equality
bool operator==(const Mystring &lhs,const Mystring &rhs){
    return(strcmp(lhs.str,rhs.str)==0);
}
//Lowercase
Mystring operator-(const Mystring &obj){
    char *buff = new char[strlen(obj.str)+1];
    strcpy(buff,obj.str);
    for(size_t i=0;i<strlen(buff);i++){
        buff[i]=tolower(buff[i]);
    }
    Mystring temp{buff};
    delete [] buff;
    return temp;
}


//+ operator 
Mystring operator+(const Mystring &lhs,const Mystring &rhs){
    char *buff =new char[strlen(rhs.str)+strlen(lhs.str)+1];
    strcpy(buff,rhs.str);
    strcat(buff,lhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

//overloaded insertion operator

ostream &operator<<(ostream &os,const Mystring &rhs){
    os<<rhs.str;
    return os;
}

//overloaded extraction operator

istream &operator>>(istream &is,Mystring &rhs){
    char *buff = new char[1000];
    is>>buff;
    rhs = Mystring {buff};
    delete buff;
    return is;
}