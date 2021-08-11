#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	keybd_event(VK_MENU,0x36,0,0);
	keybd_event(VK_RETURN,0x1c,0,0);
	keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
	system("pause");
	int x=1;int y=0;
	for(int i=1;i<=999;i++)
	{
	 cout<<" A\t\tB\t\tU\t\tS\t\tE\t\tE\t\tM\t\tA\t\tB"<<endl;
	}

	
}
