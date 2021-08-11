#include <iostream>
using namespace std;
int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);
int mod(int x,int y);
int main()
{
	int d,a,b;
	char w;
	
	
	
	do
	{
		system("cls");
		cout<<"\t\t\t\tA SIMPLE CALCULATOR\n";
		cout<<"\tMenu:\n";
		cout<<"\t\t1. Addition \n";
		cout<<"\t\t2. Subtraction \n";
		cout<<"\t\t3. Multiplication  \n";
		cout<<"\t\t4. Division  \n";
		cout<<"\t\t5. Modulas \n";
		cout<<"\tEnter Your Choice: ";cin>>d;
		switch(d)
		{
		case 1:
			cout<<"\t\t\tPlease Enter Your Two Numbers \n";
			cout<<"\tPlease Enter First Number: ";cin>>a;
			cout<<"\tPlease Enter Second Number:";cin>>b;
			cout<<"\tResult = "<<add(a,b);
			break;
		case 2:
			cout<<"\t\t\tPlease Enter Your Two Numbers \n";
			cout<<"\tPlease Enter First Number: ";cin>>a;
			cout<<"\tPlease Enter Second Number:";cin>>b;
			cout<<"\tResult = "<<sub(a,b);
			break;
		case 3:
			cout<<"\t\t\tPlease Enter Your Two Numbers \n";
			cout<<"\tPlease Enter First Number: ";cin>>a;
			cout<<"\tPlease Enter Second Number:";cin>>b;
			cout<<"\tResult = "<<mul(a,b);
			break;
		case 4:
			cout<<"\t\t\tPlease Enter Your Two Numbers \n";
			cout<<"\tPlease Enter First Number: ";cin>>a;
			cout<<"\tPlease Enter Second Number:";cin>>b;
			 	
				if(b==0)
			 	cout<<"\tResult = infinity...";
			 	else
				cout<<"\tResult = "<<div(a,b);
				
			break;
		case 5:
			cout<<"\t\t\tPlease Enter Your Two Numbers \n";
			cout<<"\tPlease Enter First Number: ";cin>>a;
			cout<<"\tPlease Enter Second Number:";cin>>b;
			
				if(b==0)
			 	cout<<"\tResult = infinity...";
			 	else
				cout<<"\tResult = "<<mod(a,b);
			break;
		default:
			cout<<"\t\t\tError Please Enter Correct Number ";
		}
		cout<<"\nDo You Want To Continue Press Y. To Stop Press Any Key.";cin>>w;
		cout<<endl;
	}
	while(w=='y');	
}
int add(int x,int y)
{
	int z=x+y;
	return(z);
}
int sub(int x,int y)
{
	int z=x-y;
	return(z);
}
int mul(int x,int y)
{
	int z=x*y;
	return(z);
}
int div(int x,int y)
{
	int z=x/y;
	return(z);
}
int mod(int x,int y)
{
	int z=x%y;
	return(z);
}
