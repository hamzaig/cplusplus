#include <iostream>
using namespace std;
int main()
{
	double x[4]={10,20,30,40};
	double *j,*k;
	j=&x[1];
	k=&x[3];
	cout<<endl<<k+1<<endl;
	cout<<endl<<k<<endl<<	j<<endl<<*k-*j;
	
}
