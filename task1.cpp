#include<iostream>
using namespace std;
void evaluation(int numb1, int numb2);
int main()
{
	int numb1, numb2;
	cout<<"Enter your 1st number: ";
	cin>>numb1;
	cout<<"Enter your 2nd number: ";
	cin>>numb2;
	evaluation(numb1, numb2);
}
void evaluation(int numb1, int numb2)
{
	if(numb1 == numb2)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
}
