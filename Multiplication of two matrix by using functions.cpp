#include <iostream>
using namespace std;
void input(int m1[100][100],int m2[100][100],int r1,int r2,int c1,int c2);
void multi(int m1[100][100],int m2[100][100],int r2,int c1,int c2,int mul[100][100]);
int main()
{
	int r1,r2,c1,c2;
	int m1[100][100];
	int m2[100][100];
	int mul[100][100];
	cout<<"\n\t\t   Multiplication of Two Matrix By Using Function\n\n";
	cout<<"Please Enter The Number of Row of First Matrix: ";cin>>r1;
	cout<<"Please Enter The Number of Column of First Matrix: ";cin>>c1;
	cout<<"Please Enter The Number of Row of Second Matrix: ";cin>>r2;
	cout<<"Please Enter The Number of Column of Second Matrix: ";cin>>c2;
	
	
	while(c1!=r2)
	{
		cout<<"\n\tError! The Number of Column of First Matrix is not Equal \n\tto The Number of Row of Second Matrix Please Enter Again.\n";
		cout<<"\n\t\t   Multiplication of Two Matrix By Using Function\n";
		cout<<"Please Enter The Number of Row of First Matrix: ";cin>>r1;
		cout<<"Please Enter The Number of Column of First Matrix: ";cin>>c1;
		cout<<"Please Enter The Number of Row of Second Matrix: ";cin>>r2;
		cout<<"Please Enter The Number of Column of Second Matrix: ";cin>>c2;
	}
	input(m1,m2,r1,r2,c1,c2);
	multi(m1,m2,r2,c1,c2,mul);
}



//input function
void input(int m1[100][100],int m2[100][100],int r1,int r2,int c1,int c2)
{
	cout<<"\n\t\t\t Please Enter The Values of First Matrix\n\n";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cout<<"Enter The Value of A"<<i+1<<j+1<<": ";cin>>m1[i][j];		
		}	
	}
	
	cout<<"\n\t\t\t Please Enter The Values of Second Matrix\n\n";
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cout<<"Enter The Value of A"<<i+1<<j+1<<": ";cin>>m2[i][j]	;
		}	
	}
}


//multiplication function...

void multi(int m1[100][100],int m2[100][100],int r2,int c1,int c2,int mul[100][100])
{
	for(int i=0;i<c1;i++)
	{
		for(int j=0;j<r2;j++)
		{
			for(int k=0;k<c2;k++)
			{
				mul[i][j]+=(m1[i][k]*m2[k][j]);
			}
			cout<<mul[i][j]<<" ";
		}
		cout<<endl;
	}
}























