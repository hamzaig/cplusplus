#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char x[100];
	cin.getline(x,100);//we can also use .length()
	cout<<endl<<"The Size OF The Character Line is: "<<strlen(x);
	
}
