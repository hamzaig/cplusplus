#include <iostream>
using namespace std;
void swap(int*,int*);
int main()
{
	int x,y;
	cin>>x>>y;
	cout<<x<<"\t"<<y<<endl;
	swap(&x,&y);
	cout<<x<<"\t"<<y<<endl;
}

void swap(int *a, int *b)
{
	int swap;
	swap=*a;
	*a=*b;
	*b=swap;
	
}


