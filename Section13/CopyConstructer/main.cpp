#include<iostream>
#include<string>
using namespace std;
class Player{
  private:
    string name;
    int health;
    int xp;
  public:
    string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    Player(string name_val="None",int health_val=0,int xp_val=0);
    //Copy Constructer
    Player(const Player &source);
    //Destructer
    ~Player(){cout<<"Destructer is called for: "<<name<<endl;};
};

Player::Player(string name_val,int health_val,int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{
    cout<<"Three args Constructer for "+name<<endl;
}

Player::Player(const Player &source)
    : name{source.name},health{source.health},xp{source.xp}{
            cout<<"Copy Constructer -- made of copy"<<endl;
}

void display_player(Player p){
    cout<<"Name : "<<p.get_name()<<endl;
    cout<<"Health : "<<p.get_health()<<endl;
    cout<<"XP : "<<p.get_xp()<<endl;
}


  
int main(){
    Player empty;
    
    display_player(empty);
    
    
    Player frank{"frank"};
    Player hero{"Hero",100};
    Player Villain{"Villain",100,55};
    
    return 0;
}