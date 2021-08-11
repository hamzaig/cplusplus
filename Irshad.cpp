#include<iostream>
using namespace std;

void showElements(int arr[7][4]);
double PercentageDeath(int arr[7][4],int x);
double PercentageRecoverd(int arr[7][4],int x);
int main(){
	int source_data[7][4]={
		{0,560433,22115,32634},
		{1,156363,19899,34211},
		{2,84279,10612,0},
		{3,82160,3341,77663},
		{4,71686,4474,43894},
		{5,56956,1198,3446},
		{6,5374,93,1095}
	};
	
	showElements(source_data);
	
	cout<<"\nPress the country code to calculate the percentage of dead and recovered persons"<<endl<<endl;
	cout<<"\tPress 0 for Pakistan."<<endl;
	cout<<"\tPress 1 for China."<<endl;
	cout<<"\tPress 2 for Italy."<<endl;
	cout<<"\tPress 3 for UK."<<endl;
	cout<<"\tPress 4 for Iran."<<endl;
	cout<<"\tPress 5 for France."<<endl;
	cout<<"\tPress 6 for Turkey."<<endl;
	cout<<"\tPress 7 for Exit."<<endl;
	
	cout<<endl<<"Please Select An Optionn use numbers from 0 to 7 : ";
	int select;
	cin>>select;
	if(select>=8){
		cout<<"Invalid Choice"<<endl;
		system("pause");
		system("cls");
		main();
	}
	if(select==7){
		cout<<"Good Bye ..."<<endl;
		exit(0);
	}
	
	cout<<"________________________________________________________________";
	cout<<"Percentage Of Death is : "<<PercentageDeath(source_data,select)<<endl;
	cout<<"Percentage of Recoverd is : "<<PercentageRecoverd(source_data,select);

	cout<<endl;
}

void showElements(int arr[7][4]){
	cout<<endl;
	cout<<"\tCountry\tCases\tDeaths\tRecovered"<<endl;
	cout<<endl;
	for(int i=0;i<7;i++){
		for(int j=0;j<4;j++){
			cout<<"\t"<<arr[i][j];
		}
		cout<<endl;
	}
}

double PercentageDeath(int arr[7][4],int x){
		double percentage_death=100*(double(arr[x][2])/arr[x][1]);
}

double PercentageRecoverd(int arr[7][4],int x){
		double percentage_death=100*(double(arr[x][3])/arr[x][1]);
}




