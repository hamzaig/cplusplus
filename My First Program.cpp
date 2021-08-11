// my first program
#include <iostream>

int main()

{
	int abs;
	int hra;
	int da;
	int gs;
	std::cout<<"Enter Basic Salary: ";
	std::cin >> abs;
	hra = abs*40/100;
	da = abs*20/100;
	gs = abs + hra + da ;
	std::cout<<"Ahmad Gross Salary is "<<gs <<std::endl;
	
	return 0;
}
