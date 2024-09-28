#include<iostream>
using namespace std;
void discount(string country, int amount);
int main()
{
	string country;
	int amount;
	while(true)
{
	cout<<"Enter your country name(Pakistan/Ireland/India/England/Canada): ";
	cin>>country;
	cout<<"Enter your amount: "<<"$";
	cin>>amount;
	discount(country, amount);
}
}
void discount(string country, int amount)
{
	int payableamount;
	if(country == "Pakistan")
	{
		payableamount=(5*amount)/100;
		cout<<"Final price after discount: "<<"$"<<payableamount<<endl;
	}
	else if(country == "Ireland")
	{
		payableamount=(10*amount)/100;
		cout<<"Final price after discount: "<<"$"<<payableamount<<endl;
	}
	else if(country == "India")
	{
		payableamount=(20*amount)/100;
		cout<<"Final price after discount: "<<"$"<<payableamount<<endl;
	}
	else if(country == "England")
	{
		int payableamount;
		payableamount=(30*amount)/100;
		cout<<"Final price after discount: "<<"$"<<payableamount<<endl;
	}
	else if(country == "Canada")
	{
		payableamount=(45*amount)/100;
		cout<<"Final price after discount: "<<"$"<<payableamount<<endl;
	}
}
	
	