// my first program
#include <iostream>

int main()

{
	int d1,d2,d3,d4,d5,sum,num;
	std::cout<<"Enter Basic Salary: ";
	std::cin >> num;
    d1=(num%10);
    d2=(num%100)/10;
    d3=(num%1000)/100;
    d4=(num%10000)/1000;
    d5=(num%100000)/10000;
    sum=d1+d2+d3+d4+d5;
  
	std::cout<<"Ahmad Gross Salary is "<<sum <<std::endl;
	
	return 0;
}
