#include<iostream>
using namespace std;
void comparison(int hr, int min);
int main()
{	
	int hr,min;
	cout<<"Enter the value in hr: ";
	cin>>hr;
	cout<<"Enter the value in min: ";
	cin>>min;
	comparison(hr, min);
}
void comparison(int hr, int min)
{
	int minToHr;
	minToHr=min/60;
	if(minToHr > hr)
	{
		cout<<minToHr;
	}
	else
	{
		cout<<hr;
	}
}