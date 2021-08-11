#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int i=0,pin[4];
cout<<"\n\n\n\t\t\t\tEnter your PIN: ";
while((pin[i]=getch()) != '\n' && i<4) {
    i++;
    cout<<"*";
}
if(pin[0]=='1' && pin[1]=='2' && pin[2]=='3' && pin[3]=='4')   
    cout<<"You are logined";            
else {        
    system("cls");        
    cout<<"\n\n\n\t\t\t\t   Wrong PIN!";         
    cout<<"\n\n\t\t\t    Please get your card.";         
}
}
