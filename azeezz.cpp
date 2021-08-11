#include <iostream>
#include <windows.h>
using namespace std;

void mainsystem(void);
void all_fun(void);

int glass=25,total_quantity_glass=0,total_bill_glass=0;

int ninedglass=80,total_quantity_ninedglass=0,total_bill_ninedglass=0;

int colorsheet=25,total_quantity_colorsheet=0,total_bill_colorsheet=0;

int applesheet=35,total_quantity_applesheet=0,total_bill_applesheet=0;

int jellysheet=80,total_quantity_jellysheet=0,total_bill_jellysheet=0;

int zacksheet=10,total_quantity_zacksheet=0,total_bill_zacksheet=0;

int pouch=50,total_quantity_pouch=0,total_bill_pouch=0;

int leatherpouch=100,total_quantity_leatherpouch=0,total_bill_leatherpouch=0;

int printedpouch=110,total_quantity_printedpouch=0,total_bill_printedpouch=0;

int mobilesticker=10,total_quantity_mobilesticker=0,total_bill_mobilesticker=0;

struct stock
{
	int sglass;
	int sninedglass;
	int scolorsheet;
	int sapplesheet;
	int sjellysheet;
	int szacksheet;
	int spouch;
	int sleatherpouch;
	int sprintedpouch;
	int smobilestiker;
};



int main()
{
	
	stock all;
all.sglass=1000;
all.sninedglass=1000;
all.scolorsheet=1000;
all.sapplesheet=1000;
all.sjellysheet=1000;
all.szacksheet=1000;
all.spouch=1000;
all.sleatherpouch=1000;
all.sprintedpouch=1000;
all.smobilestiker=1000;
	
	
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 45;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	
	keybd_event(VK_MENU,0x36,0,0);
	keybd_event(VK_RETURN,0x1c,0,0);
	keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
	
	// system("color 0a");
 	cout<<"\n\n\n\t\t   Please Wait While Loading\n\n";
 	char a=177, b=219;
 	cout<<"\t\t\t";
 	for (int i=0;i<=15;i++)
 	cout<<a;
 	cout<<"\r";
 	cout<<"\t\t\t";
 	for (int i=0;i<=15;i++)
 	{
 	cout<<b;
  	for (int j=0;j<=1e8;j++); //You can also use sleep function instead of for loop
 	}

 system("cls");

	mainsystem();
}
void mainsystem(void)
{
	cout<<endl;
	cout<<"			Main Menu"<<endl;
	cout<<"	1	Glass"<<endl;
	cout<<"	2	9D Glass"<<endl;
	cout<<"	3	Color Sheet"<<endl;
	cout<<"	4	Apple Sheet"<<endl;
	cout<<"	5	Jelly Sheet"<<endl;
	cout<<"	6	Zack Sheet"<<endl;
	cout<<"	7	Pouch"<<endl;
	cout<<"	8	Leather Pouch"<<endl;
	cout<<"	9	Printed Pouch"<<endl;
	cout<<"	10	Mobile Sticker"<<endl;
	cout<<"\nPlease Enter The Value Range From 1 to 10 For Selction : ";
	int selction;
	cin>>selction;
	switch(selction)
	{
		case 1:
			{
				system("cls");
				int q,t;
				cout<<"Please Enter The Quantity : ";cin>>q;
				t=q*glass;
				cout<<"The Total Bill of Glass is = "<<t;
				total_quantity_glass+=q;
				total_bill_glass+=t;
				cout<<"\nDo You Want To Buy Any Other Item then Press Y Otherwise Any Key :";
				char x;
				cin>>x;
				if(x=='Y'||x=='y')
				{
					mainsystem();
				}
				else
				{
					all_fun();
				}
				break;
			}
		case 2:
			{
				system("cls");
				int q,t;
				cout<<"Please Enter The Quantity : ";cin>>q;
				t=q*ninedglass;
				cout<<"The Total Bill of 9D Glass is = "<<t;
				total_quantity_ninedglass+=q;
				total_bill_ninedglass+=t;
				cout<<"\nDo You Want To Buy Any Other Item then Press Y Otherwise Any Key :";
				char x;
				cin>>x;
				if(x=='Y'||x=='y')
				{
					mainsystem();
				}
				else
				{
					all_fun();
				}
				break;
			}
		case 3:
			{
				system("cls");
				int q,t;
				cout<<"Please Enter The Quantity : ";cin>>q;
				t=q*colorsheet;
				cout<<"The Total Bill of Color Sheet is = "<<t;
				total_quantity_colorsheet+=q;
				total_bill_colorsheet+=t;
				cout<<"\nDo You Want To Buy Any Other Item then Press Y Otherwise Any Key :";
				char x;
				cin>>x;
				if(x=='Y'||x=='y')
				{
					mainsystem();
				}
				else
				{
					all_fun();
				}
				break;
			}
		case 4:
			{
				system("cls");
				int q,t;
				cout<<"Please Enter The Quantity : ";cin>>q;
				t=q*applesheet;
				cout<<"The Total Bill of Apple Sheet is = "<<t;
				total_quantity_applesheet+=q;
				total_bill_applesheet+=t;
				cout<<"\nDo You Want To Buy Any Other Item then Press Y Otherwise Any Key :";
				char x;
				cin>>x;
				if(x=='Y'||x=='y')
				{
					mainsystem();
				}
				else
				{
					all_fun();
				}
				break;
			}
		case 5:
			{
				system("cls");
				int q,t;
				cout<<"Please Enter The Quantity : ";cin>>q;
				t=q*jellysheet;
				cout<<"The Total Bill of Jelly Sheet is = "<<t;
				total_quantity_jellysheet+=q;
				total_bill_jellysheet+=t;
				cout<<"\nDo You Want To Buy Any Other Item then Press Y Otherwise Any Key :";
				char x;
				cin>>x;
				if(x=='Y'||x=='y')
				{
					mainsystem();
				}
				else
				{
					all_fun();
				}
				break;
			}
		case 6:
			{
				system("cls");
				int q,t;
				cout<<"Please Enter The Quantity : ";cin>>q;
				t=q*zacksheet;
				cout<<"The Total Bill of Zack Sheet is = "<<t;
				total_quantity_zacksheet+=q;
				total_bill_zacksheet+=t;
				cout<<"\nDo You Want To Buy Any Other Item then Press Y Otherwise Any Key :";
				char x;
				cin>>x;
				if(x=='Y'||x=='y')
				{
					mainsystem();
				}
				else
				{
					all_fun();
				}
				break;
			}
		case 7:
			{
				system("cls");
				int q,t;
				cout<<"Please Enter The Quantity : ";cin>>q;
				t=q*pouch;
				cout<<"The Total Bill of Pouchs is = "<<t;
				total_quantity_pouch+=q;
				total_bill_pouch+=t;
				cout<<"\nDo You Want To Buy Any Other Item then Press Y Otherwise Any Key :";
				char x;
				cin>>x;
				if(x=='Y'||x=='y')
				{
					mainsystem();
				}
				else
				{
					all_fun();
				}
				break;
			}
		case 8:
			{
				system("cls");
				int q,t;
				cout<<"Please Enter The Quantity : ";cin>>q;
				t=q*leatherpouch;
				cout<<"The Total Bill of Leather Pouch is = "<<t;
				total_quantity_leatherpouch+=q;
				total_bill_leatherpouch+=t;
				cout<<"\nDo You Want To Buy Any Other Item then Press Y Otherwise Any Key :";
				char x;
				cin>>x;
				if(x=='Y'||x=='y')
				{
					mainsystem();
				}
				else
				{
					all_fun();
				}
				break;
			}
		case 9:
			{
				system("cls");
				int q,t;
				cout<<"Please Enter The Quantity : ";cin>>q;
				t=q*printedpouch;
				cout<<"The Total Bill of Printed Pouch is = "<<t;
				total_quantity_printedpouch+=q;
				total_bill_printedpouch+=t;
				cout<<"\nDo You Want To Buy Any Other Item then Press Y Otherwise Any Key :";
				char x;
				cin>>x;
				if(x=='Y'||x=='y')
				{
					mainsystem();
				}
				else
				{
					all_fun();
				}
				break;
			}
		case 10:
			{
				system("cls");
				int q,t;
				cout<<"Please Enter The Quantity : ";cin>>q;
				t=q*mobilesticker;
				cout<<"The Total Bill of Mobile Stickers is = "<<t;
				total_quantity_mobilesticker+=q;
				total_bill_mobilesticker+=t;
				cout<<"\nDo You Want To Buy Any Other Item then Press Y Otherwise Any Key :";
				char x;
				cin>>x;
				if(x=='Y'||x=='y')
				{
					mainsystem();
				}
				else
				{
					all_fun();
				}
				break;
			}
		default:
		{
			cout<<"You Entered Worng Input Please Input Correct Number.";
			system("pause");
			system("cls");
			mainsystem();
			
		}
	}
}
void all_fun(void)
{
	system("cls");
	cout<<endl;
	if(total_quantity_glass>0)
	cout<<"Glass			"<<total_quantity_glass<<" X "<<glass<<" = Rs."<<total_bill_glass<<endl;
	
	if(total_quantity_ninedglass>0)
	cout<<"9D Glass		"<<total_quantity_ninedglass<<" X "<<ninedglass <<" = Rs."<<total_bill_ninedglass<<endl;
	
	if(total_quantity_colorsheet>0)
	cout<<"Color Sheet		"<<total_quantity_colorsheet<<	" X "<<colorsheet <<" = Rs."<<total_bill_colorsheet<<endl;
	
	if(total_quantity_applesheet>0)
	cout<<"Apple Sheet		"<<total_quantity_applesheet<<" X "<<applesheet<<" = Rs." <<total_bill_applesheet<<endl;
	
	if(total_quantity_jellysheet>0)
	cout<<"Jelly Sheet		"<<total_quantity_jellysheet<<" X "<<jellysheet<<" = Rs."<<total_bill_jellysheet<<endl;
	
	if(total_quantity_zacksheet>0)
	cout<<"Zack Sheet		"<<total_quantity_zacksheet<<" X "<<zacksheet<<" = Rs."<<total_bill_zacksheet<<endl;
	
	if(total_quantity_pouch>0)
	cout<<"Pouch			"<<total_quantity_pouch<<" X "<<pouch<<" = Rs."<<total_bill_pouch<<endl;
	
	if(total_quantity_leatherpouch>0)
	cout<<"Leather Pouch		"<<total_quantity_leatherpouch<<" X "<<leatherpouch<<" = Rs."<<total_bill_leatherpouch<<endl;
	
	if(total_quantity_printedpouch>0)
	cout<<"Printed Pouch 		"<<total_quantity_printedpouch<<" X "<<printedpouch<<" = Rs."<<total_bill_printedpouch<<endl;
	
	if(total_quantity_mobilesticker>0)
	cout<<"Mobile Sticker		"<<total_quantity_mobilesticker<<" X "<<mobilesticker<<" = Rs"<<total_bill_mobilesticker<<endl;
	cout<<"Total Quantity = "<<total_quantity_mobilesticker+total_quantity_printedpouch+total_quantity_leatherpouch+total_quantity_pouch+total_quantity_zacksheet+total_quantity_jellysheet+total_quantity_applesheet+total_quantity_colorsheet+total_quantity_ninedglass+total_quantity_glass;
	cout<<"\nTotal Bill = "<<total_bill_glass+total_bill_ninedglass+total_bill_colorsheet+total_bill_applesheet+total_bill_jellysheet+total_bill_zacksheet+total_bill_pouch+total_bill_leatherpouch+total_bill_printedpouch+total_bill_mobilesticker;
	cout<<endl;
	system("pause");
			system("cls");
			mainsystem();
	
}
