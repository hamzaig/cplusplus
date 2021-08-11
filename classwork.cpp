#include <iostream>
using namespace std;
int main()
{
	string psw;
	string un;
	string psw1;
	string un1;
	cout<<"Please Enter User Name And Password to Registere"<<endl;
	getline(cin,un);
	getline(cin,psw);
	cout<<"Your User Name And Password is registered"<<endl;
	cout<<"Please Enter Your Username and password to login"<<endl;
	getline(cin,un1);
	getline(cin,psw1);
	
try
{
		try
	{
		if(un1!=un)
		{
			throw(un1);
		}
		else if(psw1!=psw)
		{
			throw(un1);
		}
		else
		{
			cout<<"You Are Logined";
		}
	}
	catch(string username)
	{		
		if(username!=un)
		cout<<"Your username is Wrong";
		else
		throw;
	}
}
	catch(...)
	{		
		
		cout<<"Password is Wrong";
		
	}
	
	
	
}
