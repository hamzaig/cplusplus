#include <iostream>
using namespace std;
int main()
{
   int bs,gs,hra,da;
   std::cout<<"Please Enter Basic Salary\n";
   std::cin>>bs;
   if(bs<1500)
   {
   	hra=bs*10/100;
   	da=bs*90/100;
	}
   	else
	{	 
   	hra=500;
   	da=bs*98/100;
	}
	gs=hra+bs+da;
	std::cout<<"The Gross Salary Is That: "<<gs<<endl;


	
	system("pause");
	return 0;
}

