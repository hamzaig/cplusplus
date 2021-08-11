#include <cstdlib> 
#include <ctime> 
#include <iostream>
using namespace std;
int main() 
{ 
    
}

int random_number (void)
{
	srand((unsigned)time(0)); 
    int random_integer = rand(); 
    return random_integer; 
}
