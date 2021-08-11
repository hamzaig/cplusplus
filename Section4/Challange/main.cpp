#include<iostream>
using namespace std;

int main(){
    
cout<<"Hello, Welcome to Hamza's Carpet Cleaning Service"<<endl<<endl;
        cout<<"How Many Small Rooms would you like cleaned?"<<endl;
        
        int number_of_small_rooms {0};
        cin>>number_of_small_rooms;
        
        cout<<"How Many Large Rooms would you like cleaned?"<<endl;
        
        int number_of_large_rooms {0};
        cin>>number_of_large_rooms;
        
        const double price_per_small_room {25};
        const double price_per_large_room {35};
        const double sales_tax {0.06};
        const int estimate_expiry {30};
        
        cout<<"Estimate for Carpet Cleaning Service"<<endl;
        cout<<"Number of Small Rooms: "<<number_of_small_rooms<<endl;
        cout<<"Number of Large Rooms: "<<number_of_large_rooms<<endl;
        cout<<"Price Per Small Room: $"<<price_per_small_room<<endl;
        cout<<"Price Per Large Room: $"<<price_per_large_room<<endl;
        cout<<"Cost: $"<<(price_per_small_room*number_of_small_rooms)+(price_per_large_room*number_of_large_rooms)<<endl;
        cout<<"Tax: $"<<((price_per_small_room*number_of_small_rooms)+(price_per_large_room*number_of_large_rooms))*sales_tax<<endl;
        cout<<"============================================="<<endl;
        cout<<"Total Estimate: $"<<(price_per_small_room*number_of_small_rooms)+(price_per_large_room*number_of_large_rooms)+(((price_per_small_room*number_of_small_rooms)+(price_per_large_room*number_of_large_rooms))*sales_tax)<<endl;
        cout<<"This estimate is valid for "<<estimate_expiry<<" days"<<endl;
        
}