#include<iostream>
#include<windows.h>
using namespace std;
void name(int x, int y, string s);
void gotoxy(int x,int y);
int main()
{
    system("cls");
    int x = 66, y = 17;
    string s = "ZAINAB";
    name(x, y, s);
}

void name(int x, int y, string s)
{
    gotoxy(x, y); 
    cout << s;
}
void gotoxy(int x,int y)
{

	COORD coordinates;

	coordinates.X = x;

	coordinates.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
