#include <iostream>
using namespace std;
int main()
{
	int a=500;
	int &ref=a;
	cout<<"The Value of A: "<<a<<endl;
	cout<<"The Value of Ref: "<<ref<<endl;
	cout<<"The Address of A: "<<&a<<endl;
	cout<<"The Address of Ref: "<<&ref<<endl;
}
