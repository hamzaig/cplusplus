#include <iostream>
using namespace std;
int main()
{
	int r,c,m[100][100],t[100][100];
	cout<<"\t\t\t     Transpose of Matrix\n\n";
	cout<<"Please Enter The Rows of Matrix: ";cin>>r;
	cout<<"Please Enter The Columns of Matrix: ";cin>>c;
	cout<<endl<<endl;
	
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	{
		cout<<"Please Enter The Value of A"<<i+1<<j+1<<": ";cin>>m[i][j];
	}
	cout<<endl<<endl;
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		cout<<m[i][j]<<"\t";
		}
		cout<<endl<<endl;	
	}
	cout<<endl<<endl;
	//for transpose and print...
	for(int j=0;j<c;j++)
	{
		for(int i=0;i<r;i++)
		{
	
		cout<<m[i][j]<<"\t";
		}
		cout<<endl<<endl;
	}
	
}
