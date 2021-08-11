#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
using namespace std;

struct City{
    string name;
    long population;
    double cost;
};

struct Country{
    string name;
    vector<City> cites;
};

struct Tours{
    string title;
    vector<Country> countries;
};

void ruler(){
    cout<<"\n1234567890123456789012345678901234567890123456789012345678901234567890\n\n";
}


int main(){
    Tours tours
        {"Tours Tickets From Miami",
         {
            {
                "Colombia",{
                    {"Bagoota",8778000,400.98},
                    {"Cali",2401000,424.12},
                    {"Madlin",2464000,350.98},
                    {"Cartagena",972000,345.34}
                }
            },
            {
                  "Brazi",{
                    {"Rio De Janiro",13500000,567.45},
                    {"Sao Paulo",11310000,975.45},
                    {"Salvador",18234000,855.99}
                }
            },
            {
                "Chile",{
                    {"Valdivia",260000,569.12},
                    {"Santiago",7040000,520.00}
                }
            },
            {
                "Argentina",{
                    {"Buenos",3010000,723.77}
                }
            }
    }
};

    ruler();
}






