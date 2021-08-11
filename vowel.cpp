#include <iostream>
using namespace std;
int main()
{
	char x;
	cout<<"Please Enter Any Chracter\n";
	cin>>x;
	
	switch(x)
	{
	case 'a':
	case 'e':	
	case 'i':
	case 'o':
	case 'u':
	case 'E':
	case 'A':
	case 'I':
	case 'O':
	case 'U':
		cout<<"\t\t\t"<<x<<" is A Vowel Chracter";
	break;
	
	default:
		cout<<"\t\t\t"<<x<<" is Not A Vowel Chracter";
	}
	return 0;
}
