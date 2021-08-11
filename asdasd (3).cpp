#include<iostream>
using namespace std;
struct circle
{
	float pai=3.1416;
	float r;
	string color={"Red"};
};
struct triangle
{
	float l;
	float w;
	string color={"White"};	
};
struct rectangle
{
	float l;
	float w;
	string color={"Black"};	
};
struct area
{
		circle	c;
		triangle	t;
		rectangle	r;
};
int main()
{
	area a;
	int s;
	cout<<"please Enter number to perform function\n1. Find Area of circle\n2. Find Area of Triangle\n3. Find Area of Rectangle\n";
	cin>>s;
	switch (s)
	{
		case 1:
		{
			cout<<"Please Enter Value or Radius";cin>>a.c.r;
			cout<<"The Area of circle is = "<<a.c.pai*a.c.r*a.c.r<<"\nThe Color is"<<a.c.color;
			break;
		}
		case 2:
		{
			cout<<"Please Enter Value of length";cin>>a.t.l;
			cout<<"Please Enter Value of width";cin>>a.t.w;
			cout<<"The Area of circle is = "<<(a.t.l*a.t.w)/2<<"\nThe color is"<<a.t.color;
			break;
		}
		case 3:
		{
			cout<<"Please Enter Value of length";cin>>a.r.l;
			cout<<"Please Enter Value of width";cin>>a.r.w;
			cout<<"The Area of circle is = "<<(a.t.l*a.t.w)<<"\nThe color is"<<a.r.color;
			break;
		}	
	}
	
	
	
	
	
}
