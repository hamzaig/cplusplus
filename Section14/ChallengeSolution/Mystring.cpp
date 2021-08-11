#include<iostream>
#include<cstring>
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
    str = new char[strlen(source.str)+1];
    strcpy(str,source.str);
}     

Mystring::Mystring(Mystring &&source)
    :str{source.str}{
    source.str == nullptr;
}

Mystring::~Mystring()
{
    delete [] str;
}

Mystring& Mystring::operator=(const Mystring &rhs){
    if(this==&rhs){
        return *this;
    }
    delete []str;
    str = new char[strlen(rhs.str)+1];
    strcpy(str,rhs.str);
    return *this;
}

Mystring& Mystring::operator=(Mystring &&rhs){
    if(this==&rhs){
        return *this;
    }
    delete []str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

Mystring Mystring::operator-() const {
    char *buff = new char[strlen(str)+1];
    strcpy(buff,str);
    for(int i=0;i<strlen(buff);i++){
        buff[i]=tolower(buff[i]);
    }
    
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

Mystring Mystring::operator+(const Mystring &rhs) const{
    char *buff =new char[strlen(str)+strlen(rhs.str)+1];
    strcpy(buff,str);
    strcat(buff,rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}
//equality
bool Mystring::operator==(const Mystring &rhs)const {
    return(strcmp(str,rhs.str)==0);
}
//not equal
bool Mystring::operator!=(const Mystring &rhs)const {
    return!(strcmp(str,rhs.str)==0);
}
//less than
bool Mystring::operator<(const Mystring &rhs)const {
    return(strcmp(str,rhs.str)<0);
}
//Greater Than
bool Mystring::operator>(const Mystring &rhs)const {
    return(strcmp(str,rhs.str)>0);
}

Mystring& Mystring::operator+=(const Mystring &rhs){
    *this = *this + rhs;
    return *this;
}

Mystring Mystring::operator*(int n) const{
    Mystring temp;
    for(size_t i = 0; i<n;i++){
        temp = temp + *this ;
    }
    return temp;
}

Mystring Mystring::operator*=(int n){
    *this = *this * n;
    return *this;
}

Mystring &Mystring::operator++(){
    for(size_t i=0;i<strlen(str);i++){
        str[i] = toupper(str[i]);
    }
    return *this;
}
Mystring Mystring::operator++(int){
    Mystring temp{*this};
    operator++();
    return temp;
}


void Mystring::display() const {
    cout<<str<<" : "<<get_length()<<endl;
}

int Mystring::get_length() const {
    return strlen(str);
}

const char *Mystring::get_str() const {
    return str;
}


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



