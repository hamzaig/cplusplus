//Final Project
//Semester 3rd
//Bank Managment system
//Hamza Butt

#include <iostream>
#include<ctime>
#include<string>
#include<conio.h>
using namespace std;
int menu;
int sum;
int size=1;
int a=0;
int accountnumber[1000];
int amount[25];
int deposit = 0;
int withdraw = 0;
string phoneno[25];
char decision; // Making decission to generate new account y/n 
string f_name[25];
string l_name[25];
string password[25];
string address[25];
string cnic[25];


char x=175; // designing purpose
char u=186; // same
char z=2.5; // same

int main()
{
	do{ 
	again2:
	cout<<x<<x<<"                                             "<<x<<x<<endl;                                                                                                                 
	cout<<x<<x<<                              "                 Main Menu                   "<<x<<x<<endl;                                                       
	cout<<x<<x<<"                                             "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;
	cout<<x<<x<<"       (1)  New Account                      "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;      
	cout<<x<<x<<"       (2)  Login                            "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;      	
	cout<<x<<x<<"       (3)  Check Balance Details            "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;      	
	cout<<x<<x<<"       (4)  Update/Modify an Account         "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl; 	
    cout<<x<<x<<"       (5)  Transfer Money to An Account     "<<x<<x<<endl;      	
	cout<<x<<x<<"                                             "<<x<<x<<endl;      
	cout<<x<<x<<"       (6)  Update/Modify An Account         "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;      
	cout<<x<<x<<"       (7)  Deposit Money To An Account      "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;      
	cout<<x<<x<<"       (8)  Withdraw Money From An Account   "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;          
	cout<<x<<x<<"       (9)  Loan Details                     "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;           
	cout<<x<<x<<"       (10) Delete An Account                "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;      
	cout<<x<<x<<"       (11) Exit                             "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;    
	cout<<"\n\n";
	cout<<"   Please Enter The Service That You Need (1-11)   ";
	cin>>menu;  
	
	if((menu<1) || (menu>11))
	{
		char w=254;
		system("cls");
		cout<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<endl;
		cout<<w<<"\n                                                           "<<w<<"\n";
		cout<<w<<"\n     You Have Entered An Invalid Choice,Please Try Again   "<<w<<"\n";
		cout<<w<<"\n                                                           "<<w<<"\n";
		cout<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<endl;
		system("pause");
		system("cls");		
}
	cout<<"\n";
    
	if(menu==1) //Make account
	{   again1:
		system("CLS");
		 cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	      cout<<"   "<<u<<"                                  "<<u<<endl;
	      cout<<"   "<<u<<"     Sign Up For A New Account    "<<u<<endl;
	      cout<<"   "<<u<<"                                  "<<u<<endl;
		  cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"\n\n\n";
		  cout<<"\n Enter The Details Of Applicant";
		  cout<<"\n\n\n";
		  cout<<"\n Enter Your first Name ";
		  cout<<"\n";            
		  cin>>f_name[a];
		  cout<<"\n Enter Your last Name ";
		  cout<<"\n";            
		  cin>>l_name[a];
		  cout<<"\n Please Enter Your Address (must use _ between words e.g faisal_town)";
		  cout<<"\n";       
		  cin>>address[a];
		  cout<<"\n Enter Your CNIC Number";
		  cout<<"\n CNIC Number Format Should Be: xxxxx-xxxxxxx-x";
		  cout<<"\n";       
		  cin>>cnic[a];
		  cout<<"\n Enter Your phone number ";
		  cin>>phoneno[a]; 
		  cout<<"\t\t\t\t\t\t\t\t\t";
		  cout<<"\n Please Enter some Amount";
		  cout<<"\n";       
		  cin>>amount[a]; // To Store Amount Required for Creating A New Account
		  start:
		  	
		  if(amount[a]>1000)
		  {
		  	 system("cls");
		  	 cout<<"\n\n\n\n\n\n\n\n\n";
		  cout<<"                      "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"                      "<<u                                             <<"     Applicant            "<<u<<endl;
		  cout<<"                      "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;  
		  cout<<"\n           First Name:          " <<f_name[a];
		  cout<<"\n           Last Name:          " <<l_name[a];
		  cout<<"\n           Address:       " <<address[a];
		  cout<<"\n           CNIC_No:       " <<cnic[a];     
		  cout<<"\n           Phone_No:      " <<phoneno[a];
		  cout<<"\n\n";
		  
		  cout<<"\n           Account balance:       " <<amount[a]<< " .Rs";
		  	
		   time_t t=time(NULL); // To Store Time According To Our System
		  tm*timePtr = localtime(&t); // To Store Time According To Our System
		  cout<<"\n           Date:          "<<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900;
		  cout<<"\n           Time:          "<<(timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec); 	
		  sum=++sum; // To Add Account Nmubers 
		  cout<<"\n           Congrats!! Your Account Has Been Generated";
		  accountnumber[a]=a+1; // To Store All Joint Account Numbers One By One
		  cout<<"\n           Your Account Number Is: "<<accountnumber[a];
		  cout<<"\n";
		  cout<<"           Do You Want To Generate Another Account (y/n)?";
		  cout<<"\n";
		  cin>>decision;
		  if(decision=='y') 
		  {
		    a++; 
		    system("cls");	
		    goto again1;
		  }
		  if(decision=='n') 
		  {	
		   system("cls"); 	
		   goto again2; 
		  }
		  }
	else 
		  {
		  	
		  cout<<"\n\n\n\n\n";
		  system("cls"); // To Get Screen Clear	
		  cout<<"\n\n Oops! Account Has Not Been Generated";
		  cout<<"\n\n";
		  cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"   "<<u<<"            "<<u<<endl;
		  cout<<"   "<<u<<"   Reason   "<<u<<endl;
		  cout<<"   "<<u<<"            "<<u<<endl;
		  cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"\n\n Sorry! Required ammount to generate an account is Rs.1000";
		  cout<<"\n\n";
		  cout<<"\n Please Enter Your Amount Again  ";
		  cout<<"\n\n";
		  cin>>amount[a]; // To Store Amount Required for Creating A New Account
		  goto start;
}
} //if
	if(menu==2)
{
	int check=0;
	
	system("cls");
	 cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	      cout<<"   "<<u<<"                                  "<<u<<endl;
	      cout<<"   "<<u<<"     Login your account           "<<u<<endl;
	      cout<<"   "<<u<<"                                  "<<u<<endl;
		  cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	cout<<"\n Enter The Account Number To Check Account Details";
		    cout<<"\n";
		    back8: // To Go Back To Details
		    cin>>check;  // To Store Current Account Number To Check Account Details
		    a=check-1;  
				if(check==accountnumber[a]) 		  
		     {
		     	  cout<<"\n           First Name:    " <<f_name[a];
		    	  cout<<"\n           Last Name:             " <<l_name[a];
				  cout<<"\n           Address:               " <<address[a];
				  cout<<"\n           CNIC_No:               " <<cnic[a];     
				  cout<<"\n           Phone_No:              " <<phoneno[a];
				  cout<<"\n           Account balance:       " <<amount[a]<< " .Rs";
				  time_t t=time(NULL);
				  tm*timePtr = localtime(&t);
				  cout<<"\n           Date:          "<<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900;
				  cout<<"\n           Time:          "<<(timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec);  
			}   
			   if(check!=accountnumber[a])  // Validation For The Enterence Of Incorrect Joint Account Number
		    {
		    	cout<<"\n\n\n";
		    	cout<<"\n\n Invalid Account Number Entered";
		    	cout<<"\n\n Please Enter A Valid Account Number";
		    	cout<<"\n";
		    	goto back8;  // To Go Back To Details
			}   
			    cout<<"\n";
		        cout<<"\n\n           Do You Want To Check Account Details Of Another Account (y/n)?";
		        cout<<"\n";
		        cin>>decision;
		  if(decision=='y') // Validation For Generating Another Account
		  {
		    a++; // To Generate Account Numbers In Sequence		
		    system("cls"); // To Get Screen Clear	
		    goto back8;  // To Go Back To Check Details Of Another Account  
			system("Pause"); // To Take A Pause After Input Or Result		
		  }
		  if(decision=='n') 	// Validation To Go Back To Menu
		  {
		   system("cls"); // To Get Screen Clear		
		   goto again2;  // To Go Back To Menu
		  }
	            system("cls"); // To Get Screen Clear	 
	            goto again2; // To Get Back To Menu Again And Again According To Condition
	    }    
			
	
}

// do
while(menu!=11);
return 0;
}
