#include<iostream>
using namespace std;

int main(){
//        cout<<"Hello, Welcome to Hamza's Carpet Cleaning Service"<<endl<<endl;
//        cout<<"How Many Rooms would you like cleaned?"<<endl;
//        
//        int number_of_rooms {0};
//        cin>>number_of_rooms;
//        
//        cout<<"Estimate for Carpet Cleaning Service"<<endl;
//        cout<<"Number of Rooms: "<<number_of_rooms<<endl;
//        cout<<"Price Per Room: $"<<30<<endl;
//        cout<<"Cost: $"<<30*number_of_rooms<<endl;
//        cout<<"Tax: $"<<30*number_of_rooms*0.06<<endl;
//        cout<<"============================================="<<endl;
//        cout<<"Total Estimate: $"<<(30*number_of_rooms*0.06)+(30*number_of_rooms)<<endl;
//        cout<<"This estimate is valid for "<<30<<" days"<<endl;

                        //


cout<<"Hello, Welcome to Hamza's Carpet Cleaning Service"<<endl<<endl;
        cout<<"How Many Rooms would you like cleaned?"<<endl;
        
        int number_of_rooms {0};
        cin>>number_of_rooms;
        
        const double price_per_room {30};
        const double sales_tax {0.06};
        const int estimate_expiry {30};
        
        cout<<"Estimate for Carpet Cleaning Service"<<endl;
        cout<<"Number of Rooms: "<<number_of_rooms<<endl;
        cout<<"Price Per Room: $"<<price_per_room<<endl;
        cout<<"Cost: $"<<price_per_room*number_of_rooms<<endl;
        cout<<"Tax: $"<<price_per_room*number_of_rooms*sales_tax<<endl;
        cout<<"============================================="<<endl;
        cout<<"Total Estimate: $"<<(price_per_room*number_of_rooms*sales_tax)+(price_per_room*number_of_rooms)<<endl;
        cout<<"This estimate is valid for "<<estimate_expiry<<" days"<<endl;
        
        
}