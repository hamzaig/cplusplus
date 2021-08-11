#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main(){
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1};
    string s6 (s1,0,3);
    string s7 (10,'X');
    cout<<endl;
//    cout<<s0<<endl;
//    cout<<s0.length()<<endl;

//    cout<<"s1 is initialized to "<<s1<<endl;
//    cout<<"s2 is initialized to "<<s2<<endl;
//    cout<<"s3 is initialized to "<<s3<<endl;
//    cout<<"s4 is initialized to "<<s4<<endl;
//    cout<<"s5 is initialized to "<<s5<<endl;
//    cout<<"s6 is initialized to "<<s6<<endl;
//    cout<<"s7 is initialized to "<<s7<<endl;


//    cout<<boolalpha;
//    cout<<s1<<" == "<<s5<<": "<<(s1==s5)<<endl;
//    cout<<s1<<" == "<<s2<<": "<<(s1==s2)<<endl;
//    cout<<s1<<" != "<<s2<<": "<<(s1!=s2)<<endl;
//    cout<<s1<<" < "<<s2<<": "<<(s1<s2)<<endl;
//    cout<<s2<<" > "<<s1<<": "<<(s2>s1)<<endl;
//    cout<<s4<<" < "<<s5<<": "<<(s1<s5)<<endl;
//    cout<<s1<<" == "<<"Apple"<<": "<<(s1=="Apple")<<endl;


//    s1="Watermelon";
//    cout<<"s1 is now: "<<s1<<endl;
//    s2=s1;
//    cout<<"s2 is now: "<<s2<<endl;
//    
//    s3="frank";
//    cout<<"s3 is now: "<<s3<<endl;
//    
//    s3[0]='C';
//    cout<<"s3 is now: "<<s3<<endl;
//    s3.at(0)='P';
//    cout<<"s3 is now: "<<s3<<endl;


//    s3="Watermelon";
//    s3=s5+" and "+s2+" Juice";
//    cout<<"S3 is Now "<<s3<<endl;
    
//    s3="nice"+"cold"+s5; //error
//
//    s1="Apple";
//    for(size_t i{0};i<s1.length();i++)
//        cout<<s1.at(i);
//    cout<<endl;
//    
//    for(char i:s1)
//        cout<<i;
//    cout<<endl;


//    s1="this is a test";
//    cout<<s1.substr(0,4)<<endl;
//    cout<<s1.substr(5,2)<<endl;
//    cout<<s1.substr(10,4)<<endl;


//    s1="this is a test";
//    s1.erase(0,5);
//    cout<<s1<<endl;


//    string full_name {};
//    getline(cin,full_name);
//    cout<<full_name<<endl;


    s1="The secret word is boo";
    string word{};
    
    cout<<"Enter The word you want to find: ";
    cin>>word;
    
    size_t position = s1.find(word);
    if(position!=string::npos)
        cout<<position;
    else
        cout<<"Not Found";



    
    cout<<endl;
}