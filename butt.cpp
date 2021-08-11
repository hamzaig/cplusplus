#include <iostream>
using namespace std;

void write_rec(void);

struct account
{
	char  account_number[20];
    char  firstName[10];
    char  lastName[10];
    float total_Balance;	
};

int main()
{
    int choice;
    cout<<"***Acount Information System***"<<endl;
    while(true)
    {
        cout<<"Select one option below ";
        cout<<"\n\t1-->Add record to file";
        cout<<"\n\t2-->Show record from file";
        cout<<"\n\t3-->Search Record from file";
        cout<<"\n\t4-->Update Record";
        cout<<"\n\t5-->Delete Record";
        cout<<"\n\t6-->Quit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            write_rec();
            break;
        case 2:
            read_rec();
            break;
        case 3:
            search_rec();
            break;
        case 4:
            edit_rec();
            break;
        case 5:
            delete_rec();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout<<"\nEnter corret choice";
            exit(0);
        }
    }
    system("pause");
    return 0;
}
void write_rec(void)
{
	ofstream outfile;
    outfile.open("record.bank", ios::binary|ios::app);
    read_data();
    outfile.write(reinterpret_cast<char *>(this), sizeof(*this));
    outfile.close();
}
void read_data(void)
{
	account ab;
	cout<<"\nEnter Account Number: ";
    cin>>ab.account_number[0];
    cout<<"Enter First Name: ";
    cin>>ab.firstName;
    cout<<"Enter Last Name: ";
    cin>>ab.lastName;
    cout<<"Enter Balance: ";
    cin>>ab.total_Balance;
    cout<<endl;
}
