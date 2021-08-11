#include <iostream>
using namespace std;

class test
{
	int number;
	static int counter;
	
	public:
	void receivevalue(int);
	void showcounter(void);	
};

	void test::receivevalue(int x)
	{
		number=x;
		cout<<"Number = "<<number<<endl;
		counter++;
	}
	
	void test::showcounter(void)
	{
		cout<<"Counter = "<<counter<<endl;
	}
	
	int test::counter;

int main()
{
	test t1,t2,t3;
	t1.showcounter();
	t2.showcounter();
	t3.showcounter();
	t1.receivevalue(100);
	t2.receivevalue(200);
	t3.receivevalue(300);
	t1.showcounter();
	t2.showcounter();
	t3.showcounter();
	
}
