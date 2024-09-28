#include<iostream>
using namespace std;
void challan(int speed);
int main()
{	
	int speed;
	cout<<"Enter the value of speed: ";
	cin>>speed;
	challan(speed);
}
void challan(int speed)
{
	if(speed > 100)
	{
		cout<<"Halt..... YOU WILL BE CHALLANED";
	}
	else
	{
		cout<<"Perfect! you are going good";
	}
}