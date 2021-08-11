#include<iostream>
using namespace std;

void print_array(const int arr[],int x);
void set_array(int arr[],int x,int y);

int main(){
    int my_scors[]={100,98,90,86,84};
    print_array(my_scors,5);
        cout<<endl;
    set_array(my_scors,5,100);
        cout<<endl;
    print_array(my_scors,5);
    cout<<endl;
    print_array(my_scors,5);
    cout<<endl;
    return 0;
}

void print_array(const int arr[],int size){
    for(size_t i=0;i<size;i++){
        cout<<arr[i]<<endl;
//        arr[0]=5000;
    }
}

void set_array(int arr[],int size,int y){
    for(size_t i=0;i<size;i++){
        arr[i]=y;
    }
}
