#include "I_Printable.hpp"
#include <iostream>
using namespace std;

ostream& operator<<(ostream &os,const I_Printable &obj){
    obj.print(os);
    return os;
}

