#ifndef _MYSTRING_H_
#define _MYSTRING_H_
using namespace std;
class Mystring
{
    friend bool operator==(const Mystring &rhs,const Mystring &lhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &rhs,const Mystring &lhs);
    friend ostream &operator<<(ostream &os,const Mystring &rhs);
    friend istream &operator>>(istream &is,Mystring &rhs);
private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    //Mystring(Mystring &&source);
    ~Mystring();
    
    Mystring &operator=(const Mystring &rhs);//copy assignment
    Mystring &operator=(Mystring &&rhs); //Move Assignment
    
    
    
    
    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif // _MYSTRING_H__
