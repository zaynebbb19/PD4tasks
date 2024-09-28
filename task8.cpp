#include<iostream>
using namespace std;
void playtime(int holidays);
int main()
{
	int holidays;
	cout<<"Enter no of holidays: ";
	cin>>holidays;
	playtime(holidays);
}
void playtime(int holidays)
{
	int workingdays, playTimeOnHolidays, playTimeOnWorkingdays, totalPlayTime;
	workingdays=365-holidays;
	playTimeOnHolidays=127*holidays;
	playTimeOnWorkingdays=63*workingdays;
	totalPlayTime=playTimeOnHolidays+playTimeOnWorkingdays;
	if(totalPlayTime <= 30000)
	{
		int remainingTime, remainingTimeInHr, remainingTimeInMin;
		remainingTime=30000-totalPlayTime;
		remainingTimeInHr=remainingTime/60;
		remainingTimeInMin=remainingTime%60;
		cout<<"Tom sleeps well"<<endl;
		cout<<remainingTimeInHr<<" hrs and "<<remainingTimeInMin<< "mins"<<" less for play";
	}
	else
	{
		int excessTime, excessTimeInHr, excessTimeInMin;
		excessTime=totalPlayTime-30000;
		excessTimeInHr=excessTime/60;
		excessTimeInMin=excessTime%60;
		cout<<"Tom will run away"<<endl;
		cout<<excessTimeInHr<<" hrs and "<<excessTimeInMin<<" mins"<<" for play";
	}
}