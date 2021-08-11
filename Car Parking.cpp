#include <iostream>
using namespace std;

	int a;
	int c,cp=0,tc=0;
	int b,bp=0,tb=0;
	int r,rp=0,tr=0;
	int t,tp=0,tt=0;
int main()
{

	do
	{
		system("cls");
		cout<<"\t\t\t\t\t\t\t      M I A N   Z A I D";
	cout<<"\n\t\t\tC a r   P a r k i n g   S y s t e m\n\n";
	cout<<"\t1. Car Parking.\n";
	cout<<"\t2. Bike Parking.\n";
	cout<<"\t3. Riksha Parking.\n";
	cout<<"\t4. Truck Parking.\n";
	cout<<"\t5. Show Record.\n";
	cout<<"\t6. Delete All Record.\n";
	cout<<"\t7. Exit.\n\n";
	cout<<" Press A Number From 1 To 7 To Perform Any Function : ";
	cin>>a;
	switch(a)
	{
			case 1:
		cout<<"\tHow Many Cars Are Come For Parking : ";
		cin>>c;
		tc=tc+c;
		cp=tc*50;
		cout<<"\t\t\t\tP a r k e d.........\n"; system("pause");
		break;
			case 2:
		cout<<"\tHow Many Bikes Are Come For Parking : ";
		cin>>b;
		tb=tb+b;
		bp=tb*20;
		cout<<"\t\t\t\tParked.........\n"; system("pause");
		break;
			case 3:
		cout<<"\tHow Many Riksha Are Come For Parking : ";
		cin>>r;
		tr=tr+r;
		rp=tr*30;
		cout<<"\t\t\t\tParked.........\n"; system("pause");
		break;
			case 4:
		cout<<"\tHow Many Truck Are Come For Parking : ";
		cin>>t;
		tt=tt+t;
		tp=tt*100;
		cout<<"\t\t\t\tParked.........\n"; system("pause");
		break;
			case 5:
			cout<<"\n=====================================================================\n";
			cout<<"\n\t\t\t\tR E C O R D";
			cout<<"\nTotal Cars Are Parked : "<<tc;
			cout<<"\nTotal Bikes Are Parked : "<<tb;
			cout<<"\nTotal Rikshas Are Parked : "<<tr;
			cout<<"\nTotal Truks Are Parked : "<<tt;
			cout<<"\n\nTotal Cars Collection : Rs."<<cp;
			cout<<"\nTotal Bikes Collection : Rs."<<bp;
			cout<<"\nTotal Rikshas Collection : Rs."<<rp;
			cout<<"\nTotal Trucks Collection : Rs."<<tp;
			cout<<"\n\nThe Total Vehicle Are : "<<tc+tb+tr+tt;
			cout<<"\nThe Total Collected Amount Is : Rs."<<cp+bp+rp+tp;
			cout<<"\n\n=====================================================================\n\n";
			cout<<"\n\nPress Any Key To Continue....";
			system("pause");
			break;
			case 6:
			
			a=0;
			c=cp=tc=0;
			b=bp=tb=0;
			r=rp=tr=0;
			t=tp=tt=0;
			cout<<"\n\n\t\t\t\t R E C O R D\n\t\t\t\tD E L E T E D.\n\n"; system("pause");
			
				
			break;
			
			case 7:
			
			cout<<"\n\n\t\t\t\tS y s t e m   E n d\n\t\t\t\tT h a n k   Y o u.\n\n";
			
				
			break;
			
			default:
				cout<<"\n\n\t\t\tError! Invaild Choice.\n\n";
							system("pause");

				break;
	}

	
	}while(a!=7);
}





