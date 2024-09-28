#include<iostream>
using namespace std;
void flower(int redRose, int whiteRose, int tulips);
int main()
{
	int redRose, whiteRose, tulips;
	flower(redRose, whiteRose, tulips);
}
void flower(int redRose, int whiteRose, int tulips)
{
	float priceOfRedRoses, priceOfWhiteRoses, priceOfTulips, totalAmount;
	cout<<"How many pieces of Red roses: ";
	cin>>redRose;
	cout<<"How many pieces of white roses: ";
	cin>>whiteRose;
	cout<<"How many pieces of tulips: ";
	cin>>tulips;
	priceOfRedRoses=2*redRose;
	priceOfWhiteRoses=4.1*whiteRose;
	priceOfTulips=2.5*tulips;
	totalAmount=priceOfRedRoses+priceOfWhiteRoses+priceOfTulips;
	if(totalAmount > 200)
	{
		int amountAfterDiscount;
		amountAfterDiscount=(20*totalAmount)/100;
		cout<<"Amount after Discount is: "<<"$"<<amountAfterDiscount;
	}
	else
	{
		cout<<"Total amount is: "<<"$"<<totalAmount;
	}
}