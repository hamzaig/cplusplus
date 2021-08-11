// Header Files
#include<iostream> // Headerfile  For Basic Input Output Purposes
#include<stdio.h> // Headerfile For Standard Input Output Purposes
#include<string> // Headerfile For The Use Of String
#include<cstdlib> // Library For The Generation Of Random Numbers 
#include<cmath> // For Mathematical Operator
#include<ctime> // Headerfile To Get And Control The Date And Time
using namespace std; // Use To Organize The Code And To Avoid From Collision Of Multiple Libraries
int main()
{
	char decision;
	int sum; // Counter
	int option; // To Select The Options For Menu
    int a=0; // To Store Account Numbers Sequence
    int size=1; // To Save Data Of All Accounts While Generating New Joint Account
    int caccountnumber[1000]; // To Store Current AccountNumber
    int jaccountnumber[1000]; // To Store Joint AccountNumber
	string cname[25]; // To Store Name For Current Account  
    string jname[25]; // To Store Joint Name Of 1st Applicant  
	string name2[25]; // To Store Name Of 2nd Applicant  
	string jSname[25]; // To Store Joint Surname Of 1st Applicant
	string cSname[25]; // To Store Joint Surname Of Applicant For Current Account
	string Sname2[25]; // To Store Surname Of 2nd Applicant
	string relation[25]; // To Show Relation For JOint Account
	string caddress[25]; // To Store Current Account Address
	string jaddress[25]; // To Store Joint Address Of 1st Applicant 
	string address2[25]; // To Store Address Of 2nd Applicant 
	int cPnumber[25]; // To Store Current Account Phone Number
	int jPnumber[25]; // To Store Joint Phone Number Of 1st Applicant
	int Pnumber2[25]; // To Store Phone Number Of 2nd Applicant
	string cCNIC_No[25]; // To Store Current Account CNIC Number
	string jCNIC_No[25]; // To Store Joint CNIC Number Of 1st Applicant
	string CNIC_No2[25]; // To Store CNIC Number Of 2nd Applicant
	int camount[25]; // To Store Amount Required For Creating A New Current Account
	int jamount[25]; // To Store Amount Required For Creating A New Joint Account
    int cdeposit[a]; // To Store Deposit Amount Required For Creating A New Current Account  
    int jdeposit[a]; // To Store Deposit Amount Required For Creating A New Joint Account   
    int cwithdraw[a]; // To Store Withdrawn Amount Required For Creating A New Current Account  
    int jwithdraw[a]; // To Store Withdrawn Amount Required For Creating A New Current Account  
    int n2; // For The Selection Of Type Of Account
    char u=186;
    char x=178; // For Designing
    char z=2.5; // For Designing
	system("color 5F"); // For Colours
	cout<<"\n                               "<<x<<x<<x<<x;
	cout<<"\n                              "<<x<<"    "<<x;
	cout<<"\n                             "<<x<<"      "<<x;
	cout<<"\n                            "<<x<<"        "<<x;
    cout<<"\n                           "<<x<<"          "<<x;
	cout<<"\n                          "<<x<<"            "<<x;
	cout<<"\n                         "<<x<<"              "<<x;
	cout<<"\n                        "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x;
	cout<<"\n                          "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x;
	cout<<"\n                          "<<x<<x<<"    "<<x<<x<<"    "<<x<<x;
	cout<<"\n                          "<<x<<x<<"   "<<z<<x<<x<<z<<"   "<<x<<x;
	cout<<"\n                          "<<x<<x<<"    "<<x<<x<<"    "<<x<<x;
	cout<<"\n                          "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x;
	cout<<"\n                        "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x;
	cout<<"\n";
	cout<<"\n";
	cout<<"\n                |BANK|      |MANAGEMENT|   |SYSTEM|";
	cout<<"\n\n";
	system ("color 5F"); // For Colours
	cout<<"              "              <<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<"     "<<x<<""<<x<<""<<x<<x<<x<<" "<<x<<x<<""<<x<<x<<x<<"    "<<x<<x<<x<<x<<x<<x<<x<<endl;
	cout<<"              "              <<x<<x<<"        "<<x<<x<<"   "<<x<<x<<" "<<x<<x<<" "<<x<<x<<" "<<x<<x<<"  "<<x<<x<<endl;
	cout<<"              "              <<x<<x<<"        "<<x<<x<<"   "<<x<<x<<" "<<x<<x<<" "<<x<<x<<" "<<x<<x<<"  "<<x<<x<<"     "<<endl;
	cout<<"              "              <<x<<x<<"        "<<x<<x<<"   "<<x<<x<<" "<<x<<x<<" "<<x<<x<<" "<<x<<x<<"  "<<x<<x<<endl;
	cout<<"              "              <<x<<x<<"        "<<x<<x<<"   "<<x<<x<<" "<<x<<x<<""<<x<<x<<""<<x<<" "<<x<<x<<"  "<<x<<x<<endl;
	cout<<"              "              <<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<"     "<<x<<x<<"       "<<x<<x<<"    "<<x<<x<<x<<x<<x<<x<<x<<endl;
    cout<<"              "              <<x<<x<<"        "<<x<<x<<"   "<<x<<x<<"       "<<x<<x<<"           "<<x<<x<<endl;
	cout<<"              "              <<x<<x<<"        "<<x<<x<<"   "<<x<<x<<"       "<<x<<x<<"           "<<x<<x<<endl;
	cout<<"              "              <<x<<x<<"        "<<x<<x<<"   "<<x<<x<<"       "<<x<<x<<"           "<<x<<x<<endl;
	cout<<"              "              <<x<<x<<"        "<<x<<x<<"   "<<x<<x<<"       "<<x<<x<<"           "<<x<<x<<endl;
	cout<<"              "              <<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<"     "<<x<<x<<"       "<<x<<x<<"    "<<x<<x<<x<<x<<x<<x<<x<<endl;
	cout<<"\n";
	cout<<"\n                                 BY ";
	cout<<"\n";
	cout<<"\n                                          "; 
	cout<<"\n                           AYESHA SHAREEF ";
	cout<<"\n\n";
	system("Pause"); // To Take A Pause After Input Or Result
	system("CLS"); // To Get Screen Clear			
    system("color 2E"); // For Colours
    char y=176; // For Designing
	system("color 2E");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"                   "<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"                                     "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"             Main Purpose            "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"                                     "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"                                     "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"  The Main Purpose Of Project Is To  "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"                                     "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<" Provide  All Information About Bank "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"                                     "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"  Like It Has Account,Amounts, And   "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"                                     "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<" Informations.So Let's Start It From "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"                                     "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"   Main Menu.Where You Can Find All  "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"                                     "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"  Details About Our Services By Just "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"                                     "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"  One Click.                         "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"                                     "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"      So, Here WE Go!!!!!!           "<<y<<y<<endl;
	cout<<"                   "<<y<<y<<"                                     "<<y<<y<<endl;
    cout<<"                   "<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<y<<endl;
    up:
    cout<<"\n\n";
    system("Pause"); // To Take A Pause After Input Or Result
	system("CLS"); // To Get Screen Clear			
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	int menu; // For The Selection Of A Menu
do // For Running Of The Program Again And Again 
{
	again2:	// To Come Back To Menu If You Do Not Want To Generate Another Account
	char x=178; // For Designing
	jump: // For Running Of The Menu Again And Again According To Condition
	system("color 3F"); // For Colours
	cout<<"\n\n\n";
	cout<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<endl;                                                                               
	cout<<x<<x<<"                                             "<<x<<x<<endl;                                                                                                                 
	cout<<x<<x<<                              "                 Main Menu                   "<<x<<x<<endl;                                                       
	cout<<x<<x<<"                                             "<<x<<x<<endl;
	cout<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;
	cout<<x<<x<<"       (1)  New Account                      "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;      
	cout<<x<<x<<"       (2)  Reopen An Account                "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;      	
	cout<<x<<x<<"       (3)  Delete An Account                "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;      	
	cout<<x<<x<<"       (4)  Check Balance Details            "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl; 	
    cout<<x<<x<<"       (5)  Account Details                  "<<x<<x<<endl;      	
	cout<<x<<x<<"                                             "<<x<<x<<endl;      
	cout<<x<<x<<"       (6)  Update/Modify An Account         "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;      
	cout<<x<<x<<"       (7)  Deposit Money To An Account      "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;      
	cout<<x<<x<<"       (8)  Withdraw Money From An Account   "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;          
	cout<<x<<x<<"       (9)  Loan Details                     "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;           
	cout<<x<<x<<"       (10) Report                           "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;      
	cout<<x<<x<<"       (11) Exit                             "<<x<<x<<endl;
	cout<<x<<x<<"                                             "<<x<<x<<endl;      
	cout<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<endl; 
	
	
	cout<<"\n\n";
	cout<<"   Please Enter The Service That You Need (1-11)   ";
	cin>>menu; // For The Selection Of Main Menu
	if((menu<1) || (menu>11)) // Validation For The Menu Number Selection 
	{
		system("cls"); // To Get Screen Clear
		cout<<"\n\n\n\n\n\n\n\n";
		system("color 4F"); // For Colours
        char w=254; // For Designing
		cout<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<endl;
		cout<<w<<"\n                                                           "<<w<<"\n";
		cout<<w<<"\n     You Have Entered An Invalid Choice,Please Try Again   "<<w<<"\n";
		cout<<w<<"\n                                                           "<<w<<"\n";
		cout<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<endl;
		cout<<"\n\n";
		system("pause"); // To Take  Pause After Input
	    system("cls"); //  To Get Screen Clear
		goto jump;  // To Get Back To Menu Again And Again According To Condition
		}
	    cout<<"\n"; 
	    
		if (menu==1) // For New Account
		{
		  system("CLS");
	      system("color 5F");
	      cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	      cout<<"   "<<u<<"                                  "<<u<<endl;
	      cout<<"   "<<u<<"     Sign Up For A New Account    "<<u<<endl;
	      cout<<"   "<<u<<"                                  "<<u<<endl;
		  cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"\n";
	      system("cls"); //  To Get Screen Clear
		  cout<<"\n\n";
		  cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	      cout<<"   "<<u<<"                                  "<<u<<endl;
	      cout<<"   "<<u<<"       (1) Enter The Details      "<<u<<endl;
	      cout<<"   "<<u<<"       (2) Back To Menu           "<<u<<endl;
	      cout<<"   "<<u<<"                                  "<<u<<endl;
		  cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"\n";
		  cout<<"\n Press The Option (1-2)";
		  cout<<"\n";
		  cin>>option;
	      system("cls"); //  To Get Screen Clear
if(option==1)
{
		  system("color 8F");
		  int n2; // For Selection Of Nmuber Of Type Of Account
		  cout<<"\n\n Please Select Type Of Account ";
	      cout<<"\n\n\n  (1)Joint Bank Account";
		  cout<<"\n\n\n  (2)Current Account";
		  cout<<"\n\n\n\n";
		  cin>>n2; // For Selection Of Nmuber Of Type Of Account
		   while((n2<1) || (n2>2)) // Validation For Selection Of Nmuber Of Type Of Account
		  {
		  	cout<<"\n   Invalid Type Entered";
		  	cout<<"\n\n Please Enter The B/W (1-2)";
		  	cout<<"\n\n";
		  	cin>>n2;
		  }
		if(n2==1) // Validation For Selection Of Join Account Only 
		{ 
		  
	      again1:
		  char v=254; // For Designing
		  cout<<"\n\n\n\n";
		  system ("cls"); // To Get Screen Clear
		  system("color F1"); // For Colours
		  cout<<"\n Enter The Details Of First Applicant"<<"\t\t\t\t\t Enter The Details Of Second Applicant";
		  cout<<"\n\n\n";
		  cout<<"\n Enter Your Name "<<"\t\t\t\t\t\t\t Enter Second Name ";
		  cout<<"\n";            
		  cin>>jname[a]; // To Store Name Of 1st Applicant   
		  cout<<"\t\t\t\t\t\t\t\t\t";
		  cin>>name2[a]; // To Store Name Of 2nd Applicant
		  cout<<"\n Enter Your Surname Name" <<"\t\t\t\t\t\t Enter Second Surname";
		  cout<<"\n";       
		  cin>>jSname[a]; // To Store Surname Of 1st Applicant
		  cout<<"\t\t\t\t\t\t\t\t\t";       
		  cin>>Sname2[a]; // To Store Surname Of 2nd Applicant
		  cout<<"\n Relation With Second Applicant";
		  cout<<"\n";       
		  cin>>relation[a];
		  cout<<"\n Please Enter Your Address"<<"\t\t\t\t\t\t Enter Second Address";
		  cout<<"\n";       
		  cin>>jaddress[a]; // To Store Address Of 1st Applicant 
		  cout<<"\t\t\t\t\t\t\t\t\t";
		  cin>>address2[a]; // To Store Address Of 2nd Applicant 		   
		  cout<<"\n Enter Your CNIC Number"<<"\t\t\t\t\t\t\t Enter Second CNIC Number";
		  cout<<"\n CNIC Number Format Should Be: xxxxx-xxxxxxx-x"<<"\t\t\t\t CNIC Number Format Should Be: xxxxx-xxxxxxx-x";
		  cout<<"\n";       
		  cin>>jCNIC_No[a]; // To Store CNIC Number Of 1st Applicant
		  cout<<"\t\t\t\t\t\t\t\t\t";
		  cin>>CNIC_No2[a]; // To Store CNIC Number Of 2nd Applicant
		  cout<<"\n Enter Your Cell Phone Number"<<"\t\t\t\t\t\t Enter Second Cell Phone Nmuber";
		  cout<<"\n";       
		  cin>>jPnumber[a]; // To Store Phone Number Of 1st Applicant
		  cout<<"\t\t\t\t\t\t\t\t\t"; 
		  cin>>Pnumber2[a]; // To Store Phone Number Of 2nd Applicant
		  cout<<"\n Please Enter some Amount";
		  cout<<"\n";       
		  cin>>jamount[a]; // To Store Amount Required for Creating A New Account
		  start:
		  if(jamount[a]>1000) // Validation For The Amount Required For Creating New Account 
		  {	
		  system("cls"); // To Get Screen Clear		
		  system("color 6F"); // For Colours	
		  cout<<"\n\n\n\n\n\n\n\n\n";
		  cout<<"                      "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"                      "<<u                                             <<"     First Applicant      "<<u<<endl;
		  cout<<"                      "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;  
		  cout<<"\n           Name:          " <<jname[a];
		  cout<<"\n           Surname Name:  " <<jSname[a];
		  cout<<"\n           Address:       " <<jaddress[a];
		  cout<<"\n           CNIC_No:       " <<jCNIC_No[a];     
		  cout<<"\n           Phone_No:      " <<jPnumber[a];
		  cout<<"\n\n";
		  cout<<"                      "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"                      "<<u                                             <<"     Second Applicant     "<<u<<endl;
		  cout<<"                      "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;  
          cout<<"\n           Name Second:   " <<name2[a];
		  cout<<"\n           Surname Name:  " <<Sname2[a];
		  cout<<"\n           Address:       " <<address2[a];
		  cout<<"\n           CNIC_No:       " <<CNIC_No2[a];     
		  cout<<"\n           Phone_No:      " <<Pnumber2[a];
		  cout<<"\n\n";
		  cout<<"\n           Relation:      " <<relation[a];
		  time_t t=time(NULL); // To Store Time According To Our System
		  tm*timePtr = localtime(&t); // To Store Time According To Our System
		  cout<<"\n           Date:          "<<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900;
		  cout<<"\n           Time:          "<<(timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec); 
		  sum=++sum; // To Add Account Nmubers 
		  cout<<"\n           Congrats!! Your Account Has Been Generated";
		  jaccountnumber[a]=a+1; // To Store All Joint Account Numbers One By One
		  cout<<"\n           Your Account Number Is: "<<jaccountnumber[a];
		  cout<<"\n";
		  cout<<"           Do You Want To Generate Another Account (y/n)?";
		  cout<<"\n";
		  cin>>decision;
		  if(decision=='y') // Validation For Generating Another Account
		  {
		    a++; // To Generate Account Numbers In Sequence
		    system("cls"); // To Get Screen Clear	
		    goto again1; // To Go Back To Generate New Account
		  }
		  if(decision=='n') // Validation To Go Back To Menu
		  {	
		   system("cls"); // To Get Screen Clear	
		   goto again2; // To Go Back To Menu
		  }
		  }
		  else 
		  {
		  	
		  cout<<"\n\n\n\n\n";
		  system("cls"); // To Get Screen Clear	
		  system("color 4F"); // For Colours
		  cout<<"\n\n Oops! Account Has Not Been Generated";
		  cout<<"\n\n";
		  cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"   "<<u<<"            "<<u<<endl;
		  cout<<"   "<<u<<"   Reason   "<<u<<endl;
		  cout<<"   "<<u<<"            "<<u<<endl;
		  cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"\n\n Sorry! Amount Greater Than Rs.1000 Is Required For Generating An Account";
		  cout<<"\n\n";
		  cout<<"\n Please Enter Your Amount Again  ";
		  cout<<"\n\n";
		  cin>>jamount[a]; // To Store Amount Required for Creating A New Account
		  goto start; // To Get Back To Amount Selection Again And Again According To Condition
	      }
	    }
	     if(n2==2) // Validation For Selection Of Current Account Only 
	    {
	    
	      again3:	
	      cout<<"\n\n\n\n";
		  system ("cls"); // To Get Screen Clear	
		  system("color F1"); // For Colours
		  cout<<"\n\n Enter The Details Of Applicant";
		  cout<<"\n\n\n";
		  cout<<"\n Enter Your Name" ;
		  cout<<"\n";      
		  cin>>cname[a]; // To Store Nmae Of Applicant     
		  cout<<"\n Enter Your Surname Name";
		  cout<<"\n";     
		  cin>>cSname[a]; // To Store Surname Of Applicant 
		  cout<<"\n Please Enter Your Address";
		  cout<<"\n";     
		  cin>>caddress[a]; // To Store Address Of Applicant     
		  cout<<"\n Enter Your CNIC Number";
		  cout<<"\n CNIC Number Format Should Be: xxxxx-xxxxxxx-x";
		  cout<<"\n";     
		  cin>>cCNIC_No[a]; // To Store CNIC Number Of Applicant
		  cout<<"\n Enter Your Cell Phone Number";
		  cout<<"\n";     
		  cin>>cPnumber[a]; // To Store Phone Number Of Applicant   
		  cout<<"\n Please Enter some Amount";
		  cout<<"\n";     
		  cin>>camount[a]; // To Store Amount Required for Creating A New Account
		  start1: // To Run The Program Again And Again According To A Specified Condition
		  if(camount[a]>1000) // Validation For The Amount Required For Creating New Account 
		  {
		  system("cls"); // To Get Screen Clear		
		  system("color 9F");  // For Colours
		  cout<<"\n\n\n\n\n\n\n\n\n";
		  cout<<"\n           Name:          " <<cname[a];
		  cout<<"\n           Surname Name:  " <<cSname[a];
		  cout<<"\n           Address:       " <<caddress[a];
		  cout<<"\n           CNIC_No:       " <<cCNIC_No[a];     
		  cout<<"\n           Phone_No:      " <<cPnumber[a];
		  time_t t=time(NULL); // To Store Time According To Our System
		  tm*timePtr = localtime(&t); // To Store Time According To Our System
		  cout<<"\n           Date:          "<<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900;
		  cout<<"\n           Time:          "<<(timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec);  
		  sum=++sum; // To Add Account Nmubers
		  cout<<"\n           Congrats!! Your Account Has Been Generated";
		  caccountnumber[a]=a+1; // To Store All Current Account Numbers One By One
		  cout<<"\n           Your Account Number Is: "<<caccountnumber[a];
		  cout<<"\n";
		  cout<<"           Do You Want To Generate Another Account (y/n)?";
		  cout<<"\n";
		  cin>>decision;
		  if(decision=='y')  // Validation For Generating Another Account
		  {	
            a++; // To Generate Account Numbers In Sequence
		    system("cls"); // To Get Screen Clear
		    goto again3; // To Go Back To Generate New Account	
		  }
		  if(decision=='n') // Validation To Go Back To Menu
		  {
		   	system("cls"); // Validation To Get Screen Clear
		   goto again2; // To Go Back To Menu
		  }
		  }
		  else 
		  {
		  cout<<"\n\n\n\n\n";
		  system("cls"); // To Get Screen Clear	
		  system("color 4F");  // For Colours
		  cout<<"\n\n Oops! Account Has Not Been Generated";
		  cout<<"\n";
		  cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"   "<<u<<"            "<<u<<endl;
		  cout<<"   "<<u<<"   Reason   "<<u<<endl;
		  cout<<"   "<<u<<"            "<<u<<endl;
		  cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"\n\n Sorry! Amount Greater Than Rs.1000 Is Required For Generating An Account";
		  cout<<"\n\n";
		  cout<<"\n Please Enter Your Amount Again  ";
		  cout<<"\n";
		  cin>>camount[a]; // To Store Amount Required for Creating A New Account
		  goto start1; // To Run The Program Again And Again According To A Specified Condition
	      }
	      cout<<"\n";       
	      system("cls"); // To Get Screen Clear	
	  }
      if(option==2)
      {
	  	system("cls"); // To Get Screen Clear	
	  	goto up;
	  }
	  
        }
	  
}
        if (menu==2) // For Reopening An Account 
	    {
	    	system("Cls"); // To Get Screen Clear	
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"        Reopen An Account         "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	    	cout<<"\n\n\n";
	        system ("color 0F");
		    cout<<"\n\n Please Select Type Of Account For Details";
	        cout<<"\n\n\n  (1)Joint Bank Account";
		    cout<<"\n\n\n  (2)Current Account";
		    cout<<"\n\n";
		    cin>>n2; // For Selection Of Nmuber Of Type Of Account
		  	system("cls");  // To Get Screen Clear	
		     while((n2<1) || (n2>2)) // Validation For Selection Of Nmuber Of Type Of Account
		  {
		  	cout<<"\n   Invalid Type Entered";
		  	cout<<"\n\n Please Enter The B/W (1-2)";
		  	cout<<"\n\n";
		  	cin>>n2; // For Selection Of Nmuber Of Type Of Account	
		  }
		  if(n2==1)
		  {
		    again4: // To Comeback If You Want To Generate Another Account
		    int p=0; // To Store All Data Of New Generating Accounts 
		    cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"        Reopen An Account         "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		    cout<<"\n\n";
		    cout<<"\n Please Enter Your Account Number To Reopen Your Account";
		    cout<<"\n";
		    back1: // To Comeback To Enter Details
		    cin>>p; // To Store Joint Account Number To Reopen
		    a=p-1; // As I Have Declared P=0 At The Start Of This Menu For Initilization And If We Put P=1
			       // Then We Get a=0 From Which Index Number Stated		    
		    if(p==jaccountnumber[a])  // Validation For The Enterence Of Correct Account Number
		    {
		    cout<<"\n           Name:          " <<jname[a];
		    cout<<"\n           Name Second:   " <<name2[a];
		    cout<<"\n           Surname Name:  " <<jSname[a];
		    cout<<"\n           Address:       " <<jaddress[a];
		    cout<<"\n           CNIC_No:       " <<jCNIC_No[a];     
		    cout<<"\n           Phone_No:      " <<jPnumber[a];
		    cout<<"\n\n\n Congrats!! Your Account Has Been Reopened";
		    }
		    if(p!=jaccountnumber[a]) // Validation For The Enterence Of Incorrect Account Number
		    {
		    	cout<<"\n\n\n";
		    	cout<<"\n\n Invalid Account Number Entered";
		    	cout<<"\n\n Please Enter A Valid Account Number";
		    	cout<<"\n";
		    	goto back1; // To Go Back To Details
			}
		    cout<<"\n\n\n";
		    cout<<"\n\n   Do You Want To Check Balance Details Of Another Account (y/n)?";
		    cout<<"\n";
		    cin>>decision;
		  if(decision=='y')
		  {
		  	a++; // To Generate Account Numbers In Sequence
		    system("cls"); // To Get Screen Clear	
		    goto again4; // To Goback If You Want To Generate Another Account 	
		  }
		  if(decision=='n')
		  {
		  	system("cls");  // To Get Screen Clear	
		   goto again2;  // To Go Back To Menu
		  }
	    	cout<<"\n\n";
	        system("cls");  // To Get Screen Clear	
	        goto jump; // To Get Back To Menu Again And Again According To Condition
		   }
		    if(n2==2)
		  {
		    again5: // To Comeback If You Want To Generate Another Account
		    int p2=0; // To Store All Data Of New Generating Accounts 
		    cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"        Reopen An Account         "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		    cout<<"\n\n";
		    cout<<"\n Please Enter Your Account Number To Reopen Your Account";
		    cout<<"\n";
		    back2: // To Comeback To Enter Details
		    cin>>p2;  // To Store Current Account Number To Reopen
		    a=p2-1; // As I Have Declared P2=0 At The Start Of This Menu For Initilization And If We Put P2=1
			       // Then We Get a=0 From Which Index Number Stated		    
		    if(p2==caccountnumber[a]) // Validation For The Enterence Of Correct Account Number
		    {
		    cout<<"\n           Name:          " <<cname[a];
		    cout<<"\n           Surname Name:  " <<cSname[a];
		    cout<<"\n           Address:       " <<caddress[a];
		    cout<<"\n           CNIC_No:       " <<cCNIC_No[a];     
		    cout<<"\n           Phone_No:      " <<cPnumber[a];
		    cout<<"\n\n\n Congrats!! Your Account Has Been Reopened";
		    }
		     if(p2!=caccountnumber[a]) // Validation For The Enterence Of Inorrect Account Number
		    {
		    	cout<<"\n\n\n";
		    	cout<<"\n\n Invalid Account Number Entered";
		    	cout<<"\n\n Please Enter A Valid Account Number";
		    	cout<<"\n";
		    	goto back2;  // To Go Back To Details
			} 
		    cout<<"\n\n\n";
		    cout<<"\n\n   Do You Want To Check Balance Details Of Another Account (y/n)?";
		    cout<<"\n";
		    cin>>decision;
		  if(decision=='y') // Validation For Generating Another Account
		  {
		  	a++; // To Generate Account Numbers In Sequence
		    system("cls"); // To Get Screen Clear	
		    goto again5; // To Goback If You Want To Generate Another Account 	
		  }
		  if(decision=='n') // Validation To Go Back To Menu
		  {
		   system("cls");  // To Get Screen Clear		
		   goto again2; // To Go Back To Menu
		  }
		  	cout<<"\n\n";
	        system("cls");  // To Get Screen Clear	
	        goto jump; // To Get Back To Menu Again And Again According To Condition
	    }
	}
		if (menu==3) // To Close An Account
		{
		    system("cls");  // To Get Screen Clear		
		    system("color 6F"); // For Colours
			cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"        Delete An Account         "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		    cout<<"\n\n Please Select Type Of Account For Details";
	        cout<<"\n\n\n  (1)Joint Bank Account";
		    cout<<"\n\n\n  (2)Current Account";
		    cout<<"\n\n";
		    cin>>n2; // For Selection Of Nmuber Of Type Of Account
		    system("cls");  // To Get Screen Clear	
		     while((n2<1) || (n2>2)) // Validation For Selection Of Nmuber Of Type Of Account
		    {
		  	cout<<"\n   Invalid Type Entered";
		  	cout<<"\n\n Please Enter The B/W (1-2)";
		  	cout<<"\n\n";
		  	cin>>n2; // For Selection Of Nmuber Of Type Of Account
		    }
		    if(n2==1)
		    {
		    again6:  // To Comeback To Enter Details
			int p3=0;
		    cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"        Delete An Account         "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		    cout<<"\n Enter Account Number That You Want To Delete";
		    cout<<"\n";
		    back3:
		    cin>>p3; // To Store Joint Account Number To Delete
		    a=p3-1; // As I Have Declared 3=0 At The Start Of This Menu For Initilization And If We Put P3=1			       // Then We Get a=0 From Which Index Number Stated		    
		    if(p3==jaccountnumber[a]) // Validation For The Enterence Of Correct Joint Account Number
		    {
			jname[a]="";
			jSname[a]="";
			name2[a]="";
			jaddress[a]="";
			jCNIC_No[a]="";     
			jPnumber[a]=0;
			jamount[a]=0;
			jdeposit[a]=0;
			    cout<<"\n\n\n   Congrats!! Your Account Has Been Deleted";
			    }
			    if(p3!=jaccountnumber[a]) // Validation For The Enterence Of Incorrect Joint Account Number
		    {
		    	cout<<"\n\n\n";
		    	cout<<"\n\n Invalid Account Number Entered";
		    	cout<<"\n\n Please Enter A Valid Account Number";
		    	cout<<"\n";
		    	goto back3; // To Go Back To Details
			} 
			    cout<<"\n\n   Do You Want To Delete Another Account (y/n)?";
		        cout<<"\n";
		    cin>>decision;
		  if(decision=='y') // Validation For Generating Another Account
		  {
		  	a++; // To Generate Account Numbers In Sequence
		  	system("cls");  // To Get Screen Clear	
		    goto again6; // To Goback If You Want To Generate Another Account 	
		  }
		  if(decision=='n') // Validation To Go Back To Menu
		  {
		  	system("cls");  // To Get Screen Clear	
		   goto again2;  // To Go Back To Menu
		  }
	        system("cls"); // To Get Screen Clear	
	        goto jump; // To Get Back To Menu Again And Again According To Condition
	    }
		 if(n2==2)
		    {
		    again7:
		    system("cls"); // To Get Screen Clear		
			int p4=0;
		    cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"        Delete An Account         "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		    	cout<<"\n Enter Account Number That You Want To Delete";
		    	cout<<"\n";
		    	back4:   // To Comeback To Enter Details
		    	cin>>p4; // To Store Current Account Numebr To Delete
		    	a=p4-1; // As I Have Declared P4=0 At The Start Of This Menu For Initilization And If We Put P4=1
			       // Then We Get a=0 From Which Index Number Stated		    
		    	if(p4==caccountnumber[a]) // Validation For The Enterence Of Correct Current Account Number
		    	{
				cname[a]="";
			    cSname[a]="";
			    caddress[a]="";
			    cCNIC_No[a];     
			    cPnumber[a]=0;
			    camount[a]=0;
			    cdeposit[a]=0;
			    cout<<"\n\n\n   Congrats!! Your Account Has Been Deleted";
			    }
				if(p4!=caccountnumber[a]) // Validation For The Enterence Of Incorrect Current Account Number
		    {
		    	cout<<"\n\n\n";
		    	cout<<"\n\n Invalid Account Number Entered";
		    	cout<<"\n\n Please Enter A Valid Account Number";
		    	cout<<"\n";
		    	goto back4;  // To Go Back To Details
			}    
			    cout<<"\n\n   Do You Want To Delete Another Account (y/n)?";
		        cout<<"\n";
		    cin>>decision;
		  if(decision=='y') // Validation For Generating Another Account
		  {
		  	a++; // To Generate Account Numbers In Sequence
		  	system("cls");  // To Get Screen Clear	
		    goto again7; // To Goback If You Want To Generate Another Account 	
		  }
		  if(decision=='n') // Validation To Go Back To Menu
		  {
		  	system("cls");  // To Get Screen Clear	
		   goto again2; // To Go Back To Details
		  }
	        system("cls"); // To Get Screen Clear	
	        goto jump; // To Get Back To Menu Again And Again According To Condition
		}
	}

		if (menu==4) // Balance Info
		{
		    system("cls"); // To Get Screen Clear 
			cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"     Check Your Balance Info      "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	    	cout<<"\n\n";
	        system("color 9E");  // For Colours	
	        int n2; // For The Selection Of Type Of Account
		    cout<<"\n\n Please Select Type Of Account For Details";
	        cout<<"\n\n\n  (1)Joint Bank Account";
		    cout<<"\n\n\n  (2)Current Account";
		    cout<<"\n\n";
		    cin>>n2; // For Selection Of Nmuber Of Type Of Account
		     while((n2<1) || (n2>2)) // Validation For Selection Of Nmuber Of Type Of Account
		    {
		  	cout<<"\n   Invalid Type Entered";
		  	cout<<"\n\n Please Enter The B/W (1-2)";
		  	cout<<"\n\n";
		  	cin>>n2; // For Selection Of Nmuber Of Type Of Account
		    }
		if (n2==1)
		{ 
		    again8: // To Comeback To Enter Details
		    int p5=0;
	        system("cls"); // To Get Screen Clear
		    cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"     Check Your Balance Info      "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
			system("color 1F"); // For Colours	     
		    cout<<"\n Enter The Account Number To Check Balance Info";
		    cout<<"\n";
		    back5:  // To Go Back To Details
		    cin>>p5; // To Store Joint Account Number To Check Balance Info
		    a=p5-1; // As I Have Declared P5=0 At The Start Of This Menu For Initilization And If We Put P5=1
			       // Then We Get a=0 From Which Index Number Stated		    
		    if(p5==jaccountnumber[a]) // Validation For The Enterence Of Correct Joint Account Number
		    {
		    	cout<<"\n                       Name:          " <<jname[a];
		        cout<<"\n                       Surname Name:  " <<jSname[a];
		    	cout<<"\n                       Balance Status " <<jamount[a];
		    	cout<<"\n\n";
		    }
		    if(p5!=jaccountnumber[a]) // Validation For The Enterence Of Incorrect Joint Account Number
		    {
		    	cout<<"\n\n\n";
		    	cout<<"\n\n Invalid Account Number Entered";
		    	cout<<"\n\n Please Enter A Valid Account Number";
		    	cout<<"\n";
		    	goto back5;  // To Comeback To Enter Details
			}
		        cout<<"\n";
		        cout<<"\n\n           Do You Want To Check Balance Details Of Another Account (y/n)?";
		        cout<<"\n";
		        cin>>decision;
		  if(decision=='y') // Validation For Generating Another Account
		  {
			a++; // To Generate Account Numbers In Sequence	
		    system("cls"); // To Get Screen Clear
		    goto again8;  // To Go Back To Check Details Of Another Account  		
		  }
		  if(decision=='n')	// Validation To Go Back To Menu
		  {
		   system("cls"); // To Get Screen Clear
		   goto again2;  // To Go Back To Menu 
		  }
	            system("cls"); // To Get Screen Clear	 
	            goto jump; // To Get Back To Menu Again And Again According To Condition
			 }
	    if (n2==2)
		{ 
		    again9: 
			int p6=0;  
	        system("cls"); // To Get Screen Clear
		    cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"     Check Your Balance Info      "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
			system("color 1F"); // For Colours	     
		    cout<<"\n Enter The Account Number To Check Balance Info";
		    cout<<"\n";
		    back6: // To Comeback To Enter Details
		    cin>>p6;  // To Store Current Account Number To Check Balance Info
		    a=p6-1; // As I Have Declared P6=0 At The Start Of This Menu For Initilization And If We Put P6=1
			       // Then We Get a=0 From Which Index Number Stated
			if(p6==caccountnumber[a]) // Validation For The Enterence Of Correct Current Account Number		    
		     {
		    	cout<<"\n                       Name:          " <<cname[a];
		        cout<<"\n                       Surname Name:  " <<cSname[a];
		    	cout<<"\n                       Balance Status " <<camount[a];
		    }
		     if(p6!=caccountnumber[a]) // Validation For The Enterence Of Incorrect Current Account Number
		    {
		    	cout<<"\n\n\n";
		    	cout<<"\n\n Invalid Account Number Entered";
		    	cout<<"\n\n Please Enter A Valid Account Number";
		    	cout<<"\n";
		    	goto back6;  // To Go Back To Details
			}
		    	cout<<"\n\n";
		    	cout<<"\n\n           Do You Want To Check Balance Details Of Another Account (y/n)?";
		        cout<<"\n";
		        cin>>decision;
		  if(decision=='y') // Validation For Generating Another Account
		  {
		    a++; // To Generate Account Numbers In Sequence	
		    system("cls"); // To Get Screen Clear	
		    goto again9;  // To Go Back To Check Details Of Another Account  		
		  }
		  if(decision=='n') // Validation To Go Back To Menu
		  {
		  	system("cls"); // To Get Screen Clear	
		    goto again2; // To Go Back To Menu
		  }
	            system("cls"); // To Get Screen Clear	 
	            goto jump; // To Get Back To Menu Again And Again According To Condition
			 }
	}
		if (menu==5) // Account Details
		{ 
		    system("cls"); // To Get Screen Clear 
			cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"    Check Your Account Details    "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	    	cout<<"\n\n";
	    	system("color 6F");  // For Colours
	        int n2; // For The Selection Of Type Of Account
		    cout<<"\n\n Please Select Type Of Account For Details";
	        cout<<"\n\n\n  (1)Joint Bank Account";
		    cout<<"\n\n\n  (2)Current Account";
		    cout<<"\n\n";
		    cin>>n2; // For Selection Of Nmuber Of Type Of Account
		     while((n2<1) || (n2>2)) // Validation For Selection Of Nmuber Of Type Of Account
		    {
		  	cout<<"\n   Invalid Type Entered";
		  	cout<<"\n\n Please Enter The B/W (1-2)";
		  	cout<<"\n\n";
		  	cin>>n2; // For Selection Of Nmuber Of Type Of Account
		    }
		if (n2==1)
		{
		    again10: // To Check Details Of Another Account  
		    int p7=0;
	        system("cls"); // To Get Screen Clear
		    cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"    Check Your Account Details    "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
			system("color 3F"); // For Colours	     
		    cout<<"\n Enter The Account Number To Check Account Details";
		    cout<<"\n";
		    back7:
		    cin>>p7; // To Store Joint Account Number To Check Account Details
		    a=p7-1; // As I Have Declared P7=0 At The Start Of This Menu For Initilization And If We Put P7=1
			       // Then We Get a=0 From Which Index Number Stated
		    if(p7==jaccountnumber[a]) // Validation For The Enterence Of Correct Joint Account Number	
		     {
		     	 cout<<"\n           Name:          " <<jname[a];
		    	 cout<<"\n           Name Second:   " <<name2[a];
		         cout<<"\n           Surname Name:  " <<jSname[a];
		         cout<<"\n           Address:       " <<jaddress[a];
		         cout<<"\n           CNIC_No:       " <<jCNIC_No[a];     
		         cout<<"\n           Phone_No:      " <<jPnumber[a];
		         time_t t=time(NULL);
		         tm*timePtr = localtime(&t);
		         cout<<"\n           Date:          "<<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900;
		         cout<<"\n           Time:          "<<(timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec);  
		     }
		    if(p7!=jaccountnumber[a])  // Validation For The Enterence Of Incorrect Joint Account Number
		    {
		    	cout<<"\n\n\n";
		    	cout<<"\n\n Invalid Account Number Entered";
		    	cout<<"\n\n Please Enter A Valid Account Number";
		    	cout<<"\n";
		    	goto back7;
			}
				cout<<"\n";
		        cout<<"\n\n           Do You Want To Check Account Details Of Another Account (y/n)?";
		        cout<<"\n";
		        cin>>decision;
		  if(decision=='y') // Validation For Generating Another Account
		  {	
		    a++; // To Generate Account Numbers In Sequence	
		    system("cls"); // To Get Screen Clear	
		    goto again8;  // To Go Back To Check Details Of Another Account  		
		  }
		  if(decision=='n') // Validation To Go Back To Menu
		  {
		  	system("cls"); // To Get Screen Clear	
		   goto again2; // To Go Back To Menu
	     }
	            system("cls"); // To Get Screen Clear	 
	            goto jump; // To Get Back To Menu Again And Again According To Condition
			 }
	    if (n2==2)
		{ 
		    again11: // To Comeback To Details
		    int p8=0;   
	        system("cls"); // To Get Screen Clear    
			cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"    Check Your Account Details    "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	    	system("color 3F");  // For Colours
		    cout<<"\n Enter The Account Number To Check Account Details";
		    cout<<"\n";
		    back8: // To Go Back To Details
		    cin>>p8;  // To Store Current Account Number To Check Account Details
		    a=p8-1;  // As I Have Declared P8=0 At The Start Of This Menu For Initilization And If We Put P8=1
			       // Then We Get a=0 From Which Index Number Stated	
				if(p8==caccountnumber[a]) // Validation For The Enterence Of Correct Joint Account Number		  
		     {
		     	  cout<<"\n           Name:          " <<cname[a];
		    	  cout<<"\n           Surname Name:  " <<cSname[a];
				  cout<<"\n           Address:       " <<caddress[a];
				  cout<<"\n           CNIC_No:       " <<cCNIC_No[a];     
				  cout<<"\n           Phone_No:      " <<cPnumber[a];
				  time_t t=time(NULL);
				  tm*timePtr = localtime(&t);
				  cout<<"\n           Date:          "<<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900;
				  cout<<"\n           Time:          "<<(timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec);  
			}   
			   if(p8!=caccountnumber[a])  // Validation For The Enterence Of Incorrect Joint Account Number
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
		    goto again11;  // To Go Back To Check Details Of Another Account  
			system("Pause"); // To Take A Pause After Input Or Result		
		  }
		  if(decision=='n') 	// Validation To Go Back To Menu
		  {
		   system("cls"); // To Get Screen Clear		
		   goto again2;  // To Go Back To Menu
		  }
	            system("cls"); // To Get Screen Clear	 
	            goto jump; // To Get Back To Menu Again And Again According To Condition
	    }    
		}
		if (menu==6) // To Modify Your Account
		{
		 system("CLS"); // To Get Screen Clear
	      system("color 5F"); // For Colours
	      cout<<"\n\n";
	      cout<<"       "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	      cout<<"       "<<u<<"                            "<<u<<endl;
	      cout<<"       "<<u<<"     Modify Your Account    "<<u<<endl;
	      cout<<"       "<<u<<"                            "<<u<<endl;
		  cout<<"       "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"\n";
		  cout<<"\n\n Please Select Type Of Account ";
	      cout<<"\n\n\n  (1)Joint Bank Account";
		  cout<<"\n\n\n  (2)Current Account";
		  cout<<"\n\n\n\n";
		  cin>>n2; // For Selection Of Nmuber Of Type Of Account
		   while((n2<1) || (n2>2)) // Validation For Selection Of Nmuber Of Type Of Account
		  {
		  	cout<<"\n   Invalid Type Entered";
		  	cout<<"\n\n Please Enter The B/W (1-2)";
		  	cout<<"\n\n";
		  	cin>>n2;
		  }
		  if(n2==1)
		  {
		  	system("cls"); // To Get Screen Clear
		  	string njname[25]; // For New Name Of 1st Applicant Name For Joint Account 
		  	string njSname[25]; // For New Surname 1st Applicant Name For Joint Account 
		  	string njaddress[25]; // For New Address 1st Applicant Name For Joint Account
			string njCNIC_No[25]; // For New CNIC_No 1st Applicant Name For Joint Account  
			int njPnumber[25]; // For New 1st Applicant Name For Joint Account 
			char nrelation[25]; // To Show New Relation For Joint Account
			string nname2[25]; // For New Name Of 2nd Applicant Name For Joint Account 
		  	string nSname2[2]; // For New Surname 2nd Applicant Name For Joint Account 
		  	string naddress2[25]; // For New Address 2nd Applicant Name For Joint Account
			string nCNIC_No2[25]; // For New CNIC_No 2nd Applicant Name For Joint Account  
			int nPnumber2[25]; // For New 2nd Applicant Name For Joint Account
		  	again12:  // To Comeback To Enter Details
		  	int q=0;
			system("color 3F"); // For Colours
		  cout<<"       "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	      cout<<"       "<<u<<"                            "<<u<<endl;
	      cout<<"       "<<u<<"     Modify Your Account    "<<u<<endl;
	      cout<<"       "<<u<<"                            "<<u<<endl;
		  cout<<"       "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
			cout<<"Enter The Account Number That You Want To Modify";
			cout<<"\n";
			back9: // To Comeback To Enter Details
			cin>>q;  // To Store Joint Account Number To Check Modify Your Account Details
			a=q-1; // As I Have Declared q=0 At The Start Of This Menu For Initilization And If We Put q=1
			       // Then We Get a=0 From Which Index Number Stated
			if(q==jaccountnumber[a]) // Validation For The Enterence Of Correct Joint Account Number	
		{		
		  cout<<"\n Enter The New Details Of First Applicant"<<"\t\t\t\t Enter The New Details Of Second Applicant";
		  cout<<"\n\n\n";
		  cout<<"\n Enter New Name "<<"\t\t\t\t\t\t\t Enter New Second Name ";
		  cout<<"\n";            
		  cin>>njname[a]; // To Store Name Of 1st Applicant   
		  cout<<"\t\t\t\t\t\t\t\t\t";
		  cin>>nname2[a]; // To Store Name Of 2nd Applicant
		  cout<<"\n Enter New Surname Name" <<"    \t\t\t\t\t\t Enter New Second Surname";
		  cout<<"\n";       
		  cin>>njSname[a]; // To Store Surname Of 1st Applicant
		  cout<<"\t\t\t\t\t\t\t\t\t";       
		  cin>>nSname2[a]; // To Store Surname Of 2nd Applicant
		  cout<<"\n Please Enter New Address"<<"\t\t\t\t\t\t Enter New Second Address";
		  cout<<"\n";       
		  cin>>njaddress[a]; // To Store Address Of 1st Applicant 
		  cout<<"\t\t\t\t\t\t\t\t\t";
		  cin>>naddress2[a]; // To Store Address Of 2nd Applicant 		   
		  cout<<"\n Enter New CNIC Number"<<"\t\t\t\t\t\t\t Enter New Second CNIC Number";
		  cout<<"\n CNIC Number Format Should Be: xxxxx-xxxxxxx-x"<<"\t\t\t\t CNIC Number Format Should Be: xxxxx-xxxxxxx-x";
		  cout<<"\n";       
		  cin>>njCNIC_No[a]; // To Store CNIC Number Of 1st Applicant
		  cout<<"\t\t\t\t\t\t\t\t\t";
		  cin>>nCNIC_No2[a]; // To Store CNIC Number Of 2nd Applicant
		  cout<<"\n Enter New Cell Phone Number"<<"\t\t\t\t\t\t Enter New Second Cell Phone Nmuber";
		  cout<<"\n";       
		  cin>>njPnumber[a]; // To Store Phone Number Of 1st Applicant
		  cout<<"\t\t\t\t\t\t\t\t\t"; 
		  cin>>nPnumber2[a]; // To Store Phone Number Of 2nd Applicant
		  jname[a]=njname[a];
		  jSname[a]=njSname[a];
		  relation[a]=nrelation[a];
		  jaddress[a]=njaddress[a];
		  jCNIC_No[a]=njCNIC_No[a];
		  jPnumber[a]=njPnumber[a];
		  name2[a]=nname2[a];
		  Sname2[a]=nSname2[a];
		  address2[a]=naddress2[a];
		  CNIC_No2[a]=nCNIC_No2[a];
		  Pnumber2[a]=nPnumber2[a];
		  system("cls");
		  
		  cout<<"       "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	      cout<<"       "<<u<<"                            "<<u<<endl;
	      cout<<"       "<<u<<"     Modify Your Account    "<<u<<endl;
	      cout<<"       "<<u<<"                            "<<u<<endl;
		  cout<<"       "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"\n\n";
		  cout<<"                      "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"                      "<<u                                             <<"     First Applicant      "<<u<<endl;
		  cout<<"                      "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;  
		  cout<<"\n           Name:          " <<njname[a];
		  cout<<"\n           Surname Name:  " <<njSname[a];
		  cout<<"\n           Address:       " <<njaddress[a];
		  cout<<"\n           CNIC_No:       " <<njCNIC_No[a];     
		  cout<<"\n           Phone_No:      " <<njPnumber[a];
		  cout<<"\n\n";
		  
		  cout<<"                      "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"                      "<<u                                             <<"     Second Applicant     "<<u<<endl;
		  cout<<"                      "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;  
          cout<<"\n           Name Second:   " <<nname2[a];
		  cout<<"\n           Surname Name:  " <<nSname2[a];
		  cout<<"\n           Address:       " <<naddress2[a];
		  cout<<"\n           CNIC_No:       " <<nCNIC_No2[a];     
		  cout<<"\n           Phone_No:      " <<nPnumber2[a];
		  cout<<"\n\n";
		  cout<<"\n         Your Account Details Has Been Modified";
		  cout<<"\n";
	    }   
	      if(q!=jaccountnumber[a])  // Validation For The Enterence Of Incorrect Joint Account Number
		    {
		    	cout<<"\n\n\n";
		    	cout<<"\n\n Invalid Account Number Entered";
		    	cout<<"\n\n Please Enter A Valid Account Number";
		    	cout<<"\n";
		    	goto back9;  // To Go Back To Details
			}
		  cout<<"\n     Do You Want To Modify Another Account (y/n)?";
		    cout<<"\n";
		    cin>>decision;
		  if(decision=='y')  // Validation For Generating Another Account
		  {
		  	a++; // To Generate Account Numbers In Sequence	
		    system("cls"); // To Get Screen Clear	
		    goto again12;  // To Go Back To Check Details Of Another Account  		
		  }
		  if(decision=='n') // Validation To Go Back To Menu
		  {
		  	system("cls"); // To Get Screen Clear
		     goto again2;  // To Go Back To Menu
		  }
	            system("cls"); // To Get Screen Clear	 
	            goto jump; // To Get Back To Menu Again And Again According To Condition
	         }
	    if (n2==2)
		{
		    system("Cls"); // To Get Screen Clear
		  	string ncname[25]; // For New Name Of Applicant Name For Current Account 
		  	string ncSname[25]; // For New Surname Applicant Name For Current Account 
		  	string ncaddress[25]; // For New Address Applicant Name For Current Account
			string ncCNIC_No[25]; // For New CNIC_No Applicant Name For Current Account  
			int ncPnumber[25]; // For New Applicant Name For Current Account 
			again13:  // To Comeback To Enter Details
			int q1=0;
		    cout<<"       "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"       "<<u<<"                            "<<u<<endl;
	        cout<<"       "<<u<<"     Modify Your Account    "<<u<<endl;
	        cout<<"       "<<u<<"                            "<<u<<endl;
		    cout<<"       "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		    cout<<"\n\n Enter The Account Number That You Want To Modify";
			cout<<"\n";
			back10:  // To Comeback To Enter Details
		    cin>>q1; // To Store Current Account Number To Modify Your Account Details
		    a=q1-1;  // As I Have Declared q1=0 At The Start Of This Menu For Initilization And If We Put q1=1
			       // Then We Get a=0 From Which Index Number Stated
		if(q1==caccountnumber[a]) // Validation For The Enterence Of Correct Current Account Number
		{
		  cout<<"\n\n Enter New Details Of Applicant";
		  cout<<"\n\n\n";
		  cout<<"\n Enter New Name" ;
		  cout<<"\n";      
		  cin>>ncname[a]; // To Store Nmae Of Applicant     
		  cout<<"\n Enter New Surname Name";
		  cout<<"\n";     
		  cin>>ncSname[a]; // To Store Surname Of Applicant 
		  cout<<"\n Please Enter New Address";
		  cout<<"\n";     
		  cin>>ncaddress[a]; // To Store Address Of Applicant     
		  cout<<"\n Enter New CNIC Number";
		  cout<<"\n CNIC Number Format Should Be: xxxxx-xxxxxxx-x";
		  cout<<"\n";     
		  cin>>ncCNIC_No[a]; // To Store CNIC Number Of Applicant
		  cout<<"\n Enter New Cell Phone Number";
		  cout<<"\n";
		  cin>>ncPnumber[a]; // To Store Phone Number Of Applicant  
		  cname[a]=ncname[a];
		  cSname[a]=ncSname[a];
		  caddress[a]=ncaddress[a];
		  cCNIC_No[a]=ncCNIC_No[a];
		  cPnumber[a]=ncPnumber[a];
		  system("cls");
		  cout<<"       "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	      cout<<"       "<<u<<"                            "<<u<<endl;
	      cout<<"       "<<u<<"     Modify Your Account    "<<u<<endl;
	      cout<<"       "<<u<<"                            "<<u<<endl;
		  cout<<"       "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
		  cout<<"\n\n";
		  cout<<"\n           Name:          " <<ncname[a];
		  cout<<"\n           Surname Name:  " <<ncSname[a];
		  cout<<"\n           Address:       " <<ncaddress[a];
		  cout<<"\n           CNIC_No:       " <<ncCNIC_No[a];     
		  cout<<"\n           Phone_No:      " <<ncPnumber[a];
		  cout<<"\n         Your Account Details Has Been Modified";
		  cout<<"\n"; 
	}
	  if(q1!=caccountnumber[a])  // Validation For The Enterence Of Incorrect Current Account Number
		    {
		    	cout<<"\n\n\n";
		    	cout<<"\n\n Invalid Account Number Entered";
		    	cout<<"\n\n Please Enter A Valid Account Number";
		    	cout<<"\n";
		    	goto back10;  // To Go Back To Details
			}
		   cout<<"\n     Do You Want To Modify Another Account (y/n)?";
		    cout<<"\n";
		    cin>>decision;
		  if(decision=='y') // Validation For Generating Another Account
		  {
		  	a++; // To Generate Account Numbers In Sequence	
		    system("cls"); // To Get Screen Clear	
		    goto again13;  // To Go Back To Check Details Of Another Account  		
		  }
		  if(decision=='n') // Validation To Go Back To Menu
		  {
		  	system("cls"); // To Get Screen Clear
		     goto again2;  // To Go Back To Menu
		  }
	            system("cls"); // To Get Screen Clear	 
	            goto jump; // To Get Back To Menu Again And Again According To Condition
	         }   
     }
	    if (menu==7) // To Deposit Amount
	{
	    	system("Cls"); // To Get Screen Clear
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"        Deposit Amount            "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	    	cout<<"\n\n\n";
	        int n2; // For Selection Of Nmuber Of Type Of Account
	        system("color 4F");
		    cout<<"\n\n Please Select Type Of Account ";
	        cout<<"\n\n\n  (1)Joint Bank Account";
		    cout<<"\n\n\n  (2)Current Account";
		    cout<<"\n\n\n\n";
		    cin>>n2; // For Selection Of Nmuber Of Type Of Account
		   while((n2<1) || (n2>2)) // Validation For Selection Of Nmuber Of Type Of Account
		  {
		  	cout<<"\n   Invalid Type Entered";
		  	cout<<"\n\n Please Enter The B/W (1-2)";
		  	cout<<"\n\n";
		  	cin>>n2;
		  }
		  if (n2==1)
		  {
		    again14: // To Check Details Of Another Account  
		  	int q2=0;
		  	system("cls"); // To Get Screen Clear
		  	system("color 5F"); // For Colours
		    cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"        Deposit Amount            "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;  	
		  	cout<<"\n\n\n";
	    	cout<<"  Enter The Account Number";
	    	cout<<"\n";
	    	back11:  // To Comeback To Enter Details
	    	cin>>q2; // To Store Joint AccountNumber
	    	a=q2-1;  // As I Have Declared q2=0 At The Start Of This Menu For Initilization And If We Put q2=1
			       // Then We Get a=0 From Which Index Number Stated	
			if(q2==jaccountnumber[a]) // Validation For The Enterence Of Correct Joint Account Number		   	    
	     {
		    cout<<"\n\n\n";
	    	cout<<"  Enter The Amount That You Want To Deposit";
	    	cout<<"\n";
	    	cin>>jdeposit[a]; // To Store Deposit Amount Required For Creating A New Joint Account   
	    	cout<<"\n\n";
	    	cout<<"  Account Holder Are : " <<jname[a] <<"  &  "<<name2[a];
	    	cout<<"\n\n";
	    	cout<<"  Your Existing Balance Is " <<jamount[a];
	    	jamount[a]=jamount[a]+jdeposit[a]; // Formula To Calculate Current Balance After Depositing Amount
	    	cout<<"\n\n";
	    	cout<<"  Your Deposited Amount Is " <<jdeposit[a];
	    	cout<<"\n\n";
	    	cout<<"  Your Current Balance Is " <<jamount[a];
	    	cout<<"\n";
	     }
	      if(q2!=jaccountnumber[a])  // Validation For The Enterence Of Incorrect Joint Account Number
		    {
		    	cout<<"\n\n\n";
		    	cout<<"\n\n Invalid Account Number Entered";
		    	cout<<"\n\n Please Enter A Valid Account Number";
		    	cout<<"\n";
		    	goto back11;  // To Go Back To Details
			}
	    	cout<<"\nDo You Want To Deposit Money Again (y/n)?";
		    cout<<"\n";
		    cin>>decision;
		  if(decision=='y') // Validation For Generating Another Account
		  {
		  	a++; // To Generate Account Numbers In Sequence	
		    system("cls"); // To Get Screen Clear	
		    goto again14;  // To Go Back To Check Details Of Another Account  		
		  }
		  if(decision=='n') // Validation To Go Back To Menu
		  {
		  	system("cls"); // To Get Screen Clear
		     goto again2; // To Go Back To Menu
		  }
	            system("cls"); // To Get Screen Clear	 
	            goto jump; // To Get Back To Menu Again And Again According To Condition
	         }
	    if (n2==2)
		 {
		   again15: // To Comeback To Enter Details
		    int q3=0;	
		  	system("color 2F");  // For Colours
	        cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"        Deposit Amount            "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;  	
		  	cout<<"\n\n\n";	  	
			cout<<"  Enter The Account Number";
			cout<<"\n";
			back12: // To Comeback To Enter Details
	    	cin>>q3; // To Store AccountNumber
	    	a=q3-1; // As I Have Declared q3=0 At The Start Of This Menu For Initilization And If We Put q3=1
			       // Then We Get a=0 From Which Index Number Stated	
			if(q3==caccountnumber[a]) // Validation For The Enterence Of Correct Current Account Number
		    {
	    	cout<<"\n\n\n";
	    	cout<<"  Enter The Amount The You Want To Deposit ";
	    	cout<<"\n";
	    	cin>>cdeposit[a]; // To Store Deposit Amount Required For Creating A New Current Account  
	    	cout<<"\n\n";
	    	cout<<"  Account Holder Is : " <<cname[a];
	    	cout<<"\n\n";
	    	cout<<"  Your Exiting Balance is " <<camount[a];
	        camount[a]=camount[a]+cdeposit[a]; // Formula To Calculate Current Balance After Depositing Amount
	    	cout<<"\n\n";
	    	cout<<"  Your Deposited Amount Is " <<cdeposit[a];
	    	cout<<"\n\n";
	    	cout<<"  Your Current Balance is " <<camount[a];
	        }
	          if(q3!=caccountnumber[a])  // Validation For The Enterence Of Incorrect Current Account Number
		    {
		    	cout<<"\n\n\n";
		    	cout<<"\n\n Invalid Account Number Entered";
		    	cout<<"\n\n Please Enter A Valid Account Number";
		    	cout<<"\n";
		    	goto back12;  // To Go Back To Details
			}
	    	cout<<"\n";
	    	cout<<"\nDo You Want To Deposit Money Again (y/n)?";
		    cout<<"\n";
		    cin>>decision;
		  if(decision=='y')  // Validation For Generating Another Account
		  {
		    a++; // To Generate Account Numbers In Sequence	
		    system("cls"); // To Get Screen Clear	
		    goto again15;  // To Go Back To Check Details Of Another Account  		
		  }
		  if(decision=='n') // Validation To Go Back To Menu
		  {
		  	system("cls"); // To Get Screen Clear
		   goto again2;  // To Go Back To Menu
		  }
	            system("cls"); // To Get Screen Clear	 
	            goto jump; // To Get Back To Menu Again And Again According To Condition	
		} 
		}
			
	if (menu==8) // To Withdraw Amount
	{
	    	system("Cls"); // To Get Screen Clear	
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"        Withdraw Amount           "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	    	cout<<"\n\n\n";
	        int n2; // For Selection Of Nmuber Of Type Of Account
	        system("color 4F");  // For Colours
		    cout<<"\n\n Please Select Type Of Account ";
	        cout<<"\n\n\n  (1)Joint Bank Account";
		    cout<<"\n\n\n  (2)Current Account";
		    cout<<"\n\n\n\n";
		    cin>>n2; // For Selection Of Nmuber Of Type Of Account
		   while((n2<1) || (n2>2)) // Validation For Selection Of Nmuber Of Type Of Account
		  {
		  	cout<<"\n   Invalid Type Entered";
		  	cout<<"\n\n Please Enter The B/W (1-2)";
		  	cout<<"\n\n";
		  	cin>>n2; // For Selection Of Nmuber Of Type Of Account
		  }
		  if (n2==1)
		  {
		  	again16: // To Comeback To Enter Details
		  	int q4=0;
		  	system("cls"); // To Get Screen Clear	
		  	system("color 5F");  // For Colours
		  	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"        Withdraw Amount           "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;	
		  	cout<<"\n\n\n";	  	
	    	cout<<"  Enter The Account Number";
	    	cout<<"\n";
	    	back13:  // To Go back To Enter Details
	    	cin>>q4; // To Store Joint AccountNumber
	    	a=q4-1;  // As I Have Declared q4=0 At The Start Of This Menu For Initilization And If We Put q4=1
			       // Then We Get a=0 From Which Index Number Stated
		    if(q4==jaccountnumber[a]) // Validation For The Enterence Of Correct Joint Account Number		   
	    	{
	    	cout<<"\n\n\n";
	    	cout<<"  Enter The Amount That You Want To Withdraw";
	    	cout<<"\n";
	    	cin>>jwithdraw[a]; // To Store Withdrawn Amount Required For Creating A New Current Account
	    	while (jwithdraw[a]>jamount[a]) // Validation For Greater Withdrawn Amount Than Existing Amount
	    	{
	    		cout<<"\n Sorry You Do Not Have Enough Balance to Withdraw This Amount";
	    		cout<<"\n";
	    		cout<<"\n Please Enter The Amount That You Want To Withdraw Again ";
	    	    cout<<"\n";
	    	    cin>>jwithdraw[a]; // To Store Withdrawn Amount Required For Creating A New Joint Account
				goto e;  // Validation For Inserting Amount Greater Than Exiting Amount 
			}
			e:  // Validation For Inserting Amount Greater Than Exiting Amount 
	    	cout<<"\n\n";
	    	cout<<"  Account Holder Are : " <<jname[a] <<"  &  "<<name2[a];
	    	cout<<"\n\n";
	    	cout<<"  Relation Between Them : " <<relation[a];
	    	cout<<"\n\n";
	    	cout<<"  Your Existing Balance Is " <<jamount[a];
	        jamount[a]=jamount[a]-jwithdraw[a]; // Formula To Calculate Current Balance After Withdrawn Amount
	    	cout<<"\n\n";
	    	cout<<"  Your Withdraw Amount Is " <<jwithdraw[a];
	    	cout<<"\n\n";
	    	cout<<"  Your Current Balance Is " <<jamount[a];
	        }
	         if(q4!=jaccountnumber[a])  // Validation For The Enterence Of Incorrect Joint Account Number
		    {
		    	cout<<"\n\n\n";
		    	cout<<"\n\n Invalid Account Number Entered";
		    	cout<<"\n\n Please Enter A Valid Account Number";
		    	cout<<"\n";
		    	goto back13;  // To Go Back To Details
			}
	    	cout<<"\n";
	    	cout<<"\nDo You Want To Withdraw Money Again (y/n)?";
		    cout<<"\n";
		    cin>>decision;
		  if(decision=='y') // Validation For Generating Another Account
		  {
		  	a++; // To Generate Account Numbers In Sequence	
		    system("cls"); // To Get Screen Clear	
		    goto again16;  // To Go Back To Check Details Of Another Account  		
		  }
		  if(decision=='n') // Validation To Go Back To Menu
		  {
		  	system("cls"); // To Get Screen Clear	
		   goto again2; // To Go Back To Menu
		  }
	            system("cls"); // To Get Screen Clear	 
	            goto jump; // To Get Back To Menu Again And Again According To Condition
		    	cout<<"\n\n";	
	       }
		
	    if (n2==2)
		{
			again17: // To Comeback To Enter Details
			int q5=0;
		  	system("cls"); // To Get Screen Clear
		  	system("color 2F");  // For Colours
			cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<"        Withdraw Amount           "<<u<<endl;
	        cout<<"   "<<u<<"                                  "<<u<<endl;
	    	cout<<"   "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;	
		  	cout<<"\n\n\n";	  	
			cout<<"  Enter The Account Number";
			cout<<"\n";
			back14: // To Go Back To Enter Details
	    	cin>>q5; // To Store AccountNumber
	    	a=q5-1;  // As I Have Declared q5=0 At The Start Of This Menu For Initilization And If We Put q5=1
			       // Then We Get a=0 From Which Index Number Stated
			if(q5==caccountnumber[a]) // Validation For The Enterence Of Correct Current Account Number	   		   
			{
	    	cout<<"\n\n\n";
	        cout<<"  Enter The Amount That You Want To Withdraw";
	    	cout<<"\n";
	    	cin>>cwithdraw[a];  // To Store Withdrawn Amount Required For Creating A New Current Account  
	    	while (cwithdraw[a]>camount[a])  // Validation For Greater Withdrawn Amount Than Existing Amount
	    	{
	    		cout<<"Sorry You Do Not Have Enough Balance to Withdraw This Amount";
	    		cout<<"\n";
	    		cout<<"Please Enter The Amount That You Want To Withdraw Again ";
	    	    cout<<"\n";
	    	    cin>>cwithdraw[a]; // To Store Withdrawn Amount Required For Creating A New Current Account 
				goto f;  // Validation For Inserting Amount Greater Than Exiting Amount
			}
			f: // Validation For Inserting Amount Greater Than Exiting Amount
	    	cout<<"\n\n";
	    	cout<<"  Account Holder Is : " <<cname[a];
	    	cout<<"\n\n";
	    	cout<<"  Your Existing Balance is " <<camount[a];
	    	camount[a]=camount[a]-cwithdraw[a]; // Formula To Calculate Current Balance After Withdrawn Amount
	    	cout<<"\n\n";
	    	cout<<"  Your Withdraw Amount Is " <<cwithdraw[a];
	    	cout<<"\n\n";
	    	cout<<"  Your Current Balance is " <<camount[a];
	        }
	          if(q5!=caccountnumber[a])  // Validation For The Enterence Of Incorrect Current Account Number
		    {
		    	cout<<"\n\n\n";
		    	cout<<"\n\n Invalid Account Number Entered";
		    	cout<<"\n\n Please Enter A Valid Account Number";
		    	cout<<"\n";
		    	goto back14;  // To Go Back To Details
			}
	    	cout<<"\n";
	    	cout<<"\nDo You Want To Withdraw Money Again (y/n)?";
		    cout<<"\n";
		    cin>>decision;
		  if(decision=='y') // Validation For Generating Another Account
		  {
		  	a++; // To Generate Account Numbers In Sequence	
		    system("cls"); // To Get Screen Clear	
		    goto again17;  // To Go Back To Check Details Of Another Account  		
		  }
		  if(decision=='n') // Validation To Go Back To Menu
		  {
		  	system("cls"); // To Get Screen Clear	
		    goto again2;  // To Go Back To Menu
		  }
	            system("cls"); // To Get Screen Clear	 
	            goto jump; // To Get Back To Menu Again And Again According To Condition
		    	cout<<"\n\n";	
			} 
        }
	    if (menu==9) // For Loan Details
	    {
	    	system("Cls"); // To Get Screen Clear	
	    	char u=178; // For Designing
	    	system ("color 4F"); // For Colours
	    	cout<<"                                                  "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"                                                  "<<u<<"                                  "<<u<<endl;
	    	cout<<"                                                  "<<u<<"        Read Loan Details         "<<u<<endl;
	        cout<<"                                                  "<<u<<"                                  "<<u<<endl;
	    	cout<<"                                                  "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
			cout<<"\n\n"; 
			char v=254;
			cout<<"\n                   "<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v;
			cout<<"\n                   "<<v<<" Dear Customers! Loan Is A Facility That Provides You Financial Assistance Whenever You Need It."<<v<<endl;
			cout<<"\n                   "<<v<<" So, We Offer Loan Of Various Types.But These Types Also Have Some Conditions To Be Fulfilled.  "<<v<<endl;
			cout<<"\n                   "<<v<<" (1) Financing Limit Is Between PKR 25000 To PKR 2,00,000.                                      "<<v<<endl;
			cout<<"\n                   "<<v<<" (2) Repayment Era Ranging From 12 To 60 Months.                                                "<<v<<endl;
			cout<<"\n                   "<<v<<" (3) Age Limit Is 21 To 60.                                                                     "<<v<<endl;
			cout<<"\n                   "<<v<<" We Avail Loan In Just 5 Minutes Through Some Easy Steps.There Is No Need To Fill Your Forms.   "<<v<<endl;
			cout<<"\n                   "<<v<<" Just Go And Submit Your Documents.Get A Secure And Easy Loan Through Our Bank.                 "<<v<<endl;
			cout<<"\n                   "<<v<<" We Offer Multiple Repayment Options.That Are:                                                  "<<v<<endl;
			cout<<"\n                   "<<v<<" (1) Cross Cheque                                                                               "<<v<<endl;
			cout<<"\n                   "<<v<<" (2) Internet Banking                                                                           "<<v<<endl;
			cout<<"\n                   "<<v<<" (3) Mobile Banking                                                                             "<<v<<endl;
			cout<<"\n                   "<<v<<" (4) Cash Paymen At Various Branches.                                                           "<<v<<endl;
	        cout<<"\n                   "<<v<<" Our Existing Customers And Account Holders Can Enjoy Discounted Rates Based Upon Their         "<<v<<endl;
			cout<<"\n                   "<<v<<" Relationship Era With Us.                                                                      "<<v<<endl;
			cout<<"\n                   "<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v;	                  				
			cout<<"\n\n";
			system("pause"); // To Take A Pause After Input
			system("cls"); // To Get Screen Clear 
			goto jump; // To Get Back To Menu Again And Again According To Condition 
	    	
		}
	if (menu==10)
	    {
			system("Cls"); // To Get Screen Clear			
	    	system("color 0F");
	    	cout<<"          "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"          "<<u<<"                        "<<u<<endl;
	    	cout<<"          "<<u<<"          Report        "<<u<<endl;
	        cout<<"          "<<u<<"                        "<<u<<endl;
	    	cout<<"          "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;	
	    	int n2; // For Selection Of Nmuber Of Type Of Account
		    cout<<"\n\n Please Select Type Of Account ";
	        cout<<"\n\n\n  (1)Joint Bank Account";
		    cout<<"\n\n\n  (2)Current Account";
		    cout<<"\n\n\n\n";
		    cin>>n2; // For Selection Of Nmuber Of Type Of Account
		   while((n2<1) || (n2>2)) // Validation For Selection Of Nmuber Of Type Of Account
		  {
		  	cout<<"\n   Invalid Type Entered";
		  	cout<<"\n\n Please Enter The B/W (1-2)";
		  	cout<<"\n\n";
		  	cin>>n2; // For Selection Of Nmuber Of Type Of Account
		  }
		  if (n2==1)
		  {
	    	system("Cls"); // To Get Screen Clear
			system("color 6F"); // For Colours	
	    	cout<<"          "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"          "<<u<<"                        "<<u<<endl;
	    	cout<<"          "<<u<<"          Report        "<<u<<endl;
	        cout<<"          "<<u<<"                        "<<u<<endl;
	    	cout<<"          "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;	
	    	cout<<"\n\n";
	    	for(int a=0;a<sum;a++)
	    	{
	    		 cout<<"\n\n";
	    	     cout<<"\n           Account No:         " <<jaccountnumber[a];
	    	     cout<<"\n           Name:               " <<jname[a];
		    	 cout<<"\n           Name Second:        " <<name2[a];
		         cout<<"\n           Surname Name:       " <<jSname[a];
		         cout<<"\n           Address:            " <<jaddress[a];
		         cout<<"\n           CNIC_No:            " <<jCNIC_No[a];     
		         cout<<"\n           Phone_No:           " <<jPnumber[a];
		         cout<<"\n           Existing Balance    " <<jamount[a];
		         cout<<"\n           Deposited Amount    " <<jdeposit[a];
	    	     cout<<"\n\n";
		         cout<<"_________________________________________________________________";
			}
			cout<<"\n\n";
			system("Pause");
			system("cls"); // To Get Screen Clear After Input
			goto jump; // To Get Back To Menu Again And Again According To Condition
		  }
	 if (n2==2)
		{
			cout<<"\n\n";
		    system("cls"); // To Get Screen Clear
		    system("color 2F");  // For Colours
	    	cout<<"          "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;
	        cout<<"          "<<u<<"                        "<<u<<endl;
	    	cout<<"          "<<u<<"          Report        "<<u<<endl;
	        cout<<"          "<<u<<"                        "<<u<<endl;
	    	cout<<"          "<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<u<<endl;	
	    	cout<<"\n\n";
	    		for(int a=0;a<sum;a++)
	    	{
	    		 cout<<"\n\n";
	             cout<<"\n           Account No:         " <<caccountnumber[a];
	    	     cout<<"\n           Name:               " <<cname[a];
		         cout<<"\n           Surname Name:       " <<cSname[a];
		         cout<<"\n           Address:            " <<caddress[a];
		         cout<<"\n           CNIC_No:            " <<cCNIC_No[a];     
		         cout<<"\n           Phone_No:           " <<cPnumber[a];
		         cout<<"\n           Existing Balance    " <<camount[a];
		         cout<<"\n           Deposited Amount    " <<cdeposit[a];
		         cout<<"\n\n";
		         cout<<"_________________________________________________________________";
		}
			cout<<"\n\n";
			system("Pause");
			system("cls"); // To Get Screen Clear After Input
			goto jump; // To Get Back To Menu Again And Again According To Condition
		}
	}
		if (menu==11) // For Existing Program
		{
			char w=254; // For Designing
			system("cls"); // To Get Screen Clear After Input	
			system("color 2F"); // For Colours
			cout<<"\n\n\n\n\n\n\n\n\n\n";
		    cout<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<endl;
		    cout<<w<<"\n                                                           "<<w<<"\n";
		    cout<<w<<"\n     I Hope This Project Remained Very Helpful To You!!!   "<<w<<"\n";
		    cout<<w<<"\n          Thanks For Using Bank Mangement System!!!        "<<w<<"\n";
		    cout<<w<<"\n                                                           "<<w<<"\n";
		    cout<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<w<<endl;
			cout<<"\n\n";
			system("pause"); // To Take A Pause After Input Or Result	
			system("cls"); // To Get Screen Clear 
			goto jump; // To Get Back To Menu Again And Again According To Condition

			
			}
		// To Get Back To Menu Again And Again According To Condition

}
    while(menu!=14); // Validation For Selection Of Nmuber Menu

    return 0;
}
		
    






