#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char x[50],y[50],z[100];
	cin.getline(x,50);
	cin.getline(y,50);
	strcat(x,y);
	cout<<x<<endl;
	cout<<y;
}
