#include<iostream>
using namespace std;
void bonus(int numb1, int numb2);
int main()
{	
	int numb1,numb2;
	cout<<"Enter your position of the tile: ";
	cin>>numb1;
	cout<<"Enter your friend's position on the tile: ";
	cin>>numb2;
	bonus(numb1, numb2);
}
void bonus(int numb1, int numb2)
{
	if(numb1-numb2 <= 6)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
}