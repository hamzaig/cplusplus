#include <iostream>
using namespace std;
int main()
{
	char x[100],y[100];
	int j=0;
	cout<<"Please Enter Any Line : ";
	cin.getline(x,100);
	
	for(int i=0;x[i]!='\0';i++)
	{
		if(((x[i]>='a'&&x[i]<='z'||x[i]>='A'&&x[i]<='Z')))
		{
			y[j++]=x[i];
		}
	}
	y[j]='\0';
	cout<<endl<<y;
}
