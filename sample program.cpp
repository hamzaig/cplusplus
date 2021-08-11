    #include<iostream>
	#include <time.h>
    using namespace std; 
    void delay(int delay)
    {
     int now=time(NULL);
     int later=now+delay;
     while(now<=later)now=time(NULL);
    }

int main()
{
	cout<<"\n\t\t\t\tWelcome ";
	delay(0.1);
	cout<<"By ";
	delay(0.1);
	cout<<"Hamzaig "<<endl;delay(0.1);
	cout<<"\n\n\t\t\t\tLoading For Program \n\n\n";
	cout<<"\n\n\t\t\t\t. ";delay(0.1);
	cout<<". ";delay(0.1);
	cout<<". ";delay(0.1);
	cout<<". ";delay(0.1);
	cout<<". ";delay(0.1);
	cout<<". ";delay(0.1);
	cout<<". ";delay(0.1);
	cout<<". ";delay(0.1);
	cout<<". ";delay(0.1);
	cout<<".\n\n\n\n\n\n\n\n\n";
	
	
}
