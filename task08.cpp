#include<iostream>
using namespace std;
void printmenu();
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks);
void compareMarks(string nameStd1, string nameStd2, float ecatMarksStd1, float ecatMarksStd2);
int main()
{
	string name,nameStd1,nameStd2;
	float matricMarks, interMarks, ecatMarks, ecatMarksStd1, ecatMarksStd2;
	printmenu();
	calculateAggregate(name, matricMarks, interMarks, ecatMarks);
	compareMarks(nameStd1, nameStd2, ecatMarksStd1, ecatMarksStd2);
}
void printmenu()
{
    cout << "00000000000000000000000000000000000000000000000000" << endl;
    cout << "00                                              00" << endl;
    cout << "00       UNIVERSITY ADMISSION MANAGEMENT        00" << endl;
    cout << "00                                              00" << endl;
    cout << "00                 SYSTEM                       00" << endl;
    cout << "00                                              00" << endl;
    cout << "00000000000000000000000000000000000000000000000000" << endl;
}
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks)
{
	float matricPercent, interPercent, ecatPercent, Aggregate;
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"Enter your matric Marks: ";
 	cin>>matricMarks;
	cout<<"Enter your inter Marks: ";
	cin>>interMarks;
	cout<<"Enter your ecat Marks: ";
	cin>>ecatMarks;
	matricPercent=(((matricMarks/1100)*100)*0.3);
	interPercent=(((interMarks/550)*100)*0.3);
	ecatPercent=(((ecatMarks/400)*100)*0.4);
	Aggregate=matricPercent+interPercent+ecatPercent;
	cout<<"Total aggregate is: "<<Aggregate<<endl;
}
void compareMarks(string nameStd1, string nameStd2, float ecatMarksStd1, float ecatMarksStd2)
{
	int rollNumber1;
	cout<<"Enter 1st name: ";
	cin>>nameStd1;
	cout<<"Enter 2nd name: ";
	cin>>nameStd2;
	cout<<"Enter 1st ecat Marks: ";
	cin>>ecatMarksStd1;
	cout<<"Enter 2nd ecat Marks: ";
	cin>>ecatMarksStd2;
	if( ecatMarksStd1 > ecatMarksStd2)
	{
		cout<<"Roll number 01 will be: "<<nameStd1;
	}
	else
	{
		cout<<"Roll number 01 will be: "<<nameStd2;
	}
}




