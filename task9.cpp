#include<iostream>
using namespace std;
void tpChecker(int people, int tp);
int main()
{
	int people,tp;
	cout<<"Enter no of people: ";
	cin>>people;
	cout<<"Enter no of tp: ";
	cin>>tp;
	tpChecker(people,tp);
}
void tpChecker(int people, int tp)
{
	int sheetsUsedByPeople, totalTp, tpWillLast;
	totalTp=tp*500;
	sheetsUsedByPeople=people*57;
	tpWillLast=totalTp/sheetsUsedByPeople;
	if(tpWillLast > 14)
	{
		cout<<"Your TP will last "<<tpWillLast<<" days, no need to panic!";
	}
	else
	{
		cout<<"Your TP will last "<<tpWillLast<<" days, buy more!";
	}
}