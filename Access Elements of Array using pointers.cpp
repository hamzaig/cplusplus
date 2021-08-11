#include <iostream>
using namespace std;
int main()
{
	int x[5];
	for(int i=0;i<5;i++)
	cin>>x[i];
	cout<<endl;
	for(int i=0;i<5;i=i+2)
	cout<<*(x+i);
}
