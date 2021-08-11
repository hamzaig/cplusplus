#include<iostream>
#include<vector>
#include<memory>
using namespace std;

unique_ptr<vector<shared_ptr<Test>>> make(){
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>> &vec,int num){
    int temp;
    for(int i=0;i<num;i++){
        cout<<"Enter Data Points : ";
        cin>>temp;
        vec.push_back(make_shared<Test>(temp);
    }
}

void display(const vector<shared_ptr<Test>> &vec){
    cout<<"Displaying Vector"
}

int main(){
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
}