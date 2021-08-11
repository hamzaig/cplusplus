#include <iostream>
using namespace std;
int main()
{
	int a[100][100],b[100][100],r,c;
	cout<<"Enter Number Of Rows of Matrix:\t\t";cin>>r;
	cout<<"Enter Number of Columns of Matrix:\t";cin>>c;
	cout<<"\t\t\tEnter Elements of 1st matrix"<<endl;
	for(int i=0;i<r;++i)
	{
		for(int j=0;j<c;++j)
		{
			cout<<"Enter Element A"<<i+1<<j+1<<":";cin>>a[i][j];	
		}	
	}
	cout<<"\t\t\tEnter Elements of 2nd matrix"<<endl;
	for(int i=0;i<r;++i)
	{
		for(int j=0;j<c;++j)
		{
			cout<<"Enter Element A"<<i+1<<j+1<<":";cin>>b[i][j];	
		}	
	}
	cout<<"\n\nSum of Two Matrix is"<<endl;
	for(int i=0;i<r;++i)
	{
		for(int j=0;j<c;++j)
		{
			cout<<(a[i][j]+b[i][j])<<"  ";	
		}	
		cout<<endl;
	}

}


