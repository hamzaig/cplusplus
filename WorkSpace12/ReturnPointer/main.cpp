#include<iostream>
using namespace std;

int* create_array(size_t size,int init_value){
    int* new_storage=new int[size];
    for(size_t i=0;i<size,i++){
        *(new_storage+i)=init_value;
    }
    return new_storage;
}

int main(){
    
}