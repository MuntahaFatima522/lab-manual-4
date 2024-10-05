#include<iostream>
using namespace std;

void ToFeet(float inches);

main()
{
	float inches;
	cout<<"Enter the measurement in inches: ";
	cin>>inches;
	ToFeet(inches);
}


void ToFeet(float inches)
{
	float feet;
	feet=inches/12;
	cout<<"Equivalent in feet: "<<feet;
}