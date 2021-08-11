#include <iostream>
using namespace std;
int main()
{
	int a=100;
	int *ptr1;
	int **ptr2=&ptr1;
	ptr1=&a;
	
	cout<<"Address of A\t"<<*(&a)<<endl;
	cout<<"Address of A\t"<<ptr1<<endl;
	cout<<"Address of Ptr1\t"<<&ptr1<<endl;
	cout<<"Address of Ptr1\t"<<ptr2<<endl;
	cout<<"Value of ptr1\t"<<*ptr2<<endl;
	cout<<"Value of A\t"<<a<<endl;
	cout<<"Value of A\t"<<*ptr1<<endl;
	cout<<"Value of A\t"<<**ptr2<<endl;
	
}
