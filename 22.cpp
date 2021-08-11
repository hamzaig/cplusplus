#include <iostream>
using namespace std;

double div(int x,int y)
{
	if( y == 0 ) {
      throw "Division by zero condition!";
   }
   return (x/y);
}

int main()
{
	int x,y,z;
	cout<<"Please Enter 1st Value : ";cin>>x;
	cout<<"Please Enter 2nd Value : ";cin>>y;
	cout<<endl<<div(x,y);
}
