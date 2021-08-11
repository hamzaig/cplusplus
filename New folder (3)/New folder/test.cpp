#include <iostream>
using namespace std;
struct abc
{
	int len;
	int wid;	
};

int main()
{
	abc f={102,50};
	abc *h=&f;
	cout<<f.wid;
}
