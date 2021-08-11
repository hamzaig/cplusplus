#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main(){
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temps[20] {};
    
//    cout<<first_name;
    
//    cout<<"Please Enter Your First Name: ";
//    cin>>first_name;
//    
//    cout<<"Please Enter Your Last Name: ";
//    cin>>last_name;
//    cout<<"----------------------------------"<<endl;
//    
//    cout<<"Hello, "<<first_name<<" your first name has "<<strlen(first_name)<<" characters"<<endl;
//    cout<<"and your last name, "<<last_name<<" has "<<strlen(last_name)<<" characters"<<endl;
//    
//    strcpy(full_name,first_name);
//    strcat(full_name," ");
//    strcat(full_name,last_name);
//    cout<<"Your full Name is "<<full_name<<endl;


//        cout<<"--------------------------------------------"<<endl;
//        cout<<"Enter Your Full Name: ";
//        cin>>full_name;
//        
//        cout<<"Your Full Name is "<<full_name;

        cout<<"Enter Your Full Name: ";
        cin.getline(full_name,50);
        cout<<"Your Full Name is "<<full_name<<endl;
        
    
        cout<<"---------------------------------------------------------"<<endl;
        strcpy(temps,full_name);
        if(strcmp(temps,full_name)==0)
            cout<<"Same"<<endl;
        else
            cout<<"Different"<<endl;

        for(size_t i{0};i<strlen(full_name);i++){
            if(isalpha(full_name[i]))
                full_name[i]=toupper(full_name[i]);
        }
        cout<<"Your Full Name Is: "<<full_name;
        
        cout<<"---------------------------------------------"<<endl;
        
        if(strcmp(temps,full_name)==0)
            cout<<endl<<"Same"<<endl;
        else
            cout<<"Different"<<endl;
            
        cout<<"---------------------------------------------"<<endl;
            
        cout<<strcmp(temps,full_name)<<endl;
        cout<<strcmp(full_name,temps)<<endl;
    
    
    
    
    
    
    
    cout<<endl;
}