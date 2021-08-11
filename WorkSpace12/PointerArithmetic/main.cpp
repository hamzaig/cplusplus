#include<iostream>
using namespace std;
int main(){
    
    int scores[]={100,95,89,68,-1};
    int* scores_ptr={scores};
    
    while(*scores_ptr!=-1)
        cout<<*scores_ptr++<<endl;
    
}