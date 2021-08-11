#include <iostream>
using namespace std;
int main()
{
	int x1,x2,x3,x4,x5,sum,total;
	float percentage;
	cout<<"Please Enter Five Subjects Number\n";
	cin>>x1>>x2>>x3>>x4>>x5;
	sum = x1+x2+x3+x4+x5;
	cout<<"How Much Total Numbers\n";
	cin>>total;
	cout<<"The Total Numbers Is "<<sum<<" Out of "<<total;	
	percentage=(sum*100)/(float)total;
	cout<<"\nThe Percentage Is:\t"<<percentage;
}
