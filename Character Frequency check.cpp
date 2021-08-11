#include <iostream>
using namespace std;
int main()
{
	string ch;
	char cc;
	int count=0;
	
	getline(cin,ch);
	cin>>cc;
	
	for(int i=0;(i<ch.size());i++)
	{
		if(cc==ch[i])
		{
			count++;
		}
	}
	cout<<count;
	
}
