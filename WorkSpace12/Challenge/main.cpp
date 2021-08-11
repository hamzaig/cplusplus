#include<iostream>

using namespace std;

void print(const *const arr,size_t size){
    cout<<"[ ";
    for(size_t i{0};i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

int * apply_all(const int *const arr1,size_t arr1_size,const int *const arr2,size_t arr2_size){
    
    int *new_arry=new int[arr1_size*arr2_size];
    
    int position{0};
    
    for(size_t i{0};i<arr1_size;i++){
        for(size_t j{0};j<arr2_size;j++){
            new_arry[position]=arr1[i]*arr2[j];
            position++;
        }
    }
    return new_arry;
}

int main(){
    
    const size_t array2_size{5};
    const size_t array1_size{3};
    
    int array2[5]={1,2,3,4,5};
    int array1[3]={10,20,30};
    
    cout<<"Array 1 : ";
    print(array1,array1_size);
    
    cout<<endl;
    
    cout<<"Array 2 : ";
    print(array2,array2_size);
    
    int *result=apply_all(array1,array1_size,array2,array2_size);
    
    cout<<endl;
    
    print(result,15);
    
    cout<<endl<<endl;
}