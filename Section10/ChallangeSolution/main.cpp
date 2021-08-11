#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<endl;
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string secret_message {};
    cout<<"Please Enter Your Secret Message: ";
    getline(cin,secret_message);
    
    string encrypted_message {};
    
    for(char c:secret_message){
        size_t position {};
        position=alphabet.find(c);
        if(position==string::npos){
            encrypted_message+=c;
        }else{
            char new_char {key.at(position)};
            encrypted_message+=new_char;
        }
    }
    
    cout<<"\nEncrypted Message: "<<encrypted_message;
    
    string decrypted_message {};
    
        for(char c:encrypted_message){
        size_t position {};
        position=key.find(c);
        if(position==string::npos){
            decrypted_message+=c;
        }else{
            char new_char {alphabet.at(position)};
            decrypted_message+=new_char;
        }
    }
    
    cout<<"\nDecrypted Message: "<<decrypted_message;

    cout<<endl;
    cout<<endl;
}