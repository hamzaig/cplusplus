#include <iostream>
#ifndef _MYSTRING_H_
#define _MYSTRING_H_
using namespace std;
class Mystring
{
    friend ostream &operator<<(ostream &os,const Mystring &rhs);
    friend istream &operator>>(istream &is,Mystring &rhs);
private:
    char *str;
public:
    Mystring(); //Default Constructer
    Mystring(const char *s); //Overloaded Constructer
    Mystring(const Mystring &source); //Copy Constructer
    Mystring(Mystring &&source); //Move Constructer
    ~Mystring(); //Destructer
    
    Mystring &operator=(const Mystring &rhs);//Copy Assignment Operator
    Mystring &operator=(Mystring &&rhs); //Move Assignment Operator
    
    //Overloaded operator methods
    Mystring operator-() const;
    Mystring operator+(const Mystring &rhs) const;
    bool operator==(const Mystring &rhs) const;
    bool operator!=(const Mystring &rhs) const;
    bool operator<(const Mystring &rhs) const;
    bool operator>(const Mystring &rhs) const;
    Mystring &operator+=(const Mystring &rhs);
    Mystring operator*(int n) const;
    Mystring operator*=(int n);
    Mystring &operator++(); //pre incre
    Mystring operator++(int);//post incre
    
    void display() const;
    int get_length() const;
    const char * get_str() const;
    
};

#endif // _MYSTRING_H_
