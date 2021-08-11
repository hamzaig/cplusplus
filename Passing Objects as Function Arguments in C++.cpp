#include <iostream>
using namespace std;
class time
{
	int h,m;
	public:
	void entertime(int,int);
	void gettime(void);
	void sumtime(time,time);	
};

	void time::entertime(int x,int y)
	{
		h=x;
		m=y;
	}
	
	void time::gettime(void)
	{
		cout<<"The Time Is "<<h<<":"<<m<<endl;
	}
	
	void time::sumtime(time t1 ,time t2)
	{
		m=t1.m+t2.m;
		h=m/60;
		m=m%60;
		h=h+t1.h+t2.h;
	}
	
int main()
{
	int x,y,x1,y1;
	cout<<"Please Enter First Time The Hours and Minuts"<<endl;cin>>x>>y;
	cout<<"Please Enter Second Time The Hours and Minuts"<<endl;cin>>x1>>y1;
	time t1,t2,t3;
	t1.entertime(x,y);
	t2.entertime(x1,y1);
	t3.sumtime(t1,t2);
	t1.gettime();
	t2.gettime();
	t3.gettime();
	
}	
	
	
	
	
	
