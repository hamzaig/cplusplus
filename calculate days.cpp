#include <iostream>
using namespace std;
int main()
{
	int total,month,day;
	int mon[12]={31,28,31,30,31,30,31,31,31,30,31,30};
	cin>>day;
	cin>>month;
	total=day;
	for(int i=0;i<month-1;i++)//for the current date
	{
		total+=mon[i];
	}
	cout<<endl<<total;
}
