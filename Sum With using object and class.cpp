#include <iostream>
using namespace std;

class test
{
	int x,y,z;
	public:
		void putdata(void);
		void getdata(void);
};

void test::getdata(void)
{
	cout<<"Please Enter Two Values Which You Want To Add\n";
	cin>>x>>y;
}

void test::putdata(void)
{
	z=x+y;
	cout<<"The Sum of Two Variable is : "<<z;
}

int main()
{
	test obj;
	obj.getdata();
	obj.putdata();
	cout<<endl;
	system("pause");
	
}










