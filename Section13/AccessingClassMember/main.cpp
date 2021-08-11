#include<iostream>
#include<vector>
using namespace std;

class Player{
  string name;
  int health;
  int xp;
  
  void talk(string);
  bool is_dead();
};

class Account{
  //attributes
    string name;
    double balance;
    
  //methods
   bool deposit(double);
   bool withdraw(double);
};

int main(){
   
    
    return 0;
    
}