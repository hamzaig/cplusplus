#include <iostream>
using namespace std;
int main()
{
	int x,product=1;
	
	for(x=222;x>0;x=x/10)
	{
		product=product*(x%10);
	}
	cout<<product;

	
}
