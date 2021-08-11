#include <iostream>
using namespace std;
int main()
{
	int ch1,ch2;
	cout<<"\n Please Enter Your First Choice"<<endl<<"\t";
	cin>>ch1;
	switch(ch1)
	{
			case 1:
				cout<<"Your First Choice is 1";
				cout<<"\nEnter Your Second Choice";
				cin>>ch2;
		switch(ch2)
		{
			case 2:
				cout<<"Your Second Choice is 2";
				break;
			case 3:
				cout<<"Your Second Choice is 3";
				break;
			default:
				cout<<"No Match Found";	
				break;
		}
			break;
			
			default:
				cout<<"No Match Found";	
				break;
			
			
	}
}
