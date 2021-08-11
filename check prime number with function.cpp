#include<iostream>
using namespace std;
int prim(int);
int main()
{
	int num;
	cin>>num;
	if(prim(num))
	cout<<"it is a prime number";
	else
	cout<<"it is not a prime number";
}

int prim(int n)
{
int i,prime=1;
for(i=2;i<=(n/2);i++)
{
	if(n%i==0)
	 {
	 prime=0;
	 break;
	}
}
return prime;
}





