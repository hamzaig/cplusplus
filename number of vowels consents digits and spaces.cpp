#include<iostream>
using namespace std;
int main()
{
	char c[100];
	cout<<"Please Enter Any Line: ";
	cin.getline(c,100);
	
	int v,co,d,s;
	v=co=d=s=0;
	
	for (int i=0;c[i]!='\0';i++)
	{
		if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
		v++;
		else if(c[i]>='a'&&c[i]<='z'||c[i]>='A'&&c[i]<='Z')
		co++;
		else if(c[i]>='0'&&c[i]<='9')
		d++;
		else if(c[i]>=' ')
		s++;
	}
	
	cout<<"Vowel : "<<v<<endl<<"Consents : "<<co<<endl<<"Digits : "<<d<<endl<<"Spaces : "<<s<<endl;
	system("pause");
}
