#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int x, int y);
void moveplayer(int x, int y);
int main()
{	int x=4,y=4;
	system("cls");
	printmaze();
	while(true)
{
	moveplayer(x,y);
	y=y+1;
	if(y==15)
	{
		y=4;
	}
}
}
void moveplayer(int x, int y)
{
	gotoxy(x,y);
	cout<<"P";
	Sleep(100);
	gotoxy(x,y);
	cout<<" ";
}
void gotoxy(int x,int y)
{

	COORD coordinates;

	coordinates.X = x;

	coordinates.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
void printmaze()
{
	cout<<"##############################"<<endl;
	cout<<"#                            #"<<endl;
	cout<<"#                            #"<<endl;
	cout<<"#                            #"<<endl;
	cout<<"#                            #"<<endl;
	cout<<"#                            #"<<endl;
	cout<<"#                            #"<<endl;
	cout<<"#                            #"<<endl;
	cout<<"#                            #"<<endl;
	cout<<"#                            #"<<endl;
	cout<<"#                            #"<<endl;
	cout<<"#                            #"<<endl;
	cout<<"#                            #"<<endl;
	cout<<"#                            #"<<endl;
	cout<<"#                            #"<<endl;
	cout<<"#                            #"<<endl;
	cout<<"##############################";
}
