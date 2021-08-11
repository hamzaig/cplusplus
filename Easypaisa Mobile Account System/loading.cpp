#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

#include <string>
#include <windows.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void Draw(int style, int col, int row, int length,int amount, bool filled, int shadow );
void gotoXY(int x, int y);
void gotoXY(int x, int y, string text);

int main()
{
	Draw(1,2,1,76,23,0,0);  // Box, 1 line, around screen





  cout<<"\n\n\n\n\n\n\n";

  system("PAUSE");
  	int x=1;int y=0;
	for(int i=1;i<=9;i++)
	{
	 cout<<" A\t\tB\t\tU\t\tS\t\tE\t\tE\t\tM\t\tA\t\tB"<<endl;
	}

}
void gotoXY(int x, int y) 
{ 
	CursorPosition.X = x; 
	CursorPosition.Y = y; 
	SetConsoleCursorPosition(console,CursorPosition); 
}

void gotoXY(int x, int y, string text) 
{ 
	CursorPosition.X = x; 
	CursorPosition.Y = y; 
	SetConsoleCursorPosition(console,CursorPosition);
	cout << text;
}

void Draw(int style, int col, int row, int length,int amount, bool fill, int sw )
{
	// Draws a 1 or 2 line box 
	int a;
	if ( sw >4)
		sw = 4;
	style=(style-1)*6;
	char box[12];
	char shdw[5];
	
	box[0] = '\xDA';//  +
	box[1] = '\xBF';//  +
	box[2] = '\xC0';//  +
	box[3] = '\xD9';//  +
	box[4] = '\xB3';//  ¦ 
	box[5] = '\xC4';//  -
	box[6] = '\xC9';//  + 
	box[7] = '\xBB';//  +
	box[8] = '\xC8';//  +
	box[9] = '\xBC';//  +
	box[10] = '\xBA';// ¦
	box[11] = '\xCD';// -
	shdw[1] = '\xB0';// ¦
	shdw[2] = '\xB1';// ¦
	shdw[3] = '\xB2';// ¦
	shdw[4] = '\xDB';// ¦
	char tl,tr,bl,br,side,edge,shadow;
	tl = box[style];
	tr = box[style+1];
	bl = box[style+2];
	br = box[style+3];
	side = box[style+4];
	edge = box[style+5];
	shadow = shdw[sw];
	string Line(length-2,edge);
	string Shadow(length,shadow);
	string Fill(length-2, ' ');
	gotoXY(col,row);
	cout << tl << Line << tr;
	for (a = 1; a <amount-1;a++)
	{
		gotoXY(col,row+a);
			cout << side;
		if  (fill)
			cout << Fill;
		else		
			gotoXY(col+length-1,row+a);
		cout << side;
		if (sw)
			cout << shadow;
	}
	gotoXY(col,(amount+row)-1);
	cout << bl << Line << br;
	if (sw)
	{
		cout << shadow;
		gotoXY(col+1,row+amount , Shadow );
	}
}
