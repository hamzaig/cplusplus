#include <iostream>
using namespace std;
void mul_matrix(void);
int c1,c2,r1,r2,m1[100][100],m2[100][100],mm[100][100];
int main()
{
	
	cout<<"\t\t\tMultiplication of Two Matrix\n";
	cout<<"Please Enter The Number Of Row of First Matrix: ";cin>>c1;
	cout<<"Please Enter The Number Of Column of First Matrix: ";cin>>r1;
	cout<<"Please Enter The Number Of Row of Second Matrix: ";cin>>c2;
	cout<<"Please Enter The Number Of Column of Second Matrix: ";cin>>r2;
	
	if (c1==r2)
	{
		mul_matrix();
	}
	else 
	cout<<"\nThe Column of 1st matrix is not equal to the row of Second Column Please Run Program Again";
}

void mul_matrix(void)
{
	cout<<"\t\t\tPlease Enter The Data of First Matrix: \n";
	for (int i=0;i<r1;i++)
		for(int j=0;j<c1;j++)
		{
			cout<<"Please Enter the Element of A"<<i+1<<j+1<<": ";cin>>m1[i][j];
		}
	cout<<"\t\t\tPlease Enter The Data of Second Matrix: \n";
	for (int i=0;i<r2;i++)
		for(int j=0;j<c2;j++)
		{
			cout<<"Please Enter the Element of A"<<i+1<<j+1<<": ";cin>>m2[i][j];
		}	
	//multiplication loop
	for (int i=0;i<r1;i++)
		for(int j=0;j<c1;j++)
		for(int k=0;k<c1;k++)
		{
			mm[i][j]+=m1[i][k]*m2[k][j];	
		}
	for (int i=0;i<r1;i++)
		{
		for(int j=0;j<c1;j++)
		{
			cout<<mm[i][j]<<" ";
		}
		cout<<endl;
		}	
		
} 
